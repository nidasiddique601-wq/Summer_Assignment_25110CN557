# include<stdio.h>
# include<string.h>
int main()
{
    char str[100];
    int length=0;
    printf("enter a string");
    fgets(str,100,stdin);
    while(str[length]!='\n'&& str[length]!='\0')
    {
        length++;
    }
printf("length pf string= %d",length);
return 0;
}

