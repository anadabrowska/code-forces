#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, size;
    string s;
    cin >> n;
    for(int i =0; i < n ; i++){
        cin >> s;
        if(s.size() > 10){
            size = s.size();
            s.replace(1, size-2,to_string(size-2));
        }
        cout << s << endl;
    }
}