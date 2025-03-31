#include<stdio.h>
int n, arr[10][10] , indegree[10],i,j ;
void count_indegree(){
int sum;
for(j = 0; j < n; j++){
sum = 0;
for(i = 0; i < n ; i++){
sum += arr[i][j];
}
indegree[j] = sum;
}}
void topology_sort(){
int u,v,stack[10],t[10],top = -1 , k = 0;
count_indegree();
for(i = 0; i<n; i++){
if(indegree[i] == 0 ){
stack[++top] = i ;}}
while(top != -1 ){
u = stack[top--];
t[k++] = u;
for(v = 0; v < n ; v ++){
if(arr[u][v] == 1){
indegree[v]--;
if(indegree[v] == 0){
stack[++top] = v;
}}
}}
printf("Topological sort of the given graph is \n");
for(i = 0; i < n ; i ++){
printf("%d  ",t[i]);
}}
void main(){
printf("Enter the total number of the nodes : ");
scanf("%d",&n);
printf("Enter the adjancey matrix for the graph \n");
for(i = 0 ; i < n; i ++){
for(j = 0 ; j < n; j++){
scanf("%d",&arr[i][j]);
}}
topology_sort();
}