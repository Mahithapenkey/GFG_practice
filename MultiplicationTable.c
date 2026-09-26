/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/multiplication-table/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // code here
    for(int i=1;i<=10;i++)
    {
        printf("%d ",n*i);
    }

    return 0;
}
