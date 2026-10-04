/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/change-all-even-bits-in-a-number-to-03253/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int makeZero(int n) {
        // code here
        for(int i=0;i<=31;i++)
        {
            if(i%2==0)
            {
                n=(n&(~(1<<i)));
            }
        }
        return n;
    }
};
