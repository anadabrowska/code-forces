#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
    int tests, n;
    ll elem;
    ll a1, a2;
    ll sum, myXor;
    cin >> tests;
    for(int i = 0; i < tests; i++){
        cin >> n;
        sum = myXor = 0;
        for(int j = 0; j < n; j++){
            cin >> elem;
            sum += elem;
            myXor ^= elem;
        }
        // myXor ^ myXor = 0
        a1 = myXor;
        sum += a1;
        myXor ^= a1;
        //sum+sum = 2sum -> 0^sum = sum -> 2*sum = 2sum 
        a2 = sum;
        sum += a2;
        myXor ^= a2;

        cout << 2 << endl;
        cout << a1 << " " << a2 << endl;

    }
    return 0;
}