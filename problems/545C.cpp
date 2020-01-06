#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int result = 2; // first and last always can be fallen
    int left;
    cin >> n;
    if(n == 1){
        cout << 1;
        return 0;;
    }
    vector<pair<int, int>> trees(n);
    for(int i = 0; i < n; i++){
        cin >> trees[i].first >> trees[i].second;
    }
    left = trees[0].first;
    for(int i = 1; i < n-1; i++){
        if(trees[i].first - trees[i].second > left){
            result ++;
            left = trees[i].first;
        }else if(trees[i].first + trees[i].second < trees[i+1].first){
            result ++;
            left = trees[i].first + trees[i].second;
        }else{
            left = trees[i].first;
        }
    }
    cout << result << endl;
    return 0;
}