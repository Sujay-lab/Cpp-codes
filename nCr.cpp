#include<iostream>
using namespace std;

int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
         fact=fact*i;
    }
    cout<<"factorial of numbers"<<fact<<endl;
    return fact;
}

int nCr(int a, int b){
    int numerator = factorial(a);
    int denominator =factorial(a-b)*factorial(b);
    return numerator/denominator;
}

int main(){
    int n,r;
    cin>>n>>r;
    int ans=nCr(n,r);
    cout<<ans<<endl;
}