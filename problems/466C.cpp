#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main(){
    int n, elem;
    ll MAX = 1000006;
    int elems[MAX];
    ll sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> elem;
        sum += elem;
        elems[i] = elem;
    }
    if(sum % 3 != 0){
        cout << 0 << endl;
        return 0;
    }
    ll third = sum/3;
    ll firstPart = 0;
    int numOfWays[MAX];
    // count for each i all possibilities for first part from 0 to i
    for(int i = 0; i < n ; i++){
        i == 0 ? numOfWays[i] = 0 : numOfWays[i] = numOfWays[i-1];
        firstPart += elems[i];
        if(firstPart == third) numOfWays[i]++;
    }
    ll thirdPart = 0;
    ll result = 0;
    //find all possibilities for third part and for each fond check the first
    for( int i = n-1; i > 1; i--){
        thirdPart += elems[i];
        if(thirdPart == third) result += numOfWays[i-2];
    }
    cout << result << endl;
    return 0;
}