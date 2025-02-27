#include<iostream>
using namespace std;
int sum_digit(int n){

    int digit=0;
    while(n>0){
        digit+=n%10;
        n=n/10;
    }
    return digit;
}
int main(){
    int n;
    cin>>n;
    cout<<sum_digit(n);
}