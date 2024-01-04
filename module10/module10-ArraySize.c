#include<stdio.h>
int main(){
    //int array
int a[5];
int sA=sizeof(a)/4;
printf("%d",sA);
//string size
char b[5];
int sB=sizeof(b)/1;
printf("%d",sB);
return 0;
}

