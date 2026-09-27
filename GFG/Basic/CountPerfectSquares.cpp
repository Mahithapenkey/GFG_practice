/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/count-squares3649/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countSquares(int n) {
        // code here
        int count=sqrt(n-1);
        return count;
        
    }
};
