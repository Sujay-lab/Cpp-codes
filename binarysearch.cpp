#include<iostream>
using namespace std;

int firstsearch(int a[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    
    while(start<=end){
        if(a[mid]==key){
            return mid;
            end=mid-1;
        }
        if(key<a[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
        

    }
    return -1;
    
}

int main(){
    int arr[5]={5,7,10,45,51};
    int res=search(arr,5,45);
    cout<<res;
}