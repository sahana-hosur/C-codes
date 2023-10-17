#include<stdio.h>
int str_len(char *str)
{
    int len=0,i;
    for(i=0;str[i]!='\0';i++,len++);
    return len;
}
void str_cpy(char *s,char* str)
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        str[i]=s[i];
    }
    str[i]='\0';
}
void str_cat(char *s,char *str)
{
    int len=0,i;
    for( i=0;s[i]!='\0';i++,len++);
    for( i=0;str[i]!='\0';i++)
    {
        s[i+len]=str[i];
    }
    s[i+len]='\0';
}
int main(){
    char s[20],str[20],ch;
    printf("Enter the 2 strings: ");
    gets(s);
    gets(str);
    printf("choose\nL for length of each string\nC for copying to the other \nA to add both string\n");
    scanf(" %c",&ch)
    switch(toupper(ch))
    {
        case 'L':printf("length of %s string %d\n",str,str_len(str));
                printf("length of %s string %d\n",s,str_len(s));
                break;

        case 'C':str_cpy(s,str);
                printf("string after copying is %s\n",s);
                break;
        case 'A':str_cat(s,str);
                printf("String after concatenation is %s\n",s);
                break;
        default:printf("inavlid choice");
                return 0;
    }
return 0;
}