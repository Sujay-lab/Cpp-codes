#include<iostream>
using namespace std;

int ap(int n,int a, int d){
    int ans=a+(n-1)*d;
    return ans;
}

int main(){
    int n,a,d;
    cin>>n>>a>>d;
    int result= ap(n,a,d);
    cout<<result;
}