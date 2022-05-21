#include <bits/stdc++.h>
using namespace std;

void ucluyu_bul(int arr[],int n, int uclu[]){
  //  static int uclu[3] = { };


    for(int i=0; i<n-2; i++){
        for(int j=i; j<n; j++){
            if(i == j) 
                continue;
            if(arr[i] > arr[j]){
                // üçlüyü seç
                uclu[0] = arr[i];
                uclu[1] = arr[i+1];
                uclu[2] = arr[i+2];
                return;
            }   
        }
    }

   
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n; cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            int x; cin >> x;
            arr[i] = x;
        }

        int uclu[3];

        ucluyu_bul(arr, n, uclu);

        for(int i=0; i<3; i++){            
            swap(uclu[2], uclu[0]);            
        }

        if(is_sorted(uclu, uclu+n) )
        printf("YES");

        else printf("NO");


       
    }
    return 0;
}
