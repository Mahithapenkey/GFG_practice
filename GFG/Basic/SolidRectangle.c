/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/solid-rectangle/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    // code here
    for(int i=1;i<=n;i++,printf("\n"))
    {
        for(int j=1;j<=m;j++)
        {
            printf("* ");
        }
    }

    return 0;
}
