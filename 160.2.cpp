/*************************************************************************
	> File Name: 160.2.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年10月04日 星期五 16时41分36秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

struct ListNOde *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *p = headA, *q = headB;
    if(!p || !q) return NULL;
    while (p != q) {
        p = (p ? p->next : headB);
        q = (q ? q->next : headA);
    }
    return p;
} // 补成长度相等，这样比较ok
