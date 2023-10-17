#include<stdio.h>
#include<ctype.h>
void count(char *s)
{
    int vc=0,cc=0,dc=0,sc=0,spc=0,i;
    for(i=0;s[i]!='\0';i++)
    {
        if(isalpha(s[i])!=0)
        {
            s[i]=toupper(s[i]);
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                vc++;
            }
            else 
              cc++;
        }
        else if(isdigit(s[i])!=0)
        {
            dc++;
        }
        else  if(s[i]==' ')
        {
            sc++;
        }
        else 
          spc++;
    }
    printf("vowel=%d\nconsonants=%d\ndigits=%d\nspaces=%d\nspecial characters=%d\n",vc,cc,dc,sc,spc);
}
int main(){
    char s[20];
    printf("Enter the string");
    fgets(s,20,stdin);
    count(s);
return 0;
}