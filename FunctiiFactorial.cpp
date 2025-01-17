#include <iostream>

using namespace std;

int fact(int n){
     int r = 1;
for (int i = 1; i <= n; i++){

    r = r * i;
}
    return r; }

    int main () {

    int x;
    cin >> x;
    cout << fact(x);
    return 0;
    }
