#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int answer;
    int enkucuk = 100000;
    bool d = true;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int j = 0; j < n; j++){
        if(enkucuk > a[j]){
            enkucuk = a[j];
        }
    }
    for(int k = 0; k < n; k++){

        if(d == true){
            if(enkucuk == a[k]){
                d = false;
            }else{
                answer += a[k];
            }
        }else{
            answer += a[k];
        }
    }


    cout << answer;
    return 0;
}