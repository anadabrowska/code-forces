#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    char a;
    int digits[10] = {0};
    for(int i =0; i < n; i ++){
        cin >> a;
        switch(a - '0'){
            case 1:
            case 0:
                break;
            case 2:
                digits[2]++;
                break;
            case 3:
                digits[3]++;
                break;
            case 4:
                digits[3]++;
                digits[2] += 2;
                break;
            case 5:
                digits[5]++;
                break;
            case 6:
                digits[5]++;
                digits[3]++;
                break;
            case 7:
                digits[7]++;
                break;
            case 8:
                digits[7]++;
                digits[2] += 3;
                break;
            case 9:
                digits[7]++;
                digits[3] += 2;
                digits[2]++;
        }
    }
    for(int i = 9; i > 1; i--){
        while(digits[i] > 0){
            cout << i;
            digits[i]--;
        }
    }
    cout << endl;
    return 0;
}