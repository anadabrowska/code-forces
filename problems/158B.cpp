#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, group, complement;
    int taxis = 0;
    int complements[5] = {0};
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin >> group;
        if(group == 4){
            taxis ++;
        }else if(complements[group] != 0){
            complements[group]--;
            taxis++;
        }else{
            complement = 4 - group;
            complements[complement]++;
        }  
    }
    for(int i = 4; i > 0; i--){
        while(complements[i] > 0){
            complement = 4/(4-i);
            if(i == 3 && complements[i] < 3 && complements[2] != 0){
                complements[i] = 0;
                complements[2]--;
            }
            if(complements[i] <= complement){
                complements[i] = 0;
            }else{
                complements[i] -= complement;
            }
            taxis++;
        }
    }
    cout << taxis;
    return 0;
}