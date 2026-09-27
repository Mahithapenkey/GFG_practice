/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/addition-under-modulo/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

int sumUnderModulo(int a, int b, int M) {
    // code here
    int mod=(a+b)%M;
    return mod;
}

