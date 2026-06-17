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
    int c=a+b;int p[c];
    for(int i=0;i<a;i++)
    {
       p[i]=n[i];
    }
    for(int i=0;i<b;i++)
  {
     p[a+i]=m[i];
  }
  printf("the merged array ; \n");
  for(int i=0;i<c;i++)
  {
    printf("\t %d",p[i]);
  }
    return 0;

}

