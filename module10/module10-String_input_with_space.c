#include<stdio.h>
#include<string.h>
int main(){
char a[10];
//scanf("%s",a);
 //using gets
gets(a);
printf("%s\n",a);


//using fgets
char b[10];
fgets( b,18,stdin);
printf("%s",b);


return 0;


}

