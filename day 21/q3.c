# include<stdio.h>
# include<string.h>
int main()
{
    char str[100];
    int length=0;
    printf("enter a stringin lowercase");
    fgets(str,100,stdin);
    while(str[length]!='\n'&& str[length]!='\0')
    {
        length++;
    }
    int v=0; int c=0; 
    for (int i=0;i<length;i++)

    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        v++;
        else
        c++;
    }
    printf("vowels=\t%d",v);
    printf("\n consonants=\t%d",c);

return 0;
}


