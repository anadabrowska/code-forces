#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
    int m, s;
    string biggest, smallest;
    int maxNum, minNum;
    int sMax, sMin;
    cin >> m >> s;
    if((s < 1 && m > 1) || (s > m*9)){
        cout << -1 << " " << -1 << endl;
        return 0;
    }
    if(s == 0 && m == 1){
        cout << 0 << " " << 0 << endl;
        return 0;
    }
    sMax = s;
    sMin = s;
    for(int i = 0; i < m; i++){
        maxNum = 9;
        minNum = i==0 ? 1 : 0;
        while(maxNum > sMax){
            maxNum--;   
        }
        biggest += to_string(maxNum);
        sMax -= maxNum;
        while(minNum+((m-i-1)*9) < sMin){
            minNum++;
        }
        smallest += to_string(minNum);
        sMin -= minNum;
    }
    cout << smallest << " " << biggest << endl;
}