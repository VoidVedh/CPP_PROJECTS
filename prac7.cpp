
//Auth Ved 
//Topic : Bubble sort in ascending order 
#include<iostream>
#include<algorithm>
using namespace std;
void bubble_sort(int arr[], int n ){
for (int i = 0 ; i<n;i++)
{
for (int j = 0 ; j<n-i-1; j++){
if(arr[j]>arr[j+1]){
swap(arr[j],arr[j+1]);
}
}
}
}

void print(int arr[], int n){
for (int i =0 ; i<n ; i++){
cout<<arr[i]<<endl;
}
}
int main(){
int arr[]= {4,6,2,6,9};
int n = 5;
bubble_sort(arr, n);
print(arr, n);
}