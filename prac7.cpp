//Auth Ved 
//Topic : Bubble sort in ascending order 

#include<iostream>
#include<algorithm>
using namespace std;

void bubble(int arr[],int n ){
    for(int i = 0 ; i<n-1; i++){
      for(int j = 0; j<n-i-1; j++){
        if(arr[j]>arr[j+1]){
          swap(arr[j],arr[j+1])
        }
      }
    }
}
 
void printout(int arr[], int n ){
      for(int i = 0 ; i<n-1; i++){
   cout<<arr[i]<<" ";
}
cout<<endl;
}
int main(int arr[], int n){
  n = 5;
  arr={6,2,9,1,4};
  bubble(arr,)
}
