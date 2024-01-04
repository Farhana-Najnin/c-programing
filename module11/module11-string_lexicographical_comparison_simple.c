#include<stdio.h>
#include<string.h>
int main(){
char a[100],b[100];
scanf("%s %s",a,b);
int v=strcmp(a,b);
if(v>0){
    printf("B picci");
}
else if(v<0){
    printf("A picci");
}
else {
    printf("same\n");
}
return 0;
}
