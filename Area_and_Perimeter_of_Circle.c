#include<stdio.h>
#include<math.h>
int main() {
    int r;
    scanf("%d",&r);
    float a, p;
    a = pow((r),2)*3.14;
    p = 2*3.14*r;
    printf("%.2f
%.2f",a,p);
}