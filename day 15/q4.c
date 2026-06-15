# include<stdio.h>
int main()
{
    int a; int j=0;
    printf("enter a size of array");
    scanf("%d",&a);
    int n[a]; 
    printf("enter elements of an array");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);

    }
    for(int i=0;i<a;i++)
    {
      if(n[i]!=0)
      {
        n[j]=n[i];
        j++;
      }
    }
    while (j<a)

    {
      n[j]=0;
      j++;
    }
    printf("after moving all zero elements of an array at the end");
    for(int i=0;i<a;i++)
    {
        printf(" %d" ,n[i]);

    }
    
    
    return 0;

}

