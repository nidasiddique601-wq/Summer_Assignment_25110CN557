# include<stdio.h>
int main()
{
    int a; int item;
    printf("enter a size of array");
    scanf("%d",&a);
    int n[a]; 
    printf("enter elements of an array");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);

    }
    
    for(int i=0;i<=a-1;i++)
    { 
      for(int j=0;j<a-i-1;j++)
      { if(n[j]>n[j+1])
        {

        
        int temp=n[j];
        n[j]=n[j+1];
        n[j+1]=temp;
      }
    }}
    printf("second largest element = %d",n[a-2]);
    return 0;

}

