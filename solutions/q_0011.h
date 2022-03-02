#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        auto left_it = height.begin();
        auto right_it = height.end() - 1;
        int area = 0;
        int max_area = 0;
        for(; left_it != right_it;){
            if(*left_it < *right_it){
                area = *left_it * (right_it - left_it);
                left_it++;
            } else {
                area = *right_it * (right_it - left_it);
                right_it--;
            }
            max_area = max(max_area, area);
        }
        return max_area;
    }
};
