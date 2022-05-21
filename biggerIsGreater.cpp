#include <bits/stdc++.h>
using namespace std;

/*
    If x > b, x is later than b, it's okay
*/

int findSmallestLetter(string& str){
    int location = 0;
    for(int i=1; i<str.size(); i++){
        if(str[i] < str[location]){
            location = min(str[location], str[i]);
        }
    }
    return location;
}

int main(){
    int t; cin >> t;
    while(t--){    
        string str = "hefg";

        int location = -1;
        for(int i=0; i<str.size()-1; i++){
            if(str[i] < str[i+1]){
                location = i;
            }
        }

        if(location == -1) 
            cout << "no answer";

        int last = -1;
        for(int i=location+1; i<str.size(); i++){
            if(str[location] < str[i]){
                last = i;
            }
        }
        
        swap(str[location], str[last]);

        sort(str.begin()+location+1,str.end());

        cout << str;
    }

    // swap the i and j and sort the rest lexicographically
    return 0;
}