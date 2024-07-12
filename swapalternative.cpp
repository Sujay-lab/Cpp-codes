#include<iostream>
using namespace std;

void printing(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }

}

void swapalternative(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int a[5]={1,5,9,4,3};
    int n;
    swapalternative(a,5);
    printing(a,5);
}