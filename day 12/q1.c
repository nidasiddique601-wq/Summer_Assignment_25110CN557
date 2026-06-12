# include<stdio.h>

int palin(int a)
{
    int rev; int org=a;
    while(a>0)
    {
        int d=a%10;
        rev=rev*10+d;
        a=a/10;
    }
    if(org==rev)
    return 1;
    else
    return 0;
    }


int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    int result=palin(a);
    if(result==1)
    printf("palindrome number");
    else
    printf("not a palindrome number");
    return 0;
}
