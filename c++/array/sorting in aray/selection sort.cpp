// find the minimum element in unsoretd array and swap it with element at the beagining
#include<iostream>
using namespace std;

 int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }

     for(int i=0;i<n;i++){
         for(int j=i;j<n;j++)
         if(arr[j]<arr[i]){
             int temp=arr[j];
             arr[j]=arr[i];
             arr[i]=temp;
         }
     }
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
     
 }