#include<stdio.h>
int main()
{
    int i ;
    char a[50],b[50];
    scanf("%[^\n] %[^\n]",a,b);
    for(i = 0;a[i]==b[i] && a[i]!=0 && b[i]!=0; i++);
    if(a[i]>b[i])
    {
        printf("The string is equal");
    }
    else if(a[i]< b[i])
    {
        printf("The second string is greater");
    }
    else
        printf(" The strings is equal");

    return 0;
}
