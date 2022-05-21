#include <bits/stdc++.h>
using namespace std;

int main(){
    string str; cin >> str;
    remove(str.begin(), str.end(), ' '); 

    double L = str.size(); // 15
    double rooted = sqrt(L);

    int row = floor(rooted);
    int column = ceil(rooted);

    if(row*column < L){
        row++;
    }

    char matrix[row][column];
    // for(int i=0; i<row; i++){
    //     for(int j=0; j<column; j++){
    //         matrix[i][j] = '*';
    //     }
    // }

    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            matrix[i][j] = str[i*column+j];
        }
    }

    for(int i=0; i<column; i++){
        for(int j=0; j<row; j++){
            if(matrix[j][i] == 0){
               break;
            }
            cout << matrix[j][i];            
        }
        cout << ' ';
    }


    return 0;
}