#include<stdio.h>
void fun(long n){

for(int i=1;i<=n;i++){
printf("%d ",i);
}
}
int main(){
long n;
scanf("%ld",&n);
fun(n);
return 0;
}
