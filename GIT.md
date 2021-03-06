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
 - git pull origin master
 - git clone https://github.com/BurgessH/2018List
  - git commit -a -m
  - git push
  - install Nodejs  cmd: node-v  npm install git-it -g  git-it

## V 访问协议  
### 生成RSA秘钥对
 - ssh-Keygen -t rsa -C "2042877026@qq.com"
 - ssh key配置到Github;
 - 登录github-> Settings-> SSH and GPG Keys-> New SSH key添加
 - ssh -T git@github.com

## 第三季
### .gitignore和换行符:github.com/github/gitignore
  - 忽略文件（.gitignore）
    - /tem(零时文件)
    - git check-ignore -v .project

### 第三节别名和缓存凭证
  - git log
  - git log --oneline
  - git log --pretty=format:'%h %ad | %s%d [%an]' --graph --date=short
  - git config --global alias.cm commit
  - git config --global credential.helper wincred(每次推送都要输入用户名和Password)

### 第四节GIT协议：
  - 本地协议：
  - Git协议：git clone git://server_ip/test.git
  - HTTP协议:git remote add arigin https://
  - SSH协议:git clone git@github.com:BurgessH/2018List.git
    - ssh-Keygen -t rsa -C "2042877026@qq.com"

### 第五节GIT新命令操作
  - git 命令信息
  - git help -a(查看全部git命令)
  - git blame README.md(查看文件历史)
  - git clean -n/显示；-f(真正的删除)（-f删除.gitconfig中忽略的文件）
  - git add -p(一个文件多个提交)

 ### 第六节标签操作
   - git tag -d (删除标签)
   - git tag v0.1 0866684
   - git show v0.1
   - git tag foo -m "message"

 ### git分支操作
   - 分支介绍/操作
     - git branch -v
     - git branch iss53(创建一个新的分支)
     - git branch iss53(创建一个分支)
     - git checkout iss53(切换到iss53分支)
       - touch b 
     - git checkout mster
     - git branch hotfix
     - git merge hotfix(master上合并分支)
     - git branch -d hotfix(删除分支)
     
   - 分支命令:https://zhuanlan.zhihu.com/p/29362567

 ### 分支版本冲突解决  
  - 在不同分支上，修改同一个文件；
  - 不同的人，修改了同一个文件；
  - 不同的仓库，修改了同一个文件；
  - git merge hotfix(切换到master上合并)
  - git branch -d hotfix(删除分支)   
  - 分支命令:https://zhuanlan.zhihu.com/p/29362567
   
## 第四季 团队协作工作流
### 集中式工作流01 
  - center repository(中央)  
  - 添加协作人员  
  - 分别克隆仓库  
  - 冲突解决：01提交文件a至远程仓库;02添加文件后提交失败；这是拽pull下来后再重新push(三方合并)；删除边界线两个修改都保留  
  - git pull --rebase(不会产生三方合并)  
  - git push 
  
### 02功能分支协作流（feature branch) 
  - 所有的功能开发都是在功能开发上，各自的开发不会打乱master分支；  
  - git co -b feature(本地新建一个分支touch a echo 11 >> a)  
  - git push origin feature()  
  - git push -u origin feature()  
  
### gitflow工作流
  - 
### forking 工作流
  - Forking repository  
  - git clone https://github.com/BurgessH/GIT-operate(本地仓库)  
  - git remote add upstream git@github.com:BurgessH/GIT-operate（关联远程仓库）  
  - git pull upstream master（拽下远程内容）  
    - git ad  
    - git status  
    - git commit -m "commit message"  
  - git push origin master    
  - creat new pull request(确保已经检查自己的github仓库中的内容无误) 
  
  ### pull request 总结
  
 ## 第五季 stylish网站换肤  
  - 工具使用  
    - 开发者工具  
    - stylish插件  
    - styles.org  
    - CSS基础  
      - cascading style sheets ：
      - 样式有三种存储方式：嵌入、内联、外联
      
 ## 第六季 how-to-markdown  
   - 开源软件项目分类：
     - wc -l xx.c(查看代码lines)
     - grep -v ^$ entropy/entropy.c | wc -l(去掉空行)
     
 ## 第七季 gitbook   
   - 
 ## 第八季 Jekyll静态工作站  
   - 
  
  
  
  
  
  
  
  
  
  
  
  

