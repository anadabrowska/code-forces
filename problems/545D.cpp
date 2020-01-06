#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long long int sum = 0;
    int result = 0;
    cin >> n;
    vector<int> times(n);
    for(int i =0; i < n; i++){
        cin >> times[i];
    }
    sort(times.begin(), times.end());

    for(int i =0; i < n; i++){
        if(sum <= times[i]){
            sum += times[i];
            result++;
        }
    }
    cout << result << endl;
    return 0;
}