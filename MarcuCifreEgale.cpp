

///CERINTA: Se citesc n numere naturale nenule. Afisati suma numerelor care au toate cifrele egale.

/// Numim un numar smeker acel numar care are toate cifrele egale
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int s = 0;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        int cx = x; /// copie a lui x pentru a o folosi cand trebuie sa afisam val. lui x. In while x ul devine 0
        int aux = x % 10; /// folosim variabila aux pentru a verifica daca gasim 2 cifre din numar diferite
        /// aux - pasul anterior 
        /// cifra - pasul initial
        bool ok = true; /// pornim pesimist ca numarul e smeker
        while(x > 0){
            int cifra = x % 10;
            if(cifra != aux){
                ok = false;
            }
            aux = cifra; /// modificam aux, deoarece vom trece la pasul urmator
            x = x / 10;
        }
        if(ok == true){
          s = s + cx;
        }
    }
    cout << s;
    return 0;
}
