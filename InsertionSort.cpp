// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void InsSor(vector<int> ls){
    for(int i = 0 ; i < ls.size() - 1; i++){
        if(ls[i] <= ls[i+1]) continue;
        else {
            int tmp = ls[i+1];
            int j;
            for(j = i; j >= 0 && ls[j] > tmp; j--){
                ls[j+1] = ls[j];
            }
            ls[j+1] = tmp;
        }
    }
     for(int p:ls) cout <<p <<' ';
}

int main() {
    vector <int> ls = {1,7,5,8,9,3,5,2,1};
    InsSor(ls);

    return 0;
}
