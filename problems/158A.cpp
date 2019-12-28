#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,res;
    cin >> n >> k;
    int a[n];
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }

    if( n == k && a[n-1] > 0){
        res = n;
    }else if(a[k-1] > 0){
        res = k-1;
        while(a[++res] == a[k-1]);
    }else if(a[k-1] == 0 && a[0] > 0){
        res = k;
        while(a[--res] == 0);
        res++;
    }else{
        res = 0;
    }
    cout << res;
    return 0;
}