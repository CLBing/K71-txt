## git基础配置信息

    git config -l   //查看配置信息
    git config user.name 'uesrname'    //git配置用户名
    git config user.email '12345@qq.com'    //git配置邮箱
    git status  //查看git状态

创建新的 Git 仓库

    git init
将文件添加到暂存区

    git add file
        -A  //新增、和修改的、和删除的都加到缓存

添加到仓库

    git commit -m "描述"
        -a  //跳过添加文件到暂存区的步骤。
远程主机的最新内容拉到本地，不进行合并

    git fetch origin master

远程主机的master分支最新内容拉下来后与当前本地分支直接合并 

    git pull origin master
查看在你上次提交之后是否有修改

    git status  //查看是否修改过
    git diff    //命令查看已暂存和未暂存文件之间的差异。
        --cached    //查看已缓存的改动
        git diff file   //查看已缓存的与未缓存的所有改动
        --stat  //显示摘要而非整个 diff

删除文件

    rm  //本地工作删除
    git rm -r --cached .    //删除缓存区所有文件命令
    git rm file //已跟踪文件清单中移除
        -f  //删除之前修改过并且已经放到暂存区域.若文件还在暂存区并未提交，使用 git rm时命令将会出错，需添加。
        --cached    //把文件从暂存区域移除，但仍然希望保留在当前工作目录

git克隆项目
    
    git clone 项目url
    
git保存账户密码

    git config --global credential.helper store 
    //目录  'C:/用户/用户名'生成一个.git-credential，随后git push/pull输入一次账户密码保存即可

git删除远程仓库文件  

    git rm file //删除文件夹添加-r
    git add
    git commit -m "描述"
    git push

移动文件（重命名）

    git mv file

    其过程类似于：
    mv README README.config
    git rm README
    git add README.config

## git分支
git查看日志

    git log
        --oneline   //简化日志输出格式

查看分支   

    git remote 
        -v  //详细分支