//Nama        : Nurmaida Intan Permadani  
//NRP         : 5025251040  
//Mata Kuliah : Struktur Data 
//Topik       : Queue      

#include <bits/stdc++.h>
using namespace std;

int main() {
    queue <int> data;

    data.push(19);
    cout << "19 telah ditambahkan ke dalam queue" << endl;
    data.push(7);
    cout << "7 telah ditambahkan ke dalam queue" << endl;
    

    if(!data.empty()){
        cout << data.front() << " telah dihapus dari queue" << endl;
        data.pop();
    } 
    if(!data.empty()){
        cout << data.front() << " telah dihapus dari queue" << endl;
        data.pop();
    } 


    data.push(40);
    cout << "40 telah ditambahkan ke dalam queue" << endl;


    if(!data.empty()){
        cout << data.front() << " telah dihapus dari queue" << endl;
        data.pop();
    } 
    if(!data.empty()){
        cout << data.front() << " telah dihapus dari queue" << endl;
        data.pop();
    } 
    if(!data.empty()){
        cout << data.front() << " telah dihapus dari queue" << endl;
        data.pop();
    } 
    
    
    data.push(18);
    cout << "18 telah ditambahkan ke dalam queue" << endl;


    while(!data.empty()) {
        cout << data.front() << endl;
        data.pop();
    }

    return 0;

}