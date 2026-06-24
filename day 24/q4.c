# include<stdio.h>
# include<string.h>
int main()
{
    char str[100];
    printf("enter a sentence");
   fgets(str,100,stdin);int len=strlen(str);
   for(int i=0;i<len;i++)
   {
     for(int j=i+1;j<len;j)
     {
        if(str[i]==str[j])
        {for(int k=j;k<len;k++)
        {
           str[k]=str[k+1];
        }
        len--;}

        else
      {  j++;}
        
     
   }}

   printf("%s",str);
   return 0;
}

