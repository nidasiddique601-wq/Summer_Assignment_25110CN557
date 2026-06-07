
# include<stdio.h>
int sum(int n)
{
    if(n==0)
        return 0;
    
    else
        return ((n%10)+sum(n/10));
}
int main()
{
  int n;
  printf("enter a number");
  scanf("%d",&n);
  printf("sum of digits of %d = %d",n,sum(n));
  return 0;
}

