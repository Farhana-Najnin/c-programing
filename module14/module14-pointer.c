#include<stdio.h>
int main(){
int x=10;
printf("%p\n",&x);//address print %p dia
int *p=&x;
/*printf("%p\n",p);
// dereference
printf("%d\n",*p);// p ar madhome x er value ber kora
p=500;
printf("%d\n",x);*/
//printf("%d\n",*p);// p er value change korai x er access harai felbe,ty kono vaue dibena
*p=500;
printf("%d\n",x);//x er value change
return 0;
}
