#include<stdio.h>
void world(){
printf("world start\n");
}
void hello(){
printf("hello start\n");
world();
}
int main(){
printf("main start\n");
hello();
printf("main end\n");
return 0;
}
