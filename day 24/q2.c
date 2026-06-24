# include<stdio.h>
# include<string.h>
int main()
{
    char str[100];
    printf("enter a word");
   scanf("%s",str);int c=0;
   for(int i=0;i<strlen(str);i++)
   { c=1;
    while(str[i]==str[i+1])
    {
        
            c++;
            i++;
        }

        printf("%c%d",str[i],c);
        
    

   }
   return 0;
}

