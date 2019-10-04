/*************************************************************************
	> File Name: 24.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年10月04日 星期五 14时22分15秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

struct ListNode* swapPairs(struct ListNode *head) {
    struct ListNode ret, *p, *q;
    ret.next = head;
    p = &ret;
    q = head;
    while (q && q->next) {
        p->next = q->next;
        q->next = q->next->next;
        p->next->next = q;
        p = q;
        q = p->next;
    }
    return ret.next; 
    // 虚拟头结点可以避免返回释放的head，也可以方便删除头结点
}
