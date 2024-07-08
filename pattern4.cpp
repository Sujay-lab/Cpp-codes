#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i =0;
   int  count=0;
    while(i<=n)
    {
        int j =0;
        while(j<=n){
            cout << count;
            count +=1;
            j=j+1;
        }
        cout<<endl;
        i+=1;
    }
}