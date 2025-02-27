#include<iostream>
using namespace std;
void swap(int arr[]){
int temp;

temp= arr[0];
arr[0]=arr[4];
arr[4]=temp;

}
int main(){
int arr[5]={0,1,2,3,4};
swap(arr);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}

}