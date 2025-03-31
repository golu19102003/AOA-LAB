#include<stdio.h>
void display_arr(int arr[] , int n);
void bubble_sort(int arr[] , int n);
void main(){
int temp,n,i;
int arr[50];
printf("Enter the number of the elemnts for the array : ");
scanf("%d",&n);
printf("Enter the elements of the array \n");
for(i =0; i<n; i++){
scanf("%d",&arr[i]);
}
bubble_sort(arr,n);
printf("List after sorting \n");
display_arr(arr,n);
}
void display_arr(int arr[] , int n ){
int i;
for(i = 0; i<n; i++){
printf("%d ",arr[i]);
}}
void bubble_sort(int arr[] , int n){
int i,j,temp;
for(i =0; i<n; i++){
for(j = 0; j<n - i - 1; j ++){
if(arr[j]>arr[j+1]){
temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;}
}}
}
