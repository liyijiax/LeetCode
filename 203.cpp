/*************************************************************************
	> File Name: 203.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年10月04日 星期五 18时06分41秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;


struct ListNode *removeElements(struct ListNode *head, int val) {
    struct ListNode ret, *p, *q;
    p->next = head;
    p = &ret;
    while (p->next) {
        q = p->next;
        if (p->next->val == val) {
            free(q);    
        }
        p = p->next;
    }
    return ret.next;
}
