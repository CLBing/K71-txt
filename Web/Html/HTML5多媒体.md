## HTML5多媒体
在HTML5之前，在网页上播放音频/视频的通用方法是利用Flash来播放。但是大多情况下，并非所有用户的浏览器都安装了Flash插件，由此使得音频、视频播放的处理变得非常复杂；并且移动设备的浏览器并不支持Flash插件。


### 音频

HTML5通过`<audio>`标签来解决音频播放的问题


    <audio src="music.mp3" autoplay controls> </audio>

* autoplay 自动播放。写成autoplay 或者 autoplay = ""，都可以。

* controls 控制条。（建议把这个选项写上，不然都看不到控件在哪里）

* loop 循环播放。

* preload 预加载 同时设置 autoplay 时，此属性将失效。

除了src还可以使用source来指定音乐

    <audio controls loop>
        <source src="music.mp3"/>
        <source src="music.ogg"/>
        <source src="music.wav"/>
        对不起，你的浏览器暂不支持此音频
    </audio>

支持audio的浏览器会进入`<audio></audio>`内,audio会自动寻找`<source>`,不支持的浏览器会自动略过`<audio></audio>`但不会略过文字，所以当不支持audio的浏览器使用时会自动显示文字


### 视频

HTML5通过`<video`>标签来解决视频播放的问题

    <video src="video/movie.mp4" controls autoplay></video>

* autoplay 自动播放。写成autoplay 或者 autoplay = ""，都可以。

* controls 控制条。（建议把这个选项写上，不然都看不到控件在哪里）

* loop 循环播放。

* preload 预加载 同时设置 autoplay 时，此属性将失效。

* width：设置播放窗口宽度。

* height：设置播放窗口的高度。


同音频一样除了src还可以使用source来指定视频

    <video controls autoplay>
        <source src="video/movie.mp4"/>
        <source src="video/movie.ogg"/>
        <source src="video/movie.webm"/>
        抱歉，不支持此视频
    </video>

