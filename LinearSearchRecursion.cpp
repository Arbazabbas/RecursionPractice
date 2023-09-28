#include<iostream>
using namespace std;
int LinearSearch(int arr[],int n,int key){
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    for(int i=0; i<n; i++){
       // cout<<arr[i]<<endl;
        if(arr[i]==key){
            return i;
        }
    }
    
    int remaining=LinearSearch(arr+1,n-1,key);
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
    int key;
    cout<<"Enter the value which you want to find "<<endl;
    cin>>key;
    int result=LinearSearch(arr,n,key);
    if(result){
        cout<<"value present"<<endl;
    }
    else{
       cout<<"value not present"<<endl;
    }
  cout<<"value present at the index of "<<result<<endl;
    return 0;
}