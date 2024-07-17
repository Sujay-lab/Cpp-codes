#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,5> a={1,5,2,8,6};
    array<int,5> b;

    //To print the size of array
    int sizeofarray =a.size();
    cout<<"The size of array is: "<<sizeofarray<<endl;
    // to print the elements of array
    for(int i=0;i<sizeofarray;i++){
        cout<<"The array contains : "<<a[i]<<endl;
    }
    cout<<"element at 2 index: "<<a.at(2)<<endl;
    cout<<"element at starting index: "<<a.front()<<endl;
    cout<<"element at last index: "<<a.back()<<endl;
    
    b.fill(10);
    for(int i: b)
       cout<<"The array b contains : "<<i<<" "<<endl;
    cout<<"checking the array is empty : "<<a.empty()<<endl;
}