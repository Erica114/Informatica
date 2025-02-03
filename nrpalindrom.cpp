#include <iostream>

using namespace std;

int main()
{
    int x, ogl = 0;
    cin >> x;
    int cx = x;
    while(x > 0){
        ogl = ogl * 10 + x % 10;
        x = x / 10;
    }
    if (cx == ogl)cout <<"nr palindrom";
    else
        cout <<ogl;



    return 0;
}
