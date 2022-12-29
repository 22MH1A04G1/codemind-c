#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        int min=a[n];
        for(i=1;i<=n;i++)
        if(a[i]<min)
        min=a[i];
        printf("%d",min);
}