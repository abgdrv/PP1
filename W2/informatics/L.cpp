#include <iostream>
using namespace std;
int main(){
    
int n, h, m1, m2, s1, s2;

cin >> n;

h = n / 3600 % 24;
m1 = ( n / 60 ) % 60 / 10;
m2 = ( n / 60 ) % 60 % 10;
s1 = ( n % 60 ) / 10;
s2 = ( n % 60 ) % 10;

cout << h << ":" << m1 << m2 << ":" << s1 << s2 << endl;

    return 0;
}