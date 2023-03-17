#include <bits/stdc++.h>
using namespace std;

void Nhap( vector<int> &ls){
    int inpt;
   do{
       cin >> inpt;
       if(inpt < 0) break;
       ls.push_back(inpt);
   }while (true);
}
void Max_5(vector<int> ls){
    sort(ls.begin(), ls.end(), greater<>());
    for(int i = 0 ; i < 5; i++){
        cout<< ls[i] <<' ';
    }
    cout <<endl;
}

void Xuat(vector<int> ls){
    cout <<endl;
    for(int p:ls) cout << p <<' ';
}

int main() {
    int k;
    vector <int> ls;
    cin >> k;
    Nhap(ls);
    vector<int>::iterator it;
    it = find(ls.begin(),ls.end(),k);
    Max_5(ls);
    cout << *it << endl;
    Xuat(ls);
    return 0;
}
