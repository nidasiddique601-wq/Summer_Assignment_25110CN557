# include<stdio.h>
# include<math.h>

int arm(int a)
{
    int c=0; int org=a;int sum=0;int aa=a;
    while(a>0)
    {
        int d=a%10;
        c++;
        a=a/10;
    }
    while(org>0)
    {
        int d=org%10;
        sum=sum+pow(d,c);
        org=org/10;
    }
    if(sum==aa)
    return 1;
    else
    return 0;
    }


int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    int result=arm(a);
    if(result==1)
    printf("armstrong number");
    else
    printf("not an armstrong number");
    return 0;
}
