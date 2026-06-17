# include<stdio.h>
int main()
{
    int a; 
    printf("enter a size of array");
    scanf("%d",&a);
    int n[a]; 
    printf("enter elements of an array");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);

    }
    int b; 
    printf("enter a size of 2nd array");
    scanf("%d",&b);
    int m[b]; 
    printf("enter elements of an array");
    for(int i=0;i<b;i++)
    {
        scanf("%d",&m[i]);

    }
    int c=a+b;int p[c];int k=0;
    for(int i=0;i<a;i++)
    {
       p[k++]=n[i];
    }
    for(int i=0;i<b;i++)
    { int flag=0;
      for(int j=0;j<k;j++)
      {
        if(m[i]==p[j])
        {flag=1;
        break;
      }
    }
    if(flag==0)
    {
      p[k++]=m[i];
    }
  }
  printf("the union of  array ; \n");
  for(int i=0;i<k;i++)
  {
    printf("\t %d",p[i]);
  }
    return 0;

}
