#include <bits/stdc++.h>

using namespace std;

int main(){


int n;
cin >> n;
int a[n];

for(int i = 0; i < n; i++){
    cin >> a[i];
}

int m;
cin >> m;
int b[m];

for(int j = 0; j < m; j++){
    cin >> b[j];
}
sort(a, a + n);
sort(b, b + m);
for(int i = 0; i < n; i++){
    for(int k = i + 1; k < n; k++)
    for(int j = 0; j < m; j++)
    if(b[j] == a[i] + a[k]){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

return 0;
}