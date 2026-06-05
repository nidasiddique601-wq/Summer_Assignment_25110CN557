#include <stdio.h>
int main()
{
    int n,s=0;
    printf("enter a number");
    scanf("%d",&n);
for(int i=1;i<n;i++)
{
    if(n%i==0)
    s=s+i;
}
if(s==n)
printf("perfect number");
else
printf("not a perfect number");
return 0;
}
