#include<stdio.h>
int main(){
int n,k=1;
scanf("%d",&n);
int s= n/2;
printf("%d\n",s);
for(int i=1;i<=n;i++){
if(i!=(s+1)){
              for(int m=1;m<=s;m++){
        printf("*");


        }

    for(int j=1;j<=k;j++){

        printf("#");
    }
    for(int m=1;m<=s;m++){
        printf("*");
  }

    printf("\n");

}
}
}


