# include<stdio.h>

int perfect(int a)
{
    int sum=0;
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        sum=sum+i;

    }
if(sum==a)
return 1;
else
return 0;
}
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    int r=perfect(a);
    if(r==1)
    printf("perfect number");
    else
    printf("not a perfect number"); 
    return 0;
    
}
