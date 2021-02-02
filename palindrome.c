#include<stdio.h>
int main ()
{
    int i,j;
    char a[50],b[50];
    scanf("%[^\n]",a);
    for(i = 0; a[i]!=0;i++);
    j = 0;
    for(i = i-1; i>=0; i--)
    {
       b[j]= a[i];
       j++;
    }
    b[j] = '\0';
    i = 0;
    while(a[i] == b[i] && a[i]!=0 && b[i]!=0)
        i++;
    if(a[i]==b[j])
    {
        printf("palindrome");
    }
    else
        printf("not palindrome");
    return 0;
}
