#include<stdio.h>
int main(){
int n,k,s=0;
scanf("%d",&n);
k= n+2;
for(int i=1;i<=n;i++){
              for(int m=1;m<=s;m++){
        printf(" ");


        }
    for(int j=1;j<=k;j++){

        printf("*");
    }
    k=k-2;
    s++;
    printf("\n");
}
}




