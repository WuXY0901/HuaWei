#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

#ifndef _HEAD_H
#define _HEAD_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <time.h>
#include "mysql/mysql.h"

#define PORT 7093 //端口号
#define BACKLOG 50 //最大监听数量
#define MAXSIZE 1032 //消息msg的最大长度
#define IPNET "192.168.80.128" //ip地址
#define MAX_BUF_SIZE 1024 //数据库数组最大长度

#define MSG_ADD 1       //用户注册
#define MSG_CHANGE 2    //更改密码
#define MSG_LOGIN 3     //用户登录
#define MSG_LOGOUT 4    //用户退出
#define MSG_DATA 5  	//正常消息
#define MSG_ACK 6		//回复同意（正确）
#define MSG_UNACK 7 	//回复不同意（不正确）
#define MSG_PRIVATE 8	//私聊
#define MSG_GROUP 9		//群聊
#define MSG_FILE 10		//文件
#define MSG_NUM 11 		//在线人数
#define MSG_KICK 12     //踢人
#define MSG_MASTER 13   //群主
#define MSG_UNMASTER 14 //不是群主
#define MSG_PEOPLE 15
#define MSG_NONPEOPLE 16
#define MSG_FORBIDDEN 17
#define MSG_LIFT 18
//发送信息的结构体
struct msg
{
    int type; // 消息类型
    int data_len; // 数据长度
    char data[1024]; // 数据
};
//用户结构体
struct Login
{
	int state;
	char name[24];
	char passwd[20];
	char email[24];
};
#endif




#endif // HEAD_H_INCLUDED
