#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        unsigned long long int b,w,bc,wc,z;
        cin >> b >> w >> bc >> wc >> z;
        unsigned long long int res_bc=0, res_wc=0;
        if(wc+z > bc){
            res_bc += (bc*b);
        }
        else
            res_bc += (wc+z)*b;
        if(bc + z > wc){
            res_wc += (wc * w);
        }
        else
            res_wc += (bc+z) * w;
        cout << res_wc + res_bc << endl;
    }
} 