#include <bits/stdc++.h>

using namespace std;

int main(){

int x, y, z;
cin >> x >> y >> z;

if(x + y >= z)
cout << x + y - z;
else cout << "Impossible";

return 0;
}