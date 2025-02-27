#include<iostream>//sum of 10multiple of a given no.
using namespace std;
int sum(int n){
int ans=0;
for(int i=1;i<=10;i++){
    ans=ans+i*n;}
    return ans;
}

int main(){

    int a;
    cin>>a;
    cout<<sum(a);
    return 0;
}