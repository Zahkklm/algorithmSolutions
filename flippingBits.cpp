#include <bits/stdc++.h>
using namespace std;

int main(){
    int size; 
    cin >> size;
    int arr[size];

    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    sort(arr, arr + size);

    if(size == 1)
        cout << arr[0];
    else{
        for(int i=0; i<size; i+=2){
            if(i+1 != size){
                if(arr[i] ^ arr[i+1] != 0){
                    cout << arr[i];
                    break;
                }
            } 
            else{
                cout << arr[i];
            }           
        }
    }    
}
