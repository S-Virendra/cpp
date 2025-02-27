#include<iostream>
using namespace std;
int max(){

    int arr[5]={2,5,1,6,3};
    int ans=arr[0];
    for(int i=1;i<4;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    return ans;

}
int main(){
    cout<< max();
}
