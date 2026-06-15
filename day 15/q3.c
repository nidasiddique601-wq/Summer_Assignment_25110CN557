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
    int p=n[a-1];
    for(int i=a-1;i>0;i--)
    {
      n[i]=n[i-1];
    }
    n[0]=p;
    printf("right rotation of an array");
    for(int i=0;i<a;i++)
    {
        printf("\n %d",n[i]);

    }
    
    return 0;

}


