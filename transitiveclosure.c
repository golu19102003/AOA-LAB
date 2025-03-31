#include<stdio.h>
int i,j,k,n,arr[10][10];
void warshall(){
for(k = 0; k<n; k++){
for(i = 0; i<n; i++){
for(j = 0; j<n; j++){
if(arr[i][k] != 0 && arr[k][j] !=  0){
     arr[i][j] = 1;}
}}
}}
void main(){
printf("Enter the number of the nodes in the graph ");
scanf("%d",&n);
printf("Enter the adjancey matrix of the graph \n");
for(i = 0; i<n; i++){
for(j = 0; j<n; j++){
scanf("%d",&arr[i][j]);}}
warshall();
printf("transitive closure of a given directed graph is  \n");
for(i = 0; i<n; i++){
for(j = 0; j<n; j++){
printf("%d ",arr[i][j]);}
printf("\n");}
}