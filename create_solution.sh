#!/bin/bash

echo \
"#include <iostream>

using namespace std;

class Solution {
public:

};" > solutions/q_"$1".h

echo \
"#include \"q_$1.h\"
#include \"gtest/gtest.h\"

using namespace std;
using ::testing::Test;

TEST(Q$1, EXAMPLE){
    Solution solution;

}" > test/t_"$1".cpp