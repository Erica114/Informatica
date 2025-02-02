/*Se dau n numere si un t care reprezinta cerinta.
Cerinta 1: se afiseze numarul care are cei mai multi divizori din cele n numere
Cerinta 2: Sa se afiseze numerele prime
Cerinta 3: Se citeste un k. Sa se afiseze cate numere din cele n numere
            au cel putin k divizori care sunt patrate perfecte.**/


#include <iostream>

using namespace std;
int prim (int y){
 if (y < 2)return 0;
 for (int d = 2; d * d <= y; d++){
    if (y % d == 0) return 0;
 }
 return 1;

}

int pp(int z){
    int f = 2, nr = 1;
  while(z > 1){
    int p = 0;
    while (z % f == 0){
        z =z /f;
        p++;
    }
    if (p > 0)nr = nr *(p+1);
  }
  if (nr % 2 != 0)
    return 1;

}

int main()
{
    int n,t;
    cin >> n >>t;
    if (t == 1){
            int x, maxx = -1;
            int ans;
        for (int i = 1; i <= n; i++){
            cin >> x;
            int cx = x;
            int f = 2, nr = 1;
            while (x > 1){
                int p = 0;
                while (x % f == 0){
                    x = x /f;
                    p++;
                }
                if (p > 0) nr =  nr * (p + 1);

                f++;
            }
            if(nr > maxx) {
             maxx = nr;  ans = cx;
            }

        }
        cout << ans;
    }
     if (t == 2){
            int x;
        for (int i = 1; i <= n; i++){
            cin >> x;
            if (prim(x) == 1){
                cout<<x<<" ";
            }
        }
     }
     if(t == 3) {
            int x;
        for (int i = 1; i <= n; i++){
        cin >> x;
        int f = 2,nr = 1;
        while (x > 1){
            int p = 0;
            while(x % f == 0) {
                x = x / f
                p++;
            }
            if (p > 0)nr = nr * (p+1);
        } 
        
        if (nr >= k and )
     }
     }



    return 0;
}








#include <iostream>
#include <cmath>
using namespace std;
int pp(int n){
  int rad = sqrt(n);
  if(rad * rad == n){
    return true;
  }
  return false;
}
int nrdiv_pp(int n){
  int cnt = 0;
  for(int i = 1; i * i <= n; i++){
    if(n % i == 0){
      if(pp(i) == true){
        cnt++;
      }
      if(i != n / i){
        if(pp(n/i)){
          cnt++;
        }
      }
    }
  }
  return cnt;
}
int main(){
  int t, n, k;
  cin >> n >> t;
  if(t == 3){
    cin >> k;
    int ans = 0;
    for(int i = 1; i <= n; i++){
      int x;
      cin >> x;
      if(nrdiv_pp(x) >= k){
        ans++;
      }
    }
    cout << ans;
  }
  return 0;
}
