/*#include<stdio.h>
int main(){
int n,k=1,s;
scanf("%d",&n);
s= n-1;
for(int i=1;i<=n;i++){
              for(int m=1;m<=s;m++){
        printf(" ");


        }
    for(int j=1;j<=k;j++){

        printf("*");
    }
    k=k+2;
    s--;
    printf("\n");
}

s=0,k=n+2;
for(int i=1;i<=n-1;i++){
        printf(" ");
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
}*/
//module
#include<stdio.h>
int main(){
int n,k=1,s;
scanf("%d",&n);
s= n-1;
for(int i=1;i<=(2*n)-1;i++){

              for(int m=1;m<=s;m++){
        printf(" ");


        }
    for(int j=1;j<=k;j++){

        printf("*");
    }


if(i<=n-1){
    s--;
    k=k+2;
}
else{
    s++;
    k=k-2;
}
printf("\n");
}
}




