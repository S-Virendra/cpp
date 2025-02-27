#include<iostream>
using namespace std;
bool isDivisible(int n){

if(n%12==0){
    return true;
}
return false;
}
int main(){
    int n;
    cin>>n;
cout<<isDivisible(n);

}