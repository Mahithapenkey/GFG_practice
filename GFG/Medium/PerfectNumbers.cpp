/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/perfect-numbers3207/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPerfect(int n) {
        // code here
        int perf_num=0;
        for(int i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                perf_num+=i;
                if(i!=n/i)
                    perf_num+=(n/i);
                    
            }
        }
        perf_num-=n;
        if(perf_num==n) return true;
        else return false;
    }
};
