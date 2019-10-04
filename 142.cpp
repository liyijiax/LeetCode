/*************************************************************************
	> File Name: 142.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年10月04日 星期五 15时58分36秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *p, *q;
    p = head;
    if (p == NULL) return NULL;
    do {
        p = p->next;
        q = q->next;
        if (q == NULL || q->next == NULL) return NULL;
        q = q->next;
    } while (p != q);
    int count = 0;
    do {
        q = q->next;
        count++;
    } while (p != q);
    p = q = head;
    while (count--) {
        q = q->next;
    }
    while (p != q) {
        p = p->next;
        q = q->next;
    }
    return p;
}
