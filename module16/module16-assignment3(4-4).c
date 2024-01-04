//4. No Return + No Parameter

#include<stdio.h>
void fun(void){
    int x;
scanf("%d",&x);
if(x%2==0){
    printf("even");
}
else
   printf("odd");
}
int main(){

fun();

return 0;
}
