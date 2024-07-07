#include<iostream>
using namespace std;

int main(){
    char a;
    cin >> a;
    if(a >= 'A' && a <= 'Z'){
        cout << "capital" << endl;
    }
    else if(a >= 'a' && a <= 'z'){
        cout << "smaller" << endl;
    }
    else{
        cout << "number" << endl;
    }
}
