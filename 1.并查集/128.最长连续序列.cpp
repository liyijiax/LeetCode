/*************************************************************************
	> File Name: 128.最长连续序列.cpp
	> Author: liyijia
	> Mail: liyijiax@163.com
	> Created Time: 2019年11月24日 星期日 18时31分49秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <unordered_map>
using namespace std;

//下标重映射思想
class UnionSet {
public:
    vector<int> fa;
    vector<int> size;
    void init(int n) {
        fa.clear();
        for (int i = 0; i <= n; i++) fa.push_back(i), size.push_back(1);
    }
    int get(int x) {
        return (fa[x] = (fa[x] == x ? x : get(fa[x])));
    }
    void merge(int a, int b) {
        int aa = get(a), bb = get(b);
        if (aa == bb) return 0;
        size[bb] += size[aa];
        return ;
    }
}

class Solution {
public:
    int longestConcutive(vector<int>& nums) {
        u.init(nums.size());
        unordered_map<int, int> ht;
        for (int i = 0; i < nums.size(); i++) {
            int k  = nums[i];
            if (ht.find(k) != ht.end()) continue;
            if (ht.find(k - 1) != ht.end()) {
                u.merge(i, ht[k - 1]);
            }
            if (ht.find(k + 1) != ht.end()) {
                u.merge(i, ht[k + 1]);
            }
            ht[k] = i;
        }
        int ans = 0;
        for (int i = 0; i < nums.size; i++) {
            ans = max(ans, u.size[i]);
        }
        return ans;
    }
    UnionSet u;
}
