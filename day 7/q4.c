#include <stdio.h>
int rev(int n,int r)
{
    if(n==0)
        return r;
    
    else
        return rev(n/10,r*10+n%10);
        
}
int main()
{
  int n;int r=0;
  printf("enter a number");
  scanf("%d",&n);
  printf("reverse of %d = %d",n,rev(n,r));
  return 0;
}
