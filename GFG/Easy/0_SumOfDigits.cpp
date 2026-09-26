/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/sum-of-digits1742/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n) {
    // code here
    int sum=0;
    while(n)
    {
        int r=n%10;
        sum+=r;
        n=n/10;
    }
    return sum;
    
}
