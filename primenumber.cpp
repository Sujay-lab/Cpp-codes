#include <iostream>
using namespace std;

int main(){
    int n,i=2;
    cout<<"enter the number :";
    cin>>n;
    while(i<n){
        if(n%i==0){
            cout<<"not a prime for "<<i<<endl;
        }
       
        else{
        cout<<"prime for "<<i<<endl;
        }
         i+=1;
    }
}