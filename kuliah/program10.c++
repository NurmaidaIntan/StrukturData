//C++ Pointer

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int var = 19;

    //declare pointer and store addres of var
    int *ptr = &var;

    //print value and address
    cout << "Value of var : " << var << endl;
    cout << "Address of var : " << &var << endl;
    cout << "Value stored in pointer ptr : " << ptr << endl;
    cout << "Value pointed to by ptr : " << *ptr << endl;
    //cout << "Alamat pointer : " << &ptr << endl;

    return 0;

}