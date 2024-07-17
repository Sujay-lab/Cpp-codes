#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a;
    vector<int> v(5,1);
    int sizeofarrayv =v.size();
    cout<<"The size of array is: "<<sizeofarrayv<<endl;
    
    cout<<"print v"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    // to know the capacity of vector
    cout<<"the capacity of vector is "<<a.capacity()<<endl;
    a.push_back(5);
    a.push_back(7);
    a.push_back(7);
    a.push_back(10);
    
    //To print the size of array
    int sizeofarray =a.size();
    cout<<"The size of array is: "<<sizeofarray<<endl;
    // to print the elements of array
    cout<<"print v"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    a.pop_back();
     sizeofarray =a.size();
    cout<<"\n The size of array is: "<<sizeofarray<<endl;
    cout<<"\n ";
    for(int i=0;i<sizeofarray;i++){
        
        cout<<a[i]<<" ";
    }
   cout<<"\n copying"<<endl;
    vector<int>last(v);
    for(int j:v){
        cout<<j<<" ";
    }
    v.clear();
    cout<<"\n after clearing"<<endl;
    for(int j:v){
        cout<<j<<" ";
    }




}