#include<iostream>
using namespace std;

int dulp(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for (int i=1;i<n;i++){
        ans = ans^i;
    }
    return ans ;
}

int main(){
     
   int a[5]={1,2,2,3,4};
    int res=dulp(a,5);
    cout<<res;
}