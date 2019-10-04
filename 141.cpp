/*************************************************************************
	> File Name: 141.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年10月04日 星期五 14时56分22秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

bool hasCycle(struct ListNode *head) {
    struct ListNode *p = head, *q = head;
    if (p == NULL) return false;
    do {
        p = p->next;
        q = q->next;
        if (q == NULL || q->next == NULL) return false;
        // 只有一个结点时，防止非法访问
        q = q->next;
    } while (p != q);
    return true;
} // 快慢指针
 // 要进步快，让头脑变灵活，才能去大公司
 // 任务能完成，然后每天思考问题，学的能干啥
 // 都不是白学的
 // 单向循环，双向循环，船长留的题根本不够
 // 链表、树、字符处理、子串、AC自动机、字典树说明白
 // 看你上限，问到你答不出来
 // 上来说不会肯定完蛋，不说话完蛋
 // 答不上来的看你思考点
 // 多学东西，不怕犯错，珍惜每一年校招机会，哪怕不去，也要参加
