#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin >> n;

queue<string> q;
for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    if(x == 2)
    q.pop();
    
    else{
        string s;
        cin >> s;
        q.push(s);
    }
    if(!q.empty())
    cout << q.front() << endl;
    else cout << "queue is empty" << endl;
}

return 0;
}