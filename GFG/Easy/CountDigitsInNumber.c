/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/count-total-digits-in-a-number/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    // Code here
    int count=0;
    do
    {
        
        count++;
        n=n/10;
    }while(n);
    return count;
}
