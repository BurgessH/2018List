# GitHub仓库  
## I repository
 - 创建仓库；
 - 代码生成静态界面gitpages(master-branch);
 - 删除仓库；
 
## II Git-Tools
 - git config --list
 - git config --global user.name "BurgessH"
 - git config --global user.email "2042877026@qq.com"
 - cd ~ (.gitconfig)
 
## III bash command
![](images/01.png)  

 - git init （本地创建并初始化本地仓库-remote same name）
 - git status(查看提交信息)
 - git add README.md(存放在暂存区)
 - git commit -m "first commit"
 - git commit -a -m"commit"(有提交历史)

## IV Remote Repository
 - git remote add origin http://github.com/BurgessH/2018List(远程仓库和本地仓库建立联系)
 - git push origin master(将本地的提交推送到远程仓库)  
   - (error: failed to push some refs to远程仓库中的README.md文件不在本地的目录中) 
   - (git pull --rebase origin master)
 - git pull()
