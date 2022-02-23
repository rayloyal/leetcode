#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        auto m = nums1.size();
        auto n = nums2.size();
        auto sum = m + n;
        bool odd = sum & 1;
        int del_num = (sum - 1) / 2;
        if(m == 0)
            return odd ? nums2[del_num] : (nums2[del_num] + nums2[del_num + 1]) / 2.0;
        if(n == 0)
            return odd ? nums1[del_num] : (nums1[del_num] + nums1[del_num + 1]) / 2.0;
        auto iter1 = nums1.begin();
        auto iter2 = nums2.begin();
        for(int i = 0; i < del_num; i++){
            if(*iter1 < *iter2){
                if(++iter1 == nums1.end()){
                    iter2 += del_num - i - 1;
                    return odd ? *iter2: (*iter2 + *(iter2 + 1)) / 2.0;
                }
                continue;
            }

            if(++iter2 == nums2.end()){
                iter1 += del_num - i - 1;
                return odd ? *iter1: (*iter1 + *(iter1 + 1)) / 2.0;
            }
        }

        if(odd)
            return *iter1 < *iter2 ? *iter1 : *iter2;

        int ret;
        if(*iter1 < *iter2){
            ret = *iter1++;
            return iter1 == nums1.end() ? (ret + *iter2) / 2.0 : (ret + min(*iter1, *iter2)) / 2.0;
        }

        ret = *iter2++;
        return iter2 == nums2.end() ? (ret + *iter1) / 2.0 : (ret + min(*iter1, *iter2)) / 2.0;
    }
};
