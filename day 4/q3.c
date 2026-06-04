#include <stdio.h>
#include <math.h>
int main()
{
    int n,c=0,j,org,s=0;
printf("enter a number");
scanf("%d",&n);
org=n;j=n;
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
    printf("armstrong number");
}
else
{
    printf("not an armstrong number");

}

}
