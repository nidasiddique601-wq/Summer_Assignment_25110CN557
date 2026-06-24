# include<stdio.h>
# include<string.h>
int main()
{
    char str[100];
    printf("enter a sentence");
   fgets(str,100,stdin);
   char longest[100];
   char *word;
   word=strtok(str," ");
   strcpy(longest,word);
while(word!=NULL)
{
    if(strlen(word)>strlen(longest))
    {
        strcpy(longest,word);
    }
    word=strtok(NULL," ");
    }
    printf("longest word = %s",longest);
   return 0;
}
