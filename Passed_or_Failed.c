#include<stdio.h>
int pass(int m);
int main()
{
    int m;
    scanf("%d",&m);
    int x=pass(m);
    if(x==0)
    {
        printf("FAILED");
    }
    else
    {
        printf("PASSED");
    }
}
int pass(int m)
{
    if(m<=35)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}