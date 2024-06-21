#include <iostream>
#include <queue>
using namespace std;
//* FIFO
void explainQueue(){
    queue<int> q;
    q.push(1);    // 1
    q.push(2);    // 1 2
    q.push(3);    // 1 2 3
    q.pop();      // 2 3
    q.front();    // 2
    q.back();     // 3
}
int main() {
    return 0;
}
