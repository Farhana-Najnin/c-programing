/*#include<stdio.h>
int main(){
int n,k=1;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=k;j++){
        printf("%d ",j);
    }
    k++;
    printf("\n");
}
}
//ulta
#include<stdio.h>
int main(){
int n,k=1;
scanf("%d",&n);
for(int i=n;i>=1;i--){
    for(int j=1;j<=k;j++){
        printf("%d ",j);
    }
    k++;
    printf("\n");
}
}*/
//ulta korle
#include<stdio.h>
int main(){
int n,k,s=0;
scanf("%d",&n);
k= n;
for(int i=1;i<=n;i++){

    for(int j=1;j<=k;j++){

        printf("%d ",j);
    }
    k--;
    s++;
    printf("\n");
}
}
