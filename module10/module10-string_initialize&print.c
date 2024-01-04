#include<stdio.h>
int main(){
//char a[5]={'R','a','h','i','b'};
char a[5]="Rahib";
for(int i=0;i<5;i++){
    scanf("%c",&a[i]);
}
/*for(int i=0;i<5;i++){
    printf("%c",a[i]);
}*/
printf("%s",a);//null na deyai habijabi print korbe

char b[4]="Mahi\0";
int sz=sizeof(b);//size 5 dekhabe;
printf("%s %d",b,sz);


char c[5]="Rahi";
int z=sizeof(b);//guranted
printf("%s %d",c,z);

char d[6]={'R','a','h','i','b'};//null boshbe kono guranty nai..compile er upre nirvor
printf("%s",d);


return 0;
}
