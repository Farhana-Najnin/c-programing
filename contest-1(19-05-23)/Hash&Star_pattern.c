#include<stdio.h>
int main(){
int n,k=1;
scanf("%d",&n);
int s=(n/2);

    for(int i=0;i<n;i++){
            if(i==s){
                 for(int j=1;j<=n;j++){

        printf("#");
    }
    printf("\n");
            }
            else{
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




