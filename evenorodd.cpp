#include<iostream>
using namespace std;

bool iseven(int a){ 
    
    if(a&1){
        return 0;
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    if(iseven(n)){
        cout<<"the number is even "<<endl;
    }
    else{
        cout<<"the number is odd "<<endl;
    }
}