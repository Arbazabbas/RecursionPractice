#include<iostream>
using namespace std;
int CountWays(int n){
    //base case
   
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
     if(n==1){
        return 1;
     }
    int ans=CountWays(n-1)+CountWays(n-2);
  
    return ans;
}
int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    int result=CountWays(n);
    cout<<result<<endl;
return 0;
}