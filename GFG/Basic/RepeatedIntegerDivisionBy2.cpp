/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/geek-and-coffee-shop5721/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int mthHalf(int n, int m) {
        // code here
        for(int i=0;i<m-1;i++)
        {
            n=(n>>1);
           
        }
        return n;
    }
};
