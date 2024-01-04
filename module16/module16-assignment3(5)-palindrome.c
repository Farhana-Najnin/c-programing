#include<stdio.h>
#include<string.h>
int  is_palindrome(char ar[])
{
    int n=strlen(ar);
    char b[10];
    int s=n-1;
    for(int i=0; i<n; i++)
    {

        b[i]=ar[s];
        s--;
    }
    b[n]='\0';
    for(int i=0; i<n; i++)
    {
        printf("%c",b[i]);
    }
    //int m=strcmp(ar,b);
    if(strcmp(ar,b)==0)
    {
        return 1;
    }
    else
        return 0;

}


int main()
{
    char ar[10];

        scanf("%s",ar);

    int v=is_palindrome(ar);

    if(v==1)
    {
        printf("Palindrome");
    }
    else
        printf("Not Palindrome");
}
