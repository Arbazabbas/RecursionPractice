#include<iostream>
using namespace std;
int SumArray(int arr[],int size){
    //base case
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    // if(size==1){
    //     return arr[0];
    // }
  // int s = SumArray(arr ,size-1);
   //  int sum = s+ arr[size-1];
    int sum=SumArray(arr,size-1)+arr[size-1];
    return sum;
}
//}
int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int result=SumArray(arr,n);
    cout<<"sum is "<<result<<endl;
    return 0;
    
}