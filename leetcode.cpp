#include<iostream>
using namespace std;


int unique(int arr[],int size){
    int ans=0,x;
    for(int i=0;i<size;i++){
       for(int j=1;j<size;j++){
        if(arr[i]==arr[j])
            ans++;
            x=arr[i];

       }
    }
    return ans,x;
}



int main(){
    int a[5]={5,5,4,4,1};
    int n;
   int res= unique(a,5);
   cout<<res<<endl;
    
}