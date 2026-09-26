/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/prime-number2314/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    // code here
    int i;
    if(n==1)
    {
        return false;
    }
    int s=sqrt(n);
    for(i=2;i<=s;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==s+1)
        return true;
    else return false;
}

