#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the amount: "<<endl;
    cin>>n;
    int num;
    cout<<"enter which notes count you want: "<<endl;
    cin>>num;
    
    switch (num)
    {
    case 100:
    {
        cout<<"The number of count in 100 is : "<< n/100 <<endl;
        n=n%100;
        cout<<n<<endl;
    }
        break;
    case 50:
        cout<<"The number of count in 50 is : "<<n/50<<endl;
        n=n%50;
        cout<<n<<endl;
        break;
    case 20:
        cout<<"The number of count in 20 is : "<<n/20<<endl;
        n=n%20;
        cout<<n<<endl;
        break;
    case 10:
        cout<<"The number of count in 10 is : "<<n/10<<endl;
        n=n%10;
        cout<<n<<endl;
        break;
    
    default:
        break;
    } 
}