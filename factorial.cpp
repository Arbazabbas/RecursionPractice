/*#include<iostream>
using namespace std;
//using recursion
    int factorial(int n){
        //base case
        if(n==0){
            return 1;
        }
        return n*factorial(n-1);
    }
    int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
int ans=factorial(n);
cout<<"The factorial of n is "<<ans<<endl;
return 0;
}*/
#include<iostream>
using namespace std;
int factorial(int n){
    int ans=1;
    while(n>0){
        ans*=n;
        n--;
    }
   
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int result=factorial(n);
    cout<<"Factorial of given number is "<<result<<endl;
    return 0;

}