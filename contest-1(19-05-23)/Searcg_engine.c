#include<stdio.h>
int main(){
int t;
scanf("%d\n",&t);
for(int i=1;i<=t;i++){
        int l=0;
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int k;
    int cnt=0;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(a[i]==k){
            cnt++;
            l=i;
               break;
        }

}
if(cnt>0){
      printf("Case %d: %d\n",t,l);
    }
    else{

printf("Case %d: Not Found\n",t);
    }
}
//if(cnt>0){

}
