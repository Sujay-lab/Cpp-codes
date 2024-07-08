#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row =1;
    while(row<=n){
        int col =1;
        while(col<=row){
            char start = 'A'+n-row;
            cout<<start;
            col +=1;
        }
        cout<<endl;
        row=row+1;
    }
}