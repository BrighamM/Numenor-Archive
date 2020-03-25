# Brigham's Windows Dev Environment Setup!!!
## 1. Windows Git
### [Windows Git Link](https://git-scm.com/download/win "Download Windows Git")

## 2. Hack Font
### [Hack Font Link Windows](https://github.com/source-foundry/Hack-windows-installer/releases/tag/v1.6.0 "Download Windows Hack Font")

## 3. WSL
### [WSL INSTALL INSTS](https://www.windowscentral.com/install-windows-subsystem-linux-windows-10 "WSL INSTRUCTIONS")

1. Turn Windows Features on and off
2. Disable IE 11
3. Enable hyper V 
4. ENABLE WINDOWS SUBSYSTEM FOR LINUX!!!
5. Restart computer
6. Microsoft Store -> Install Ubuntu LTS
7. update, upgrade, dist upgrade 
8. Open the properties of WSL and enable copy paste and use hack font
9. Append the contents of ConfigFiles/BashBranchParser to your personnal .bashrc
10. Touch .vimrc in your home dir and append contents of ConfigFile/.vimrc to it.

## 4. Generate SSH KEYS
1. ```$ ssh-keygen -t rsa -b 4096 -C "your_email@example.com" ```
2. Get that key onto github, isrhub, bitbucket

## 5. VSCODE
1. File -> Preferences -> Settings -> Font Family: ```Hack, Consolas, 'Courier New', monospace```
2. There is a file called settings.json located at: ```C:\Users\<username>\AppData\Roaming\Code\User\settings.json```
3. Access it from vscode and add this line: ```"terminal.integrated.shell.windows": "C:\\Windows\\System32\\bash.exe"```

## 6. GIT (Windows and WSL)
1. You need setup the username useremail and push strategy and the default editor.
2. User Name: ```$ git config --global user.name "John Doe"```
3. User Email: ```$ git config --global user.email johndoe@example.com```
4. Push Strategy: ```$ git config --global push.default simple```
5. Default Editor: ```$ git config --global core.editor vim```

## 7. Install NodeJS
1. ```$ sudo apt update```
2. ```$ sudo apt upgrade```
3. ```$ sudo apt install -y build-essential libtool pkg-config autotools-dev autoconf automake uuid-dev libpcre3-dev libsodium-dev valgrind```
4. Get the latest LTS Version of Node from the NodeSource. At time of writing it is 12
5. ```$ curl -sL https://deb.nodesource.com/setup_12.x | sudo -E bash -```
6. ```$ sudo apt-get install -y nodejs```
7. ```$ node --version```
8. ```$ npm --version```

## 8. Install Docker
1. ```$ sudo apt-get remove docker docker-engine docker.io containerd runc```
2. ```$ sudo apt-get update```
3. ```$ sudo apt-get install apt-transport-https ca-certificates curl software-properties-common```
4. ```$ curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo apt-key add -```
5. Verify that you now have the key with the fingerprint 
6. 9DC8 5822 9FC7 DD38 854A E2D8 8D81 803C 0EBF CD88
7. by searching for the last 8 characters of the fingerprint.
8. ```$ sudo apt-key fingerprint 0EBFCD88```
9. pub   4096R/0EBFCD88 2017-02-22\
      Key fingerprint = 9DC8 5822 9FC7 DD38 854A  E2D8 8D81 803C 0EBF CD88\
uid                  Docker Release (CE deb) <docker@docker.com>\
sub   4096R/F273FCD8 2017-02-22
10. This is just for UBUNTU, not MINT. There is an extra step for MINT found on https://docs.docker.com/v17.12/install/linux/docker-ce/ubuntu/#set-up-the-repository
11. ```$ sudo add-apt-repository "deb [arch=amd64] https://download.docker.com/linux/ubuntu $(lsb_release -cs) stable"```
12. ```$ sudo apt-get update```
13. ```$ sudo apt-get install docker-ce```
14. ```$ sudo usermod -a -G docker hiroller```
15. ```$ sudo docker run hello-world```
16. PURGE-IT-ALL!!!
17. ```sudo docker container prune -f```
18. ```sudo docker image prune -f```
19. ```sudo docker rmi -f $(sudo docker images -a -q)```


## 9. Install CMake

1. Create a folder
2. pi@raspberrypi ~ $ mkdir Download
3. pi@raspberrypi ~ $ cd Download
4. Download necessary file and extract it
5. pi@raspberrypi ~/Download $ wget https://cmake.org/files/v3.4/cmake-3.4.1.tar.gz
6. pi@raspberrypi ~/Download $ tar -xvzf cmake-3.4.1.tar.gz
7. Compile and install cmake
8. pi@raspberrypi ~/Download $ cd cmake-3.4.1/
9. pi@raspberrypi ~/Download/cmake-3.4.1 $ sudo ./bootstrap
10. pi@raspberrypi ~/Download/cmake-3.4.1 $ sudo make -j4
11. pi@raspberrypi ~/Download/cmake-3.4.1 $ sudo make install
12. HOW TO REMOVE OLD CMAKE
13. sudo apt remove cmake
14. sudo apt purge --auto-remove cmake
15. Now follow the above steps

## 10. Use Different Keys

  
1. IdentityFile /home/bmichaelis/.ssh/brighamm_github_id_rsa
2. IdentityFile /home/bmichaelis/.ssh/sdlbitbucket_id_rsa
3. IdentityFile /home/bmichaelis/.ssh/isrhub_id_rsa



4. Make a config file called config and add the above appropriate contents then change permsissions.
5. chmod 600 ~/.ssh/config

6. if needed
7. chown $USER ~/.ssh/config
   
8. b@C:/mnt/c/dev/OP/op(feaow)
9. $ ll ~/.ssh/
10. total 20
11. 7 11:53 ./
12. 2 16:59 ../
13. 7 11:55 config
14. 08:36 known_hosts
15. 7 11:53 mysdl2github
16. 7 11:53 mysdl2github.pub
17. 7 11:52 mysdl2sdlbitbucket
18. 7 11:52 mysdl2sdlbitbucket.pub
19. b@C:/mnt/c/dev/OP/op(feaow)
20. $ cat ~/.ssh/config
21. IdentityFile ~/.ssh/mysdl2github
22. IdentityFile ~/.ssh/mysdl2sdlbitbucket
23. b@C:/mnt/c/dev/OP/op(feaow)
24. $
