#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tests;
    cin >> tests;

    while(tests--){
        int sayi;
        cin >> sayi;
        int divnum=0;
        for (int i = 8; i >= 0; i--)
        {
            int num = pow(10, i); // sayi ^ i
            int division = sayi / num;
            if( num <= sayi){
                if(division % 10 == 0) {
                    continue;
                }
                if(sayi % (division % 10) == 0) {
                    divnum++;    
                }
            }     
        }
        cout << divnum << endl;        
    }    
}

