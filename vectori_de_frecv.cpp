/*
    Ti se dau n numere. (cel mai mic numar poate fi 0 iar cel mai mare numar poate fi 2500).
    0 <= x <= 2500(x - nr din cele n numere)
    Sa se afiseze frecventa fiecarul numar din cele n numere.
*/
#include <iostream>

using namespace std;

int v[2505];
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        v[x]++;
    }
    
    for(int i = 0; i <= 2500; i++){
        if(v[i] != 0)
            cout << i << " apare de " << v[i] << " ori\n";
    }
    return 0;
}
