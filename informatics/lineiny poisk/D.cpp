#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;
int a[n];

for(int i = 1; i <= n; i++){
    cin >> a[i];
}

int x;
cin >> x;
int k;
for(int i = 1; i <= n; i++){
    if(a[i] == x){
    k = i;
    cout << k << " ";
    }
}

return 0;
}