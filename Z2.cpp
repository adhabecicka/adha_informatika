#include<iostream>
using namespace std;


    bool paran(int a){
        bool paran;
        if(a % 2 == 0){
            paran = true;
        }
        else{
            paran = false;
        }
        return paran;

    }
int main(){
    int n;
    cin >> n;

    if(paran(n)){
        cout <<"paran" << endl;

    }
    else{
        cout << "nije paran << endl";

    }









return 0;}

