#include<stdio.h>
void main(){
int i,j,n1,n2;
printf("Enter the row and column size\n");scanf("%d",&n1);scanf("%d",&n2);
int a[n1][n2],b[n2][n1];
for(i=0;i<n1;i++){for(j=0;j<n2;j++){
printf("Enter the %d(row) and %d(Clumn)-",i,j);scanf("%d",&a[i][j]);
}}
printf("Matrix is\n");
for(i=0;i<n1;i++){for(j=0;j<n2;j++){
printf("%d ",a[i][j]);
}printf("\n");}
for(i=0;i<n1;i++){for(j=0;j<n2;j++){
b[j][i]=a[i][j];
}}
printf("Updated matrix is\n");
for(j=0;j<n2;j++){for(i=0;i<n1;i++){
printf("%d ",b[j][i]);
}printf("\n");}
}
