#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;    
    
    int k; 
    cin >> k;
    
    int arr[n];
    
    for(int a=0; a<n; a++){
        int girdi;
        cin >> girdi;
        arr[a] = girdi;
    }
    
    int sonuc = 0;
    
    for(int j=0; j<n; j++){
        for(int i=0; i<j; i++){
            int arri = arr[i];
            int arrj = arr[j];
            if ( (arr[i] + arr[j] ) % k == 0)
            {
               sonuc++; 
            }
        }
    }
    cout << sonuc;
    return 0;
}
