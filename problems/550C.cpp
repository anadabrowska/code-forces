#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define MAX 1000006
#define row 100
#define col 1000
string s;
int dp[row][col];

int check(int i, ll num){
    if(num % 8 == 0 && num != 0){
        cout << "YES" << endl;
        cout << num << endl;
        exit(0);
    }
    if(i == s.length()) return 0;
    if(dp[i][num] == 0) return 0;

    //1000/8 = 125
    check(i+1,(num*10 + (s[i] - '0')) % 1000);
    check(i+1,num);
    
    dp[i][num] = 0;
    return 0;
}

int main(){
    cin >> s;
    memset(dp, 1, sizeof(dp[0][0]) * row * col);
    if(s.find("0") != string::npos){
        cout << "YES" << endl;
        cout << 0 << endl;
        return 0;
    }
    if(!check(0,0)) cout << "NO" << endl;
    return 0;
}