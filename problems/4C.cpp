#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string s;
    unordered_map <string,int> users;
    cin >> n;
    for(int i =0; i < n; i++){
        cin >> s;
        if(users.find(s) == users.end()){
            cout << "OK" << endl;
            users[s] = 1;
        }else{
            cout << s << users[s] << endl;
            users[s] += 1;
        }
    }
    return 0;
}