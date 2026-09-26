/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/pyramid-patterns/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int c;
    // code here
    for(int r=1;r<=n;r++,printf("\n"))
    {
      
        for(c=1;c<=n-r;c++)
        {
            printf(" ");
        }
        for(c=1;c<=2*r-1;c++)
        {
            printf("*");
        }
    }

    return 0;
}
