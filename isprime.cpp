#include<iostream>
using namespace std;

bool isprime(int a){
    for(int i=2;i<=a;i++){
         if (a%i==0){
            return 0;
         }
        

    }
    return 1;
   
}

int main(){
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<"it is prime number:"<<endl;
    }
    else{
        cout<<"it is not a prime"<<endl;
    }
    
}