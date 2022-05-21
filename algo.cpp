#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int min=, toplam=0;
    bool durum=false;
    for(int i = 0; i < n; i++) { cin >> a[i]; 
        if(min > a[i]) min = a[i]; 
    }
    for(int i = 0; i < n; i++) { 
        if(durum == false) {
            if(a[i] != min) toplam += a[i];
            else {  
                durum=true;
            }
        }
        else{
            toplam+=a[i];
        }
        
    }
    cout << toplam;
    return 0;
}
