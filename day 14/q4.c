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
    printf("duplicate elements are=");
    int f=0;
    for(int i=0;i<a;i++)
    { 
      for(int j=i+1;j<a;j++)
      {
        if(n[i]==n[j])
       { printf("\n %d",n[i]);
        f=1;
        break;}
      }
    }
      if(f==0)
      printf("none");
    return 0;

}
