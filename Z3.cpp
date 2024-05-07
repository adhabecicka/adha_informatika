
#include<iostream>
using namespace std;


    int proizvod(int n){
    int proizvod = 1;


    for (int i = 1; i <= n; i++){
        if(i % 2 == 0)
            proizvod = proizvod * i;
        return proizvod;
    }
    }


int main(){
    cout << "Proizvod parih brojeva od k do n: "<< endl;
    int k;
    int n;

    cout <<"od broja: " << endl;
    cin >> k;

    cout << "do broja: " << endl;
    cin >> n;

    cout << " n " << n << " = " << proizvod(n);





return 0;}
