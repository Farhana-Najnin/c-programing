//2.Has Return + No Parameter
#include<stdio.h>
int fun(void){
    int x,y;
scanf("%d %d",&x,&y);
int m=x*y;
return m;
}
int main(){

int a=fun();
printf("%d",a);
return 0;
}
