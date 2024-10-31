#include <iostream>

using namespace std;

int main()
{
   int n, ogl = 0,cn;

   cin >> n;
   cn = n;
   while (n > 0){

    ogl = ogl * 10 + (n % 10);
    n = n /10 ;
   }
   if (cn == ogl)
    cout <<"este palindrom";
else
    cout << "nu este palindrom";
    return 0;
}
