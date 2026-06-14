# include<stdio.h>
int main()
{
    int a;int item;
    printf("enter a size of array");
    scanf("%d",&a);
    int n[a]; 
    printf("enter elements of an array");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);

    }
    printf("enter item to be searched");
    scanf("%d",&item);

    for(int i=0;i<a;i++)
    { 
        if(n[i]==item)
        {
            printf("item found at  %d",i+1);
            return 0;
        }
    }
    printf("item not found");
    return 0;

}
