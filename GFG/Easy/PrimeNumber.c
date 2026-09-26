/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/prime-number2314/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    // code here
    if(n==1)
    {
        return false;
    }
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count+=1;
        }
    }
    if(count==2) return true;
    else return false;
}

