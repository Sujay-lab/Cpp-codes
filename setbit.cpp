#include <iostream>
#include <cmath>
using namespace std;

int setbits(int a) {
    int count = 0;
    while ((a != 0) ) {
        if ((a & 1)  ) { 
            count++; 
        }
        a = a >> 1; 
        
    }
    return count;
    
}

int setbitscounting(int a,int b){
    return setbits(a)+setbits(b);
}

int main() {
    int n,b;
    cin >> n>>b;
    int result = setbitscounting(n,b);
    cout << result << endl;
    return 0;
}
