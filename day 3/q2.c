#include <stdio.h>
int main()
{
    int n, m; int c=0; 
    printf("enter two numbers for a range");
    scanf("%d %d",&n, &m);
    for(int i=n;i<=m;i++)
    {
      for(int j=2;j<i;j++)
      {
        if(i%j==0)
        c++;

      }
      if(c==0)
      printf("\n %d",i);
      c=0;
    }
    return 0;
}
