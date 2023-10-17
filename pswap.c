#include<stdio.h>
typedef struct{
    int rollno;
    char name[50];
    int ia1,ia2,ia3,cta,cie;
}student;
student read()
{
    student s;
    printf("Enter the details of student");
    printf("name=");
    scanf("%s",s.name);
    printf("Enter roll no");
    scanf("%d",&s.rollno);
    printf("Enter the 3 ia marks followed by cta");
    scanf("%d %d %d %d",&s.ia1,&s.ia2,&s.ia3,&s.cta);
    return s;
}
void compute(student *s)
{
    int sum1=s->ia1+s->ia2;
    int sum2=s->ia2+s->ia3;
    int sum3=s->ia1+s->ia3;
    if((sum1>=sum2) && (sum1>=sum3))
    {
      s->cie=s->cta+sum1;
    }
    else if((sum2>=sum1) && (sum2>=sum3))
      {s->cie=s->cta+sum2;}
    else
      {s->cie=s->cta+sum3;}
}
void display(student s)
{
    printf("Name  \tRollno\tCIE\n");
   
     printf("%s\t%d\t%d\n",s.name,s.rollno,s.cie);
}
int main()
{
    student s;
    s=read();
    compute(&s);
    display(s);
    return 0;
    
}