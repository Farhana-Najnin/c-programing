#include<stdio.h>
void fun(int n){
    if(n==0) return;
int x=n%10;
fun(n/10);
printf("%d ",x);
}

int main(){
    int test;
    scanf("%d",&test);
    for(int t=0;t<test;t++){
        int n;
scanf("%d",&n);
fun(n);
if(n==0){
    printf("0");//fun e recursion off hoia jabe 0 hole ty akane 0 er jnno extravabe print
}
printf("\n");
    }

return 0;
}
