/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/set-the-rightmost-unset-bit4436/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int setBit(int n) {
        // code here
        for(int i=0;i<=31;i++)
        {
            if(((n>>i)&1)==0)
            {
                n=((n|(1<<i)));
                break;
            }
            
        }
        return n;
    }
};
