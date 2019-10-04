/*************************************************************************
	> File Name: 83.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年10月04日 星期五 14时44分43秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

struct ListNode* deleteDuplicates(strut ListNode* head) {
    struct ListNode *p = head, *q;
    while (p && p->next) { // 如果一个节点没有，防止非法访问
        if (p->val - p->next->val) {
            p = p->next;
        } else {
            q = p->next;
            p->next = p->next->next;
            free(q);
        }
    }
    return head;
} // 程序内部，内存内部
