/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

int checkKthBit(int n, int k) {
    // code here
    return ((n & (1 << k)) != 0);
}
