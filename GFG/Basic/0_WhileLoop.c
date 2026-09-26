/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/while-loop/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    // code here
    while(x!=-1)
    {
        printf("%d ",x);
        x--;
    }
}

