#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
    int n,m,a;
    ll x,y;
    cin >> n >> m >> a;
    x = (n/a);
    y = (m/a);
    if(n%a) x++;
    if(m%a)y++;
    cout << x*y;
    return 0;
}