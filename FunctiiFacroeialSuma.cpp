#include <iostream>

using namespace std;

long long sumfactcif(int n) {
    if (n == 0 ) return 1;
   int rezultat2 = 0;
   while (n > 0){
     int uc = n % 10,rezultat1 = 1;
     for (int i = 1; i <= uc; i++){

        rezultat1 = rezultat1 * i;
     }

     rezultat2 = rezultat2 + rezultat1;
     n = n / 10;
   }
   return rezultat2;
   }

   int main (){
   long long x;
   cin >> x;
   cout <<sumfactcif(x);



  return 0; }









