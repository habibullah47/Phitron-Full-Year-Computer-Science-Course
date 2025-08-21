#include <iostream>
using namespace std;

int main (){
    // We able to delete after increasing size in Dynamic memory
    int *a = new int[3];
    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }

    int *b = new int[5];
    for(int i = 0; i < 3; i++){
        b[i] = a[i];
    }

    b[4] = 50;
    b[3] = 40;
    delete[] a;

    for(int i = 0; i < 5; i++){
        cout << b[i] << " ";
    }
    
}