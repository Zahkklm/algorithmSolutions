#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;
bool coprime(ll a, ll b) {     
    if ( __gcd(a, b) == 1)
        return true;
    else
        return false;       
}

int main(){
    ll n1, n2;
    cin >> n1 >> n2;
    if(n2-n1 < 2) 
        cout << -1;
    else{
        for(ll i=n1; i<=n2; i++){
            for(ll m=i+1; m<=n2; m++){
                if(coprime(i,m)){
                    for(ll k=m+1; k<=n2; k++){
                        if(coprime(m,k)){
                            if(!coprime(i,k)){
                                cout << i << ' ' << m << ' ' << k;
                                return 0;
                            }
                        }
                    }            
                }
            }
        }
        cout << -1;
    }
    
    return 0;
}