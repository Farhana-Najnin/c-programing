//3. No Return + Parameter
#include<stdio.h>
void fun(int x,int y){
int s=x-y;
printf("%d",s);
return;
}
int main(){
int x,y;
scanf("%d %d",&x,&y);
fun(x,y);

return 0;
}

