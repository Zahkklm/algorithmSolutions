#include <bits/stdc++.h>

using namespace std;

int sayac = 0;

int fibonacci(int sayi1, int sayi2, int limit)
{
    if(sayac == limit){
        return 0;
    }
    cout << sayi1 << " ";
    sayac++;
    return sayi1 + fibonacci(sayi2, sayi2+sayi1, limit);
}

int main(){
    int n; 
    cin >> n;
    fibonacci(1,1,n);
}

