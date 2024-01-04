/*//amr kora code
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("* ");
    }printf("\n");
}
}
//module e kora
#include<stdio.h>
int main(){
int n,k=1;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=k;j++){
        printf("* ");
    }
    k++;
    printf("\n");
}
}
//ulta kore -method1
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        printf("* ");
    }printf("\n");
}
}*/
//method 2
#include<stdio.h>
int main(){
int n,k,s=0;
scanf("%d",&n);
k= n;
for(int i=1;i<=n;i++){

    for(int j=1;j<=k;j++){

        printf("*");
    }
    k--;
    s++;
    printf("\n");
}
}

