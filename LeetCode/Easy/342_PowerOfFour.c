/**
 * Problem Link : https://leetcode.com/problems/power-of-four/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int n) {
    return n>0 && ((n&(n-1))==0) && (n%3==1);
}
