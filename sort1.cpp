#include<iostream>
using namespace std;


void printing(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    cout<<endl;

}
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min])
            min =j;
        }
        swap(arr[min],arr[i]);
    }
}

int main(){
    int a[5]={5,1,8,6,7};
    sort(a,5);
    printing(a,5);
}