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
    printf("enter element to be searched");
    int item;
    scanf("%d",&item);
    int beg=0, end=a-1;
    int mid;
    while(beg<=end)
    {
      mid=(beg+end)/2;
      if(n[mid]==item)
      {
        printf("item found at index %d",mid);
return 0;
      }
      else if(n[mid]<item)
      {
        beg=mid+1;
      }
    else
    {
      end=mid-1;
    }
  }
  printf("element not found");
    return 0;

}
