#include<iostream>
using namespace std;
void ascend(int arr[],int size){
    int temp;
    for(int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }


}
int main(){
int arr[]={2,4,3,0,1};
int size=5;
ascend(arr,size);
for(int i=0;i<size;i++){


cout<<arr[i]<<" ";

}

}