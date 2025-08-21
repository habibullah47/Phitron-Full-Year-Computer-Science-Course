#include <iostream>
using namespace std;

int main (){
   // int a[5];

   //Dynamic array 
   //We can increase or decrease the size of the array at runtime
   //We can return this array from a function
   int *a = new int[5];

   for (int i = 0; i < 5; i++){
    cin >> a[i];
   }
   for (int i = 0; i < 5; i++){
    cout << a[i];
   }
}