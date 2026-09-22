int isPowerofTwo(int n) {
    // code here
    if(n==0)
    {
        return 0;
    }
    if ((n>0)&&(n&(n-1)))
    {
        return 0;
       
    }
    else
    {
        return 1;
    }
}