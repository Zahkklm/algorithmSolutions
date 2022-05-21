#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector <unsigned int> sticklist; 
    for(int i=0; i<n; i++){
        int inp; cin >> inp;
        sticklist.push_back(inp);
    }
    // solve
    int lowest=999999,amount_of_cut=0;
    while(1){
        for(auto it=sticklist.begin(); it!=sticklist.end(); it++){
            if(*it > 0) {
                int num=*it;
                lowest=min(num, lowest);
            }  // find shortest
        }
        if(lowest==999999) break;
        for(auto it=sticklist.begin(); it!=sticklist.end(); it++){
            if(*it>0){
                *it=*it-lowest;
                amount_of_cut++;
            }
        }
        cout << amount_of_cut << endl;
        amount_of_cut = 0;
        lowest=999999;
    }
    return 0;
}