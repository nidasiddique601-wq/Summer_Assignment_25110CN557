# include<stdio.h>
# include<string.h>
int main()
{
    char str[100];
    int length=0;int c=0;
    printf("enter a sentence");
   fgets(str,100,stdin);
   
     while(str[length]!='\n'&& str[length]!='\0')
    {
        length++;
    }
    printf("enter character to find frequency");
    char ch;
    scanf("%c",&ch);

    for(int i=0;i<length;i++)
    {
        
            if(str[i]==ch)
            c++;
        }
        printf("%c\t=\t%d",ch,c);
        
    
 
return 0;
}
