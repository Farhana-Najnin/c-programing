#include<stdio.h>
int main(){
char a[5];
scanf("%s",&a);
int size=sizeof(a)/sizeof(char);
printf("%d",size);
return 0;
}
