#include <bits/stdc++.h>
using namespace std;
int main(){
    int g; cin >> g;
    while(g--){
        int n; cin >> n;
        char board[n];
        for(int i=0; i<n; i++){
            cin >> board[i];
        }

        // solve

        // find unhappy
        // continue from that unhappy guy

        while(1){
            int iter = -7;
            int unhappy = find_unhappy_bug(board, n);
            for(int i=0; i<n-1; i++){
                if(i == unhappy)
                    continue;
                if(board[unhappy] == board[i]){
                    if(board[i+1] == '_' ){
                        iter = i+1;
                    } 
                    else if(board[i-1] == '_'){
                        iter = i-1;
                    }
                }
            }
            
            for(int i=0; i<n-1; i++){
                if(i == unhappy)
                    continue;
                if(board[unhappy] == board[i]){
                    if(board[i+1] == '_' ){
                        iter = i+1;
                    } 
                    else if(board[i-1] == '_'){
                        iter = i-1;
                    }
                }
            }

        }

       
    }
    

     return 0;
}

int find_unhappy_bug(char arr[], int size){
    int iterator = -1;
    for(int i = 0; i < size-1; i++ ){
        if ( arr[i] == '_'  && arr[i+1] != '_') return i+1;
    }
    return -1;
}