/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/reverse-digit0316/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int rev_num=0;
        while(n)
        {
            int r=n%10;
            rev_num=(rev_num*10)+r;
            n=n/10;
        }
        return rev_num;
        
    }
};
