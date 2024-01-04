#include<stdio.h>

int main(){
int n;
scanf("%d",&n);
  int w1=0,w2=0;
for(int i=1;i<n;i++){
    int x1,x2;
scanf("%d %d",&x1,&x2);
    if(x1>x2){
        w1++;
    }
    else if(x1<x2){
       w2++;
    }

}
if(w1>w2){
    printf("Tiger");
}
else if(w1<w2){
    printf("Pathan");

}
else{
     printf("Draw");
}
return 0;
}
