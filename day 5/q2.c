#include <stdio.h>
int main()
{
    int n,s=0,fact=1;
    printf("enter a number");
    scanf("%d",&n); int org=n;
while(n>0)
{
    int d=n%10;
    for(int i=1;i<=d;i++)
    {
        fact=fact*i;
    }
     s=s+fact;
     n=n/10;
     fact=1;

}
if(org==s)
printf("strong number");
else
printf("not a strong number");

}
