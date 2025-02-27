
#include<iostream>
using namespace std;
bool ispallin(int arr[],int size){

    int i=0;
    int j=size-1;
    while(i<j){
        if(arr[i]!=arr[j]){
    return false;
        }
    i++;
    j--;
    }
    return true;
    

}

int main(){

int arr[]={1,2,2,1};
int size=sizeof(arr)/sizeof(arr[0]);
cout<<ispallin(arr,size);
}