#include <iostream>

using namespace std;

int main(){

unsigned int x1, y1, x2, y2;

cin >> x1 >> y1 >> x2 >> y2;

if(x1 - y1 == x2 - y2 || x1 + y1 == x2 + y2)
cout << "YES";
else cout << "NO";

return 0;
}