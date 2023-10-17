#include<iostream>
void update(char &alpha){
    alpha='z';
}
int main()
{
    char alpha='a';
    printf("Before passing alpha=%c\n",alpha);
    update(alpha);
    printf("After passing alpha=%c\n",alpha);
return 0;
}
