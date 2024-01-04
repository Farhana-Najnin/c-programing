#include<stdio.h>
#include<string.h>
void fun(char ar[]){
/*int sz=sizeof(ar)/sizeof(char);
printf("%d",sz);//4 asar kotha kintu 8 ase*/
printf("%d",strlen(ar));
}
int main(){
char ar[20]="Hello";
int sz=sizeof(ar)/sizeof(char);
printf("%d",sz);
fun(ar);


}
