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

    }int temp;
    for(int i=0;i<a-1;i++)
    {
      for(int j=0;j<a-i-1;j++)
      {
        if(n[j]>n[j+1])
        {
          temp=n[j];
          n[j]=n[j+1];
          n[j+1]=temp;
        }
      }
    } printf("bubble sorted array=\n");
    for(int i=0;i<a;i++)
    {
      printf("\t %d",n[i]);
    }
    return 0;

}
