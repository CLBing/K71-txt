
## 多媒体标签

### `<embed>`标签：播放多媒体文件（音频、视频等）

* src="多媒体文件的路径"
* loop="-1"：属性值代表播放次数，-1代表循环播放。
* autostart="false"：打开网页时，禁止自动播放。默认值是true。
* volume="100"：设置默认的音量大小，测试发现这个值好像不起作用哦。
* width：指Flash文件的宽度
* height：指Flash文件的高度
* quality：指Flash的播放质量，质量有高有低 hight low
* pluginspage：如果指定的Flash插件不存在，则从pluginspage指定的地方进行下载。
* type：指定Flash的文件格式类型
* wmode：指Flash的背景是否可以透明，取值：transparent是透明的

例

    <body>
        <embed src="1.mp3"></embed>
    </body>

### `<bgsound>`标签：播放背景音乐

* src="音乐文件的路径"
* loop="-1"：属性值代表播放次数，-1代表循环播放
* volume="":该属性值域为-10,000到0，它决定背景音乐的音量大小。
* balance=""该属性取值在-10,000到+10,000，它决定扬声器之间的音量如何分配。

例

    <body>
        <bgsound src="1.mp3"></bgsound>
    </body>

打开网页后，在IE 8中播放正常，播放时网页上显示一片空白。在google浏览器中无法播放

### <object>标签：播放多媒体文件（音频、视频等）

* classid：指定Flash插件的ID号，一般存在于注册表中。
* codebase：如果Flash插件不存在，则从codebase指定的地址下载。
* `<param>`标签的主要作用：设置具体的详细参数。

`在网页中插入Flash时，为了同时兼容多种浏览器，需要将<object>标签和<embed>标签标记一起使用，但使用的顺序是：<object>中嵌套<embed>标记。`

### `<marquee>`：滚动字幕标签

如果在这个标签里设置了内容，那么，打开网页时，内容会像弹幕一样自动移动。 属性：

* direction="right"：移动的目标方向。属性值可以是：left（从右向左移动，默认值）、right（从左向右移动）、up（从下向上移动）、down（从上向下移动）。

* behavior="slide"：行为方式。属性值可以是：slide（只移动一次）、scroll（循环移动，默认值）、alternate（循环移动）、。 alternate和scroll属性值都是循环移动，区别在于：假设在direction="right"的情况下，behavior="scroll"表示从左到右、从左到右、从左到右···behavior="alternate"表示从左到右、从右到左、从左到右···

* scrollamount="30"：移动的速度

* loop="3": 循环多少圈。负值表示无限循环

* scrolldelay="1000"：移动一次休息多长时间。单位是毫秒。


