#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
int a[row] [col];
int element=0;
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
       scanf("%d",&a[i][j]);
       element++;
    }
    printf("\n");
}
int cnt=0;

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
       if(a[i][j] == 0){
        cnt++;
       }
    }

}
//printf("%d",cnt);
if(element == cnt){
    printf("zero matrix");
}
else{
    printf("not zero matrix");
}
return 0;
}

