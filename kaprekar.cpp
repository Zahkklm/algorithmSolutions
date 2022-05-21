#include <bits/stdc++.h>
using namespace std;

bool check_if_kaprekar(signed long long int num){

    string str_num = to_string(num*num);
    unsigned long long int pos = ceil(str_num.length()/2);
    string str_r;

    if(str_num.length() == 1) str_r = "0";
    else str_r = str_num.substr(0, pos);  // 2025 ==> 20 

    string str_l = str_num.substr(pos, str_num.length()); // 2025 ==> 25;
 
    unsigned long long int num_m_r = stoi(str_r);
    unsigned long long int nul = stoi(str_l);
    if(num_r + num_l == num) return true;
    return false;
}

int main(){
    int p,q;
    cin >> p >> q;
    bool found = false;
    for(unsigned long long int i = p; i <= q; i++){
        if(check_if_kaprekar(i)) { found = true; cout << i << " "; }
        
    }
    if(found == false) cout << "INVALID RANGE";
}