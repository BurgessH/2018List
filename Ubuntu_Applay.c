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
    
# Ubuntu server:
  ## https://my.vultr.com (server addr)  
  ## 0.install pptpd (server app)  
    - sudo apt-get install pptpd 
    
  ## 1.修改 /etc/pptpd.conf
    - sudo vi /etc/pptpd.conf
    -find # TAG:localip,在后面添加以下2 lines:
    - localip 192.168.0.1
    - remoteip 192.168.0.234-238,192.168.0.245
     
  ## 2.修改文件 /etc/ppp/pptpd-options
    - sudo vi /etc/ppp/pptpd-options
    - 找到#ms-dns这行，去掉前面的#号，修改成google提供的DNS server或者其他的DNS：
    - ms-dns 8.8.8.8
    - ms-dns 8.8.4.4
        
  ## 3.修改文件/etc/ppp/chap-secrets, 按一行四列添加账号、服务器、密码和IP限制。
    - user pptpd userpasswd *
    
  ## 4.修改文件/etc/sysctl.conf, 去掉这一行#net.ipv4.ip_forward=1的#号，开启iPv4 forward，然后运行命令：
    - sudo sysctl -p
    - 运行后显示net.ipv4.ip_forward=1，就表示修改生效了。
   
  ## 5.使用iptables建立一个NAT
    - sudo apt-get install iptables
    - iptables -t nat -A POSTROUTING -s 192.168.0.0/24 -o eth0 -j MASQUERADE
    
  ## 6.sudo /etc/init.d/pptpd restart
  
  ## 7.ubuntu16.04 add network
     - choose connection Type(PPTP)
     - gateway: vpn ip
     - user name: 
     - password: 

  ## 8.adcanced:
    - choose point-to-point encryption(MMPE)
   
        
  
