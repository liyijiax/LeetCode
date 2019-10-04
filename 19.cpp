/*************************************************************************
	> File Name: 19.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年10月04日 星期五 14时19分05秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode ret, *p, *q;
    ret.next = head;
    q = p = &ret;
    while (n--) p = p->next;
    while (p->next) {
        p = p->next;
        q = q->next;
    }
    p = p->next;
    q->next = p->next;
    free(p);
    return ret.next;
}
