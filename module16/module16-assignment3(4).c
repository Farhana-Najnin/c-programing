//1.Has Return + Parameter
#include<stdio.h>
int fun(int x,int y){
if(x>y){
    return x;
}
else
    return y;
}
int main(){
int x,y;
scanf("%d %d",&x,&y);
int a=fun(x,y);
printf("%d",a);
return 0;
}
