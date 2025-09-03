/**
    Cerinta:
        Se da un numar natural n si n numere naturale. Conform definitiei, aceste n numere vor forma un vector cu n numere.
        Sa se afiseze vectorul rezultat dupa fiecare dintre urmatoarele operatii:
            1)Vectorul ramane intact
            2)Dupa fiecare numar impar, sa se insereze in vector oglinditul sau
            3)Sa se stearga toate aparitiile ultimului element din vectorul curent
            4)Sa se sorteze vectorul crescator


    Date de intrare:
        Pe prima linie va fi un numar n si pe urmatoarea linie vor fi n numere citite de la tastatura.
        (Datele de intrare se vor citi din fisierul "intrare.in")

    Restrictii:
        1 <= n <= 1000000
        -2^64 <= v[i] <= 2^64

    Date de iesire:
        Se va afisa pe rand fiecare vector rezultat dupa fiecare operatie dupa urmatorul exemplu

        Vectorul initial: ........
        Vectorul dupa inserare: .........
        Vectorul dupa stergere: .........
        Vectorul dupa sortare: ...........

        (Datele de iesire vor aparea in consola, nu in vreun fisier)
    Exemplu:
        Intrare:
        7
        12 34 51 21 12 15 43

        Iesire:
        Vectorul initial: 12 34 51 21 12 15 43
        Vectorul dupa inserare: 12 34 51 15 21 12 12 15 51 43 34
        Vectorul dupa stergere: 12 51 15 21 12 12 15 51 43
        Vectorul dupa sortare: 12 12 12 15 15 21 43 51 51

*/
#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("intrare.in");

long long n, v[1000000];

long long inserare[1000000], dim_inserare = 0;
long long eliminare[1000000], dim_eliminare = 0;

long long Oglindit(long long n){
    long long ogl = 0;
    while(n){
        ogl = ogl * 10 + (n % 10);
        n = n / 10;
    }
    return ogl;
}

int main(){
    fin >> n;
    for(int i = 1; i <= n; i++){
        fin >> v[i];
    }

    //Afisam vectorul initial(cerinta 1)
    cout << "Vectorul initial: ";
    for(int i = 1; i <= n; i++){
        cout << v[i] << ' ';
    }
    cout << endl;

    //Cream un nou vector bazat pe cel initial doar ca are in plus oglinditul(cerinta 2)
    for(int i = 1; i <= n; i++){
        //deplasam iteratorul pentru a face loc pentru elementul din vectorul initial
        dim_inserare++;
        inserare[dim_inserare] = v[i];
        if(v[i] % 2 == 1){
            // pe langa cel initial, adaugam si oglinditul
            dim_inserare++;
            inserare[dim_inserare] = Oglindit(v[i]);
        }
    }

    //Afisam vectorul dupa inserare
    cout << "Vectorul dupa inserare: ";
    for(int i = 1; i <= dim_inserare; i++){
        cout << inserare[i] << ' ';
    }
    cout << endl;

    //Cream un nou vector in care inseram doar elementele diferite de ultimul element din vectorul dat, dupa inserare(Cerinta 3)
    int intrus = inserare[dim_inserare];
    for(int i = 1; i <= dim_inserare; i++){
        if(inserare[i] != intrus){
            //bagam in noul vector elementele diferite de ultimul
            dim_eliminare++;
            eliminare[dim_eliminare] = inserare[i];
        }
    }

    //Afisam vectorul dupa eliminare
    cout << "Vectorul dupa eliminare: ";
    for(int i = 1; i <= dim_eliminare; i++){
        cout << eliminare[i] << ' ';
    }
    cout << endl;

    //Nu are rost sa cream in nou vector pentru a-l afisa soratat asa ca il sortam direct pe cel dupa eliminare(Cerinta 4)
    for(int i = 1; i < dim_eliminare; i++){
        for(int j = i + 1; j <= dim_eliminare; j++){
            if(eliminare[i] > eliminare[j]){
                swap(eliminare[i], eliminare[j]);
            }
        }
    }

    //Afisam vectorul dupa sortare:
    cout << "Vectorul dupa sortare: ";
    for(int i = 1; i <= dim_eliminare; i++){
        cout << eliminare[i] << ' ';
    }
     return 0;
}
