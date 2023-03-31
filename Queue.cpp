#include <bits/stdc++.h>
using namespace std;
#define MAX 100
template <typename _DatType>
class Queue{
private:
    _DatType Data[MAX];
    int nHead, nTail;
public:
    Queue():nHead(0),nTail(0){};

    bool isEmpty(){
        return (nTail - nHead ==0); }
    void Pop(){
        nHead++;
    }
    void Push(_DatType item){
        Data[nTail++] = item;
    }
    _DatType Front(){
        return Data[nHead];
    }
    _DatType Back(){
        return Data[nTail-1];
    }
};
int main() {
    Queue<int> s;
    s.Push(1);
    s.Push(2);
    s.Push(3);
    cout << s.Front();s.Pop(); cout << " " << s.isEmpty()<< endl;
    cout << s.Front();s.Pop(); cout << " " << s.isEmpty()<< endl;
    s.Push(4);
    s.Push(5);
    cout << s.Front();s.Pop(); cout << " " << s.isEmpty()<< endl;
    cout << s.Front();s.Pop(); cout << " " << s.isEmpty()<< endl;
    cout << s.Front();s.Pop(); cout << " " << s.isEmpty()<< endl;

    return 0;
}
