服务器平时使用不仅要考虑 tomcat 宕机，还要考虑 nginx 宕机，，所以会有 n 个备用的 nginx，当有一个服务器挂掉时，服务器就可以进行切换.

首先需要将每台 nginx 服务器安装上 keepalived

    yum install keepalived

安装后目录为/etc/keepalived 其下有一个 keepalived.conf 文件为配置文件，主从 nginx 需要在其配置。
