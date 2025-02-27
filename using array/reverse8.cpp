#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int i=0;
   int j=size-1;
   while(i<j){

    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
   }

   for(int i=0;i<6;i++){

    cout<<arr[i]<<" ";
       }
}
int main(){

   int arr[]={1,2,3,4,5,6};
   int size=6;
   reverse(arr,size);
   
   


   return 0;

}