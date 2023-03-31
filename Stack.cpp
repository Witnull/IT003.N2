#include <bits/stdc++.h>
using namespace std;
#define MAX 100
template <typename _DatType>
class Stack{
private:
    _DatType Data[MAX];
    int nTop;
public:
    Stack():nTop(0){};
    bool isEmpty(){
        return (nTop ==0);
    }
    void Pop(){
        nTop--;
    }
    void Push(_DatType item){
        Data[++nTop] = item;
    }
    _DatType Top(){
        return Data[nTop];
    }
};
int main() {
    Stack<int> s;
    s.Push(1);
    s.Push(2);
    s.Push(3);
    cout << s.Top();s.Pop(); cout << " " << s.isEmpty()<< endl;
    cout << s.Top();s.Pop(); cout << " " << s.isEmpty()<< endl;
    s.Push(4);
    s.Push(5);
    cout << s.Top();s.Pop(); cout << " " << s.isEmpty()<< endl;
    cout << s.Top();s.Pop(); cout << " " << s.isEmpty()<< endl;
    cout << s.Top();s.Pop(); cout << " " << s.isEmpty()<< endl;

    return 0;
}
