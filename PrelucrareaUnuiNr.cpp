#include <iostream>

using namespace std;

int main()
{
    int n, x, p = 1, A = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> x;
        A = A * 10 + x % 10;

    }
    cout << A;
    int ogl = 0;
    while (A > 0){
       ogl = ogl * 10 + A % 10;
       A = A / 10;
    }
    cout <<" "<<ogl;

    return 0;
}
