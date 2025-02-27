#include <iostream>

using namespace std;
int smallestdigit(int n) {
   int min = 9;
   while (n != 0) {
      if (min > n % 10){
         min = n % 10;
      n /= 10;
      }
   return min;
}
}
int main(){
   int n;
   cin>>n;
   cout <<"smallest digit:"<<smallestdigit(n);
   return 0;
}