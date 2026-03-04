//C++ program to print number patternsusing for loop

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int number = 1;
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << number << " ";
            number++;
        }
        cout << endl;
    }

    return 0;
}