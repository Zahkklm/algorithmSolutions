#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    map<int, int> arr;
    cin >> n;
    int tekrar, encok=0;
    
    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        if(arr.find(k) != arr.end()) // eger varsa
        {
            map<int, int>::iterator iter = arr.find(k);
            iter->second = iter->second+1; 
            tekrar = iter->second;
        }
        else // eger yoksa
        {
            arr.insert(pair<int,int>(k,1)); 
        }
        if(tekrar > encok) encok = tekrar;
    }
    if(encok == 0) cout << n-1;
    else {        
        cout << n-encok << &endl;
    }
}