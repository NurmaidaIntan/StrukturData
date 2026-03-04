//C++ program to find minimum and maximum element in array

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int minimum (int arr[], int n){
    int res = arr[0];
    for(int i = 1; i < n; i++){
        res = min(res, arr[i]);
    }
    return res;
}

int maksimum (int arr[], int n){
    int res = arr[0];
    for(int i = 1; i < n; i++){
        res = max(res, arr[i]);
    }
    return res;
}

int main(){
    int arr[] = {12, 1234, 45, 67, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    minimum(arr, n);
    cout << "Minimum element of array" <<" " << minimum(arr, n) << endl;
    maksimum(arr, n);
    cout << "Maximum element of array" <<" " << maksimum(arr, n) << endl;

    return 0;
}