#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;

int cnt = 1;
for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
        if(i + j - 1 == n){
            cout << cnt++;
        }else{
            cout << ".";
        }
    }
    cout << endl;
}


return 0;
}