# include<stdio.h>
# include<string.h>
int main()
{
    char str[100];
    int length=0;int j=0;
    printf("enter a sentence");
   fgets(str,100,stdin);
   
     while(str[length]!='\n'&& str[length]!='\0')
    {
        length++;
    }
    
    for(int i=0;i<length;i++)
    {
        
            if(str[i]!=' ')
            {str[j]=str[i];
            j++;}
        }
        str[j]='\0';
        printf("string after removing spaces=\t%s",str);
 
return 0;
}

