/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/sum-of-digit-is-pallindrome-or-not2751/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isDigitSumPalindrome(int n) {
        // code here
        int rev_num=0,sum=0;
        int temp=n;
        while(temp)
        {
            int r=temp%10;
            sum+=r;
            temp/=10;
        }
        int temp2=sum;
        while(temp2)
        {
            int r2=temp2%10;
            rev_num=(rev_num*10)+r2;
            temp2/=10;
        }
        if(sum==rev_num) return true;
        else return false;
    }
};
