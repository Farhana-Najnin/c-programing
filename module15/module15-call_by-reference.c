#include<stdio.h>
void fun(int * p){
    printf("fun er p er value - %p\n",p);
     printf("main er x er value - %d\n",*p);
   *p=200;

}
int main(){
int x=100;
printf("main er x er address - %p\n",&x);
fun(&x);
printf("main er x er value - %d\n",x);
}

