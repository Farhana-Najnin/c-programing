#include<stdio.h>
int count_before_zero(int ar[],int n){
int cnt=0;
for(int i=0;i<n;i++){
if(ar[i]==0){
   break;
}
else {
    cnt++;
}
}
return cnt;
}

int main(){
    int n;
    scanf("%d",&n);
int ar[n];
for(int i=0;i<n;i++){
    scanf("%d",&ar[i]);
}
int c=count_before_zero(ar,n);
printf("%d",c);
return 0;
}
