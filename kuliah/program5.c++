//Check if a number is Even or Odd in C++
//C++ program to check if the number is even or odd
//using modulo operator

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n % 2 == 0){
        cout << "Even";
    }
    
    else cout << "Odd";

    return 0;
}