/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/the-else-if-statement/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

void utility(int number) {
    // Write the if, else if, else statements below
    if(number>100)
    {
        printf("Big\n");
    }
    else if(number<100 && number<10)
    {
        printf("Small\n");
    }
    else
    {
        printf("Number\n");
    }
}
