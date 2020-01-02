#include<bits/stdc++.h>

using namespace std;
#define MAX 1000006
vector<vector<int>> graph(MAX);
int n,m, paths = 0;
int cats[MAX];
bool visited[MAX]; // dafault false

void dfs(int v, int oldCats){
    visited[v] = true;
    int newCats;
    if(oldCats > m) {
        return;
    }
    bool end = true;
    for(auto &i : graph[v]){
        if(!visited[i]){
            newCats = cats[i]? oldCats+1 : 0;
            dfs(i, newCats);
            end = false;
        }
    }
    if(end) {
        paths++;
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> cats[i+1];
    }
    int x1,x2;
    for(int i = 0; i < n-1; i++){
        cin >> x1 >> x2;
        graph[x1].push_back(x2);
        graph[x2].push_back(x1);
    }
    dfs(1,cats[1]);
    cout << paths << endl;
    return 0;
}