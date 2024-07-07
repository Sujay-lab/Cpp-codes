#include<iostream>
using namespace std;
int main(){
    int i=1,sum=0,n;
    cin >> n;

    while(i<=n){
        sum+=i;
        i+=1;
    }
    cout<<"sum is:"<<sum<<endl;
}