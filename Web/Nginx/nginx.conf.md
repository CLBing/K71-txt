# Nginx 配置文件

**nginx.conf 为 nginx 的配置文件，文件目录为/usr/local/nginx/conf/nginx.conf**

nginx 分为 3 个块

### 第一部分:全局块

配置影响 nginx 全局的指令。一般有运行 nginx 服务器的用户组，nginx 进程 pid 存放路径，日志存放路径，配置文件引入，允许生成 worker process 数等。

    user nobody nobody;     配置运行Nginx服务器用户（组）
    worker_processes 1;     Nginx处理worker并发数量，值越大处理并发量越大
    pid logs/nginx.pid      Nginx进程PID存放路径

### 第二部分:envents 块

配置影响 nginx 服务器或与用户的网络连接。有每个进程的最大连接数，选取哪种事件驱动模型处理连接请求，是否允许同时接受多个网路连接，开启多个网络连接序列化等

    use epoll;  use是事件模块指令，用来指定Nginx的工作模式。Nginx支持的工作模式有select、poll、kqueue、epoll、rtsig和/dev/poll 。其中select 和poll 都是标准的工作模式，kqueue和epoll是高效的工作模式，不同的是epoll用在Linux平台上，而kqueue用在BSD系统中。对于Linux系统，epoll工作模式是首选。
    worker_connections 1024;    用于定义Nginx每个进程的最大连接数，默认是1024

### 第三部分:http 全局块

http 块：可以嵌套多个 server，配置代理，缓存，日志定义等绝大多数功能和第三方模块的配置。如文件引入，mime-type 定义，日志自定义，是否使用 sendfile 传输文件，连接超时时间，单连接请求数等。

    include       mime.types;  #文件扩展名与文件类型映射表
    default_type  application/octet-stream; #默认文件类型，默认为text/plain
    log_format     自定义服务日志
    sendfile  on;   允许sendfile方式传输文件
    keepalive_timeout 65;   连接超时时间

http 块内还嵌入了

- server 块：配置虚拟主机的相关参数，一个 http 中可以有多个 server。
- location 块：配置请求的路由，以及各种页面的处理情况。

#### server 块

erver 块是对虚拟主机的配置，server 标志定义虚拟主机开始

    listen 80;  用于指定虚拟主机的服务端口
    server_name 用来指定IP地址或域名，多个域名之间用空格分开
    index用于设定访问的默认首页地址。
    root指令用于指定虚拟主机的网页根目录，这个目录可以是相对路径，也可以是绝对路径。
    charset用于设置网页的默认编码格式。
    access_log 用来指定虚拟主机的访问日志存放路径，最后的main 用于指定访问日志的输出格式。

#### location 块

URL 地址匹配是进行 Nginx 配置中最灵活的部分。用户可以通过 location 指令实现 Nginx 对动、静态网页进行过滤处理。使用 location URL 匹配配置还可以实现反向代理，用于实现 PHP 动态解析或者负载负载均衡。

root

nginx 指定文件路径两种方法 root 与 alias
root 与 alias 主要区别在于 nginx 如何处理 location 后面的 uri 路径，
使用 root 处理时，nginx 会自动根据/root 路径/location 路径来寻文件。

    location /a/{
        root /root/www/;
    }

这时寻找文件 nginx 则会自动去/root/www/a/下寻找

alias 处理时，会替换掉 location 后的 uri

    location /b/{
        alias /root/www/;
    }

这是寻找文件 nginx 则会去/root/www 下寻找自动丢弃 location 路径。

**alias 只能在 location 中使用，root 则可以在 server,http,location 中使用，alias 必须使用"/"结束，否则找不到文件，而 root 则可有可无。**

autoindex on

    列出文件目录，根据nginx指定文件的路径(location root alias)来列出目录下的文件

    expires 30d     设定页面缓存时间 不缓存或一直使用缓存
