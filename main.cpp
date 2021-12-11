#include <iostream>

using namespace std;
#include "lib.h"

int main() {
    float b=0;
    int n=0;
    cin >> n;

    float numeri [n];
    for (int i=0; i < n; i++){
        cin >> b;
        numeri[i]=b;
    }
    cout<<maxarray(n, numeri)<<endl;
    return 0;
}
