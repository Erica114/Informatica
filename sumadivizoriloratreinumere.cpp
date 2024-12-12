#include <iostream>

using namespace std;

int main()
{
    int n1, n2, s1=1, s2=1, f=2,cn1=0, cn2=0;
    cin>>n1;
    cin>>n2;
    cn1=n1;
    cn2=n2;
    while(n1>1){
        int p1=1, nr1=0;
        while(n1 % f ==0){
            n1 = n1 / f;
            nr1++;
            p1 = p1 * f;
        }
        if (nr1 > 0) s1 = s1 * (p1*f -1)/(f-1);
        f++;
    }
    f = 2;
    while(n2>1){
        int p2=1,nr2=0;
        while (n2 % f ==0){
            n2 = n2 / f;
            p2 = p2 * f;
            nr2++;
        }
        if (nr2>0) s2= s2 * (p2*f-1)/(f-1);
        f++;
    }
    if (s1 < s2)
        cout<<cn1;
    else
        cout<<cn2;

    return 0;
}
