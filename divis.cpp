#include <bits/stdc++.h>

using namespace std;

void mod_3_yap(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
    {
        v[i] = v[i] % 3;
    }
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> s;
    
    vector<int> solution(k);
    for (int i = 0; i < n; i++) { 
        int inp;
        cin >> inp;
        s.push_back(inp % k);
        solution[inp % k]++;
    }
  
    int max = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(solution[i] > max) max = solution[i];
    }

    int grandmax = 0;
    vector<int> sols;
    for(int i=0; i<solution.size(); i++){
        for(int j=i+1; j<solution.size(); j++){
            if(j+i == k) continue;
            
        }
    }

    cout << grandmax;    
} 