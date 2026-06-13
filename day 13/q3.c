# include<stdio.h>
int main()
{
    int a;int largest,smallest;
    printf("enter a size of array");
    scanf("%d",&a);
    int n[a]; largest=n[0];smallest=n[0];
    printf("enter elements of an array");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&n[i]);

    }
    for(int i=0;i<a;i++)
    { 
        if(n[i]>largest)
        {
            largest=n[i];
        }
        if(n[i],smallest)
        {
            smallest=n[i];
        }
    }
    printf("largest and smallest element in this array = %d and %d",largest,smallest);
            return 0;
}


