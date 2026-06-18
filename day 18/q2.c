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

    }int temp;int minindex;
    for(int i=0;i<a-1;i++)
    {   minindex=i;
      for(int j=i+1;j<a;j++)
      {
        if(n[j]<n[minindex])
        {
          minindex=j;

        }
      }
      temp=n[i];
      n[i]=n[minindex];
      n[minindex]=temp;

    } printf("selection sorted array=\n");
    for(int i=0;i<a;i++)
    {
      printf("\t %d",n[i]);
    }
    return 0;

}

