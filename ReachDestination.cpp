#include<iostream>
using namespace std;
void ReachDest(int src,int dest){
    cout<<"Source "<<src<<" and destination is "<<dest<<endl;
    //base case
    if(src==dest){
        cout<<"You have reached your destination";
        return;
    }
    src++;
    ReachDest(src,dest);
}
int main(){
    int src=1;
    int dest=10;
    ReachDest(src,dest);
    return 0;

}