# SEU-QT-TeacherManager
东南大学 - 暑期学校QT大作业 ： 教师信息管理系统项目

2024年8月19日启动 -> 2024年9月9日验收通过。

只是短学期制作的一个简单的C++课程设计项目，没有太多的技术含量，有待改进，共同交流学习，切勿抄袭。

如果对您有用的话，麻烦点个Star小星，Thanksssssssss！！！

#### ^^^ 软件样图 ^^^

![无法播放](https://github.com/mokiarec/SEU-QT-TeacherManager/blob/master/img/%E8%BD%AF%E4%BB%B6%E6%A0%B7%E5%9B%BE.png)

### 基本功能
登录功能，增、删、改、查，过滤器，随机生成器，一键清空...

### 登录界面
##### ----- 登录账户的配置在LogIn/log.json文件中 -----
    初始用户：12345678

    初始密码：12345678

![无法播放](https://github.com/mokiarec/SEU-QT-TeacherManager/blob/master/img/%E7%99%BB%E9%99%86%E5%9B%BE.png)

### 类体系结构
![无法播放](https://github.com/mokiarec/SEU-QT-TeacherManager/blob/master/img/%E7%BB%93%E6%9E%84%E5%9B%BE.png)

#### --- 对话框类 ---
AddTeacherDialog.h 			添加教师对话框

DeleteTeacherDialog.h			删除教师对话框

ClassManagerDialog.h			课程管理对话框（附属于添加教师对话框）

SearchDialog.h				查询教师对话框

ModifyDialog.h				调整课程对话框

LogDialog.h					登录界面

#### --- 非对话框类 ---
MainWindow.h				主窗口类

Teacher.h						教师类

TeacherTable.h				教师表类

ClassCollection.h				课程信息类

MyThread.h					子线程类

Account.h					账户类

### 联系作者
QQ：1447666272
欢迎参与完善和更新嗷~
