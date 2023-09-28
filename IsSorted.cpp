#include<iostream>
using namespace std;
bool IsSorted(int arr[],int size){
    //base case
  if(size==0 || size==1){
    return true;
  }
  if(arr[0]>arr[1]){
    return false;
  }
 int remaining = IsSorted(arr+1,size-1);
  return remaining;
}
int main(){
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element of array "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool ans=IsSorted(arr,n);
    if(ans){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
    return 0;
}