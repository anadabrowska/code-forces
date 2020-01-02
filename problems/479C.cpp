#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> dates(n);
    for(int i = 0; i < n; i++){
        cin >> dates[i].first >> dates[i].second;
    }
    sort(dates.begin(), dates.end());
    int minDate = 0;
    for(int i = 0; i < n; i++){
        if(minDate > dates[i].second){
            minDate = dates[i].first;
        }else{
            minDate = dates[i].second;
        }
    }
    cout << minDate << endl;
    return 0;
}