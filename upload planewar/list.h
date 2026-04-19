#pragma once
//记录飞机子弹的相关数据
#include<stdlib.h>
#include<assert.h>

//链表节点的结构体
typedef struct NODE
{
	int x;//x坐标
	int y;//y坐标
	int speed;//移动速度
	int life;//生命值，大敌机需要5次击中才会销毁
	bool isBigEnemy;//是否是大敌机
	struct NODE* next;//指向下一个节点的指针
}Node;

//链表结构的节点
typedef struct LinkList
{
	struct NODE* head;//链表头指针
	struct NODE* end;//链表尾指针
	
}LL;

//创建链表节点函数
Node* Node_init(int x,int y,int speed);
//初始化链表函数
LL* LinkList_init();
//单链表节点函数 尾插法
void LinkList_insert(LL* list, int x, int y, int speed);
//删除链表中的指定节点
void LinkList_delete(LL* list, Node* node);
//遍历并更新链表中的所有节点（用于移动子弹和敌机）
void LinkList_update(LL* list, int direction);
//销毁链表，释放内存
void LinkList_destroy(LL* list);
