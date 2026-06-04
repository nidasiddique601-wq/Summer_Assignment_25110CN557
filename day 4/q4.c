#include <stdio.h>
#include <math.h>
int main()
{
    int n,m,c=0,j,org,s=0;
printf("enter a range");
scanf("%d",&n);
scanf("%d",&m);
org=n;j=n;
for(int i=n;i<=m;i++)
{
org=i;n=i;
c=0;j=i;
s=0;
while(n>0)
{
    int h=n%10;
    c++;
    n=n/10;
}
while(j>0)
{
    int d=j%10;
    s=s+pow(d,c);
    j=j/10;
}
if(s==org)
{
    printf("\n %d",org);
}

}}


