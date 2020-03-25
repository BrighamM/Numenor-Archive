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
