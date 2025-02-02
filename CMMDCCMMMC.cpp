#include "bits/stdc++.h"
using namespace std;
int main(){
  int a, b;
  cin >> a >> b;
  int cmmdc = __gcd(a, b);
  for(int i = 1; i <= cmmdc; i++){
    if(cmmdc % i == 0){
      cout << i << ' ';
    }
  }
  return 0;
}
