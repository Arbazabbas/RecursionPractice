#include<iostream>
using namespace std;
int sayDigit(int n,string arr[]){
    //base case
    if(n==0){
        return;
    }
    int digit=n%10;
    n=n/10;
    return sayDigit(n,arr);
    cout<<arr[digit]<<endl;
}
int main(){
    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    string arr[10]={"zero","One","two","three","four","five","six","seven","eight","nine"};
    cout<<endl;
    sayDigit(n,arr);
    cout<<endl;
return 0;
}