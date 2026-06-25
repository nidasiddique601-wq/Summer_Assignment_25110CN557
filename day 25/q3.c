# include<stdio.h>
# include<string.h>
int main()
{
   char name[50][50];
   char temp[50];
   printf("enter no of names");
   int n;
   scanf("%d",&n);
   printf("enter names");
   for(int i=0;i<n;i++)
   {
      scanf("%s",name[i]);
      }
   for(int i=0;i<n-1;i++)
   {
      for(int j=i+1;j<n;j++)
      {
         if(strcmp(name[i],name[j])>0)
         {
            strcpy(temp,name[i]);
            strcpy(name[i],name[j]);
            strcpy(name[j],temp);
            
         }
      }
   }
   printf("sorted names are ; \n");
   for(int i=0;i<n;i++)
   {
      printf("%s\n",name[i]);
   }
   return 0;
}

