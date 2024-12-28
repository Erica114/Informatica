
/// Varianta Corecta
#include <iostream>
using namespace std;

int main() {
    int n, p, x, s = 0;
    cin >> n >> p;

    while (n > 0) {
        cin >> x;
        int nr = 1;
        int cx = x;// tii o copie a lui x pentru ca tu ai nevoie sa adaugi la suma valoarea lui initiala, nu valoarea pe care o ai dupa ce il distrugi in while ul de la descompunere
        for (int f = 2; f * f <= x; f++) { // tu trebuie sa cresti factorii primi intr un for
          // iei toti factorii pana la radical din x pentru ca nu are niciun sens sa treci prin toti factorii pana la f
          // Ex : 36 
          // perechi care se inmultesc si dau 36 : (1,36),(2,18),(3,12),(4,9),(6,6)
          // divizorii mai mici sau egal decat sqrt(36) = 1, 2, 3, 4, 6
          // divizorii mai mari decat sqrt(36) sunt 9, 12, 18, 36 si sunt obtinuti din 36 / 4, 36 / 3, 36 / 3, 36 / 2 si 36 / 1
        // De ce verificam pana la radical?? fiecare divizori f care este mai mic sau egal cu radical din x  are un partener x / f care este mai mare sau egal cu radical din x.  Astfel, toti divizorii sunt acoperiti verificand doar pana la radical din x
          // ++++ ca reducem nr de iteratii 
          
          
        
          /// ALT EXEMPLU
         // x = 1000000, 
          // divizorii lui x sunt:  1,2,4,5,8,10,16,20,25,32,40,50,64,80,100,125,160,200,250,320,400,500,625,800,1000,1250,1600,2000,2500,3125,4000,5000,6250,8000,10000,12500,20000,25000,50000,100000,200000,500000,1000000
              /// initial avem f = 2: | |   | |  |  |     |  |  |  |  |   |       |   |  |   |   |    |      |    |    |    |    |    |          |   |    |    |    |     |     |      |     |     |     | 			|				|    ( toate astea sunt impartite pana cand nu mai sunt div cu 2)
          	/// ramanem cu       :  1,1,1,5,1,5,1,5,25,1,5,5,1,5,5,125,5,5,125,5,5,5,625,5,5,125,5,5,125,3125,5,5,125,5,5,125,5,5,5,5,5,5,5
          	/// acum avem f = 3 // nu este niciunul divizibil cu 3
            /// .....
          /// ajungem la f = 5, vedem ca toate nr sunt div cu 5 si ramanem doar cu 1 -uri
          												// 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
          			// Daca parcurgeam f ul de la 0 pana la  1000000, faceam  1000000 de iteratii si riscam sa facem prea multe impartiri degeaba care ar putea cauza semnal ucis 11
          /// am parcurs pana la radical , adica pana la 1000 si reducem masiv iteratiile si posibilitatea sa stricam unele numere
          /// in cazul cand x = 1000000 era corect daca cresteam f ul pana la  5 (sau pana la log2(1000000))dar in worst case nu avem de unde stii daca e corect 
          /// defapt observam ca putem sa crestem f ul pana la (Log*(log star) din 1000000) ^ 2 si avem 3 ^ 2 si e corect sa il crestem pana la maxim 9
          // aceasta modalitate nu are o precizie prea buna dar merita incercat
          												
          int p1 = 0;
            while (x % f == 0) {
                x /= f;
                p1++;
            }
            if (p1 > 0) {
                nr = nr *  (p1 + 1);
            }
        }
        if (x > 1) {                                 
            nr = nr * 2;
        }

        if (nr >= p) {
            s = s + cx;
        }
        n--;
    }

    cout << s;
    return 0;
}

// Varianta Initiala
#include <iostream>

using namespace std;

int main()
{
    int n, p, x, s = 0;
    cin >> n >> p;
    while (n > 0){
        int nr = 1, f = 2;
        int p1 = 0;
        cin >> x;
        while (x % f == 0){
            x = x / f;
            p1++;
        }
        if (p1 > 0){
            nr = nr * (p1 + 1);
        }
        f++; // tu cresti f ul doar o singura data pentru ca dupa ce ajungi la finalul while ului cu n > 0, intrii iar si mai citesti in x si il reinitializezi pe f si pe x
        if (nr >= p){
            s = s + x; // x ul e distrus si ti se strica suma din start 
        }
        n--;
    }
    cout << s;
    return 0;
}  
