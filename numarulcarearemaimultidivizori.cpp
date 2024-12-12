#include <iostream>

using namespace std;

int main()
{
    int n1, n2, f = 2,nr1=1, nr2 = 1, cn1=0, cn2=0;
    cin>>n1;
    cin>>n2;
    cn1=n1; cn2=n2;
    while(n1 > 1){
        int p1 = 0;
        while(n1 % f == 0){
            n1 = n1 / f;
            p1++;
        }
        if (p1 > 0)
        {nr1 = nr1 * (p1 + 1);

    }
    f++; }
    f = 2;
    while (n2 > 1){
        int p2 = 0;
        while(n2 % f ==0){
            n2 = n2 / f;
            p2++;
        }

        if (p2 > 0)
        {nr2 = nr2 *(p2 +1);

    }
    f++;
    }

    if (nr1 > nr2)
        cout <<cn1;
    else
        cout <<cn2;
    return 0;
}
