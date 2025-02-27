#include <iostream>
using namespace std;
int sum(int arr[]){
    
    int ans=0;
    for(int i=0;i<5;i++){
        
        ans+=arr[i];
    }
    return ans;
}
int main(){
    int arr[5]={0,1,8,3,4};
    cout<<sum(arr);
}