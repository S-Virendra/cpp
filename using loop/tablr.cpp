#include<iostream>
using namespace std;
 void table(int n){
    int ans;
    for(int i=1;i<=10;i++){
    ans=n*i;
    cout<<ans<<endl;
   }


    }
 int main(){
    int n;
   cin>>n;
    table(n);
    return 0;
 }