<div align=center>Github理解整理</div>
=    
## git 本地为3个区  

  对于任何一个文件，在 Git 内都只有三种状态：已提交（committed），已修改（modified）和已暂存（staged）
  1. 已提交：表示该文件已经被安全地保存在版本库中了。
  2. 已修改：表示修改了某个文件，但还没有提交到暂存区。
  3. 已暂存：表示把已修改的文件已经放到暂存区了，下次提交时一并被保存到版本库中。

  * 工作区（working directory）：电脑看到的目录  
  * 暂存区（stage index） ：英文叫stage, 或index。一般存放在 ".git目录下" 下的index文件（.git/index）中，所以我们把暂存区有时也叫作索引（index）。
  * 版本区（history）：工作区有一个隐藏目录.git，这个不算工作区，而是Git的版本库。  

## .git目录
1. hooks：存放shell脚本，可以设置特定的git命令后触发相应的脚本
2. info:git仓库的一些信息
3. logs:保存所有更改的引用记录
4. objects:该目录存放所有的Git对象,对象的SHA1哈希值（一共40位）的前两位是文件夹名称，后38位作为存在相应文件夹下对象的文件名。
5. refs:存储指向branch的最近一次commit对象的指针.heads是存储本地仓库每一个分支最近一次commit对象, remotes则是存储最近一次push到远程仓库的commit对象, tags是存储历史版本的最后一次commit对象(tags本质就是branch，与branch不同的是tag是不会有改动的，是历史版本记录)
6. COMMIT_EDITMSG:本地最后一个提交的信息
7. config:GIt仓库的配置文件
8. description:仓库的描述信息，主要给gitweb等git托管系统使用
9. HEAD:该文件表示当前本地签出的分支
10. index:git的暂存区,是一个二进制文件

## git跟踪状态
* 使用命令 git add 开始跟踪文件  
* 再运行 git status 命令，会看到文件已被跟踪，并处于暂存状态  
* 只要在 “Changes to be committed” 这行下面的，就说明是已暂存状态。git add 后面可以指明要跟踪的文件或目录路径。如果是目录的话，就说明要递归跟踪该目录下的所有文件。
* 修改已跟踪文件，再次运行git status查看状态文文件会出现两次，一次是工作区修改后文件，一次是上次提交未修改文件。如果这时提交的话，那么提交的将是未修改的暂存文件，对文件的修改并不会被提交。
* 
* 