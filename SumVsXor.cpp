#include <bits/stdc++.h>
using namespace std;

int findNumberOfZeroes(int num, int size)
{
    int count = 0;
    for(int i=0; i<size; i++)
    { 
        unsigned int abc = num >> 1;       
        if((abc & 1) == 0)
            count++;
        num = num >> 1;    
    }
    return count;
}

int main(){
    
        int b;
        cin >> b;
        b = b & 1;
        cout << b;
    
    
}