#include <stdio.h>
int main()
{
    int n;int p;int r=1;
    printf("enter a number and power");
    scanf("%d %d",&n,&p);
    for(int i=1;i<=p;i++)
    {
      r=r*n;
    }
    printf("answer = %d",r);
    return 0;}

