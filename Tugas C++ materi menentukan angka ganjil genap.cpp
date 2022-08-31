#include<iostream>
using namespace std;
int main(){
    int X = 8;
    int Z = 8;

    if(X %2 != 0 && Z %2 != 0){
        cout<<"Semua bilangan ganjil";
    }
    else if(X %2 != 0 && Z %2 == 0){
        cout<<"X adalah ganjil dan Y adalah genap";
    }
    else if(X %2 == 0 && Z %2 != 0){
        cout<<"X adalah genep dan Y adalah ganjil";
    }
    else{
        cout<<"Semua bilangan genap";
    }
    return 0;
}