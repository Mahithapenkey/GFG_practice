/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/floyds-triangle1222/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i=1;
    // code here
    for(int r=1;r<=n;r++,printf("\n"))
    {
        for(int c=1;c<=r;c++)
        {
            printf("%d ",i++);
        }
    }

    return 0;
}
