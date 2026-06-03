#include <stdio.h>
int main()
{
    int n1,n2,gcd,temp,a,b;
    printf("enter two numbers");
    scanf("%d %d",&n1,&n2);
    a=n1;
    b=n2;
    while(b!=0)
{
    temp=b;
    b=a%b;
    a=temp;

}
gcd=a;
printf("gcd of given number is %d",gcd);
return 0;
}

