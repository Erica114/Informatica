#include <iostream>

using namespace std;

int main()
{
   int n, maxx = 1;
   cin >> n;
   int f = 2;
   while (n > 1){
    int p = 0;
    while (n % f == 0){
        n = n / f;
        p++;
    }
    if (p > 0) {
        if (f > maxx) maxx =f;
    }
        f++;
   }
   cout <<maxx;
    return 0;
}
