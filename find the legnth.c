#include<stdio.h>
int main()
{
   int i;
   char str[50] ;
   scanf("%[^\n]",str);
   for(i=0; str[i]!='\0';i++);
    printf("%d",i);
}
