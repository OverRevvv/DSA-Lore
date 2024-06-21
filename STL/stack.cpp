#include <iostream>
#include <stack>
using namespace std;

//* LIFO
void explainStack(){

    stack<int> s;
    s.push(1);      // 1
    s.push(2);      // 1
    s.push(3);      // 1
    s.pop();    // 1 2
    s.top();    // 2
}
int main() {
    return 0;
}
