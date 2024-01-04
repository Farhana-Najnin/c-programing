#include<stdio.h>
int main(){
int n,x;
scanf("%d %d",&n,&x);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
int flag=0;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
            int r=a[i]+a[j];
    if(r==x){
          flag=1;

        }

    }
}
if(flag==1){
    printf("found");
}
else{
    printf("not found");
}
}
