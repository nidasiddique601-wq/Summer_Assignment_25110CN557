#include <stdio.h>
int main()
{
    int n1,n2,gcd,temp,a,b,lcm;
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
lcm=(n1*n2)/gcd;
printf("lcm of given number is %d",lcm);
return 0;
}
