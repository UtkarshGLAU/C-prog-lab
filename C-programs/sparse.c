#include<stdio.h>
void main(){
int i,j,n1,n2,t=0;
printf("Enter the row and column size\n");scanf("%d",&n1);scanf("%d",&n2);
int a[n1][n2];
for(i=0;i<n1;i++){for(j=0;j<n2;j++){
printf("Enter the %d(row) and %d(Clumn)-",i,j);scanf("%d",&a[i][j]);
if(a[i][j]==0){t++;}
}}
printf("Matrix is\n");
for(i=0;i<n1;i++){for(j=0;j<n2;j++){
printf("%d ",a[i][j]);
}printf("\n");}
if(t>(n1*n2)/2){printf("Sparse\n");}
else{printf("Not Sparse\n");}


}
