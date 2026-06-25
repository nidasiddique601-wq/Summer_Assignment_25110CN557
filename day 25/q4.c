# include<stdio.h>
# include<string.h>
int main()
{
   char word[50][50];
   char temp[50];
   printf("enter no of words");
   int n;
   scanf("%d",&n);
   printf("enter words");
   for(int i=0;i<n;i++)
   {
      scanf("%s",word[i]);
      }
   for(int i=0;i<n-1;i++)
   {
      for(int j=i+1;j<n;j++)
      {
         if(strlen(word[i])>strlen(word[j]))
         {
            strcpy(temp,word[i]);
            strcpy(word[i],word[j]);
            strcpy(word[j],temp);
            
         }
      }
   }
   printf("sorted words by length are ; \n");
   for(int i=0;i<n;i++)
   {
      printf("%s\n",word[i]);
   }
   return 0;
}

