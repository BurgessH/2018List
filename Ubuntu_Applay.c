//Ubuntu16.04开启SSH服务:
//安装
    sudo apt-get install openssh-server
//启动
    sudo service ssh start
//查询服务启动状态
    sudo ps -e | grep ssh | sudo service ssh status
//sysv-rc-conf：服务管理程序；
    sudo apt-get install sysv-rc-conf
//运行
    sudo sysv-rc-conf
//修改默认端口：
    sudo vim /etc/ssh/sshd_config
//重启服务
    sudo service ssh restart
//查看状态
    netstat -an | grep "LISTEN "

//用端口进行连接
    ssh username@ip -p 50022

//指定版本
    sudo apt-get install aptitude
