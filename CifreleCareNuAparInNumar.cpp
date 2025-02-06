#include <iostream>

using namespace std;

int main()
{
    int n,cn,OK;
    cin >> n;
    for (int i = 0; i <= 9; i++){
            OK = 0;
        cn = n;
       while (cn){

            if (cn % 10 == i){
              OK = 1;
            }
            cn = cn / 10;


        }

        if (OK == 0)cout <<i<<" ";
    }
    return 0;
}
