/*************************************************************************
	> File Name: 202.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年10月04日 星期五 16时58分45秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

int generate(int p) {
    int sum = 0;
    while (p) {
        sum += (p % 10) * (p % 10);
        p /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    int p = n, q = n;
    do {
        p = generate(p);
        q = generate(q);
        if (p == 1) return true;
        q = generate(q);
    } while (p != q);
    return false;
} // 链表的“思想”，快慢指针

int main() {
    int n;
    cin >> n;
    cout << isHappy(n) << endl;
    return 0;
} // 扎实，不然跑的越快死的越快
