#include<iostream>
using namespace std;

int main(){
    int a=4;
    int b=6;

    cout<<"a and b : "<<(a&b)<<endl;
    cout<<"a or b : "<<(a|b)<<endl;
    cout<<"a not : "<<(~a)<<endl;
    cout<<"a xor b : "<<(a^b)<<endl;

    cout<<"right shift : "<<(17>>1)<<endl;//when we do right shift by 1 we will get divide by 2 i.e, for (17/2=8)
    cout<<"right shift : "<<(17>>2)<<endl;//when we do right shift by 2 we will get divide by 2 twice i.e, for (17/4=4)
    cout<<"left shift : "<<(19<<1)<<endl;//when we do left shift by 1 we will get multiplied by 2 i.e, for (19*2=38)
    cout<<"left shift : "<<(17<<2)<<endl;//when we do left shift by 2 we will get multiplied by 2 twice i.e, for (21*4=84)

    int i=7;

    cout<<(++i)<<endl;//8
    cout<<(i++)<<endl;//8,i=9
    cout<<(i--)<<endl;//9,i=8
    cout<<(--i)<<endl;//7
}