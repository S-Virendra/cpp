#include<iostream>
using namespace std;
void printing(int arr[],int size){
    
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }

    }
    



int main(){
int arr[]={1,0,5,0,2};
int size= sizeof(arr) /sizeof (arr[0]);
printing(arr,size);

}
