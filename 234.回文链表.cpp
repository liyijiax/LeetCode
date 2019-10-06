/*************************************************************************
	> File Name: 234.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年10月04日 星期五 19时01分57秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;

struct ListNode *reverse(struct ListNode *head) {
    struct ListNode ret, *p, *q;
    p = head;
    ret.next = NULL;
    while (p) {
        q = p->next;
        p->next = ret->next;
        ret.next = p;
        p = q;
    }
    return ret.next;
} 

bool isPalindrome(struct ListNode *head) {
    struct ListNode ret, *p, *q;
    ret->next = head;
    p = head;
    int length = 0;
    while (p) {
        p = p->next;
        length++;
    }
    int order = (int)ceil(length / 2);
    p = q = head;
    for (int i = 0; i < order - 1; i++) {
        q = q->next;
    }
    if (v->length % 2) {
        q = q->next->next;
    }
    q = reverse(q);
    while (q) {
        if (p->val == q->val) {
            p = p->next;
            q = q->next;
        } else {
            break;
        }
    }
    if (q != NULL) return false;
    return true;
}
//翻转一半
