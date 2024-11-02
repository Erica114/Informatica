#include <iostream>
using namespace std;
bool VerifParitate(int n){
    if (n % 2 == 0){
        return 1;
    }
    if ( n % 2 != 0){
        return 0;
    }
}
int main(){
    int a;
    cin >> a;
    if (VerifParitate(a)==1)
        cout << "par";
    if (VerifParitate(a)==0)
        cout << "impar";
    
    return 0;
}
