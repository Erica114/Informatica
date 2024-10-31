#include <iostream>

using namespace std;

int main()
{
   int x, r=0;
   cin >> x;
   while (x > 0){
    r = r * 10 + (x % 10);
    x = x / 10;
   }
   cout << r;
    return 0;
}
