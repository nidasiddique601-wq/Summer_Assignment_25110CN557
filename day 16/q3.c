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
    printf("enter the sum");
    int sum;
    scanf("%d",&sum);
    for(int i=0;i<a-1;i++)
    {
      for(int j=i+1;j<a;j++)
      {
        if((n[i]+n[j]) == sum)
        {printf("\n the pair can be;\n %d  %d",n[i],n[j]);}
      }
    }
    return 0;

}
