#include<stdio.h>
int main(){
int ar[5]={10,20,30,40,50};
/*printf("0th index er address - %p\n",&ar[0]);
printf("0th index er address - %p\n",&ar);*/

printf("0th index er value - %d\n",ar[0]);
printf("0th index er value - %d\n",*ar);//dereference

printf("1st index er value - %d\n",ar[1]);
printf("1st index er value - %d\n",*(ar+1));
printf("1st index er value - %d\n",*(1+ar));//avabeo kora jai
printf("1st index er value - %d\n",1[ar]);//avabeo access kora jai 1st index er value
}
