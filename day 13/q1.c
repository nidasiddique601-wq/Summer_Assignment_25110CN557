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
    printf("the elements of array are \n");
    for(int i=0;i<a;i++)
    {
        printf("%d \n",n[i]);
    }
    return 0;
    
}

