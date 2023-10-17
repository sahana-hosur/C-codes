#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char Title[50];
    int Edition;
    float Price;
}BOOK;
BOOK read()
{
    BOOK b;
    printf("Enter the Title\n");
    scanf("%s",b.Title);
    printf("Enter the Edition\n");
    scanf("%d",&b.Edition);
    printf("Enter the price\n");
    scanf("%f",&b.Price);
    return b;
}
void display(BOOK* b,int n)
{
    int i;
   printf("TITTLE \t\tEDITION\t\tPRICE\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t\t%d\t%f",(b+i)->Title,(b+i)->Edition,(b+i)->Price);
        printf("\n");
    }
}
int compute(BOOK *b,int n)
{
    int i,g;
    float lar=-999;
    for(i=0;i<n;i++)
    {
        if(((b+i)->Price)>lar)
        {
            lar=(b+i)->Price;
            g=i;
        }
    }
    return g;
}
int main(){
    int n,i;
    printf("Enter the number of books");
    scanf("%d",&n);
    BOOK b[n]; 
    for(i=0;i<n;i++)
        b[i]=read();
    printf("The deatils of the book\n");
      display(b,n);
    printf("The book with highest price\n");
      i=compute(b,n);
    printf("%s\t\t%d\t\t%f\n",(b+i)->Title,(b+i)->Edition,(b+i)->Price);
    
return 0;
}