#include <iostream>

using namespace std;

int main(){

int n, m, sum;
cin >> n >> m;
int a[n][m];

for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        cin >> a[i][j];
        }  
}

for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      sum = i + j;
      if(sum % 2 == 0){
          a[i][j] += 1;
      }
      else if(sum % 2 != 0){
          a[i][j] -= 1;
      }  
    }  
}

for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++)
    cout << a[i][j] << " "; 
    cout << endl;       
}

return 0;
}