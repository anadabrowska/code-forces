#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int pi;
    float res = 0.0;
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> pi;
        res += pi;
    }
    cout << res/n << endl;
    return 0;
}