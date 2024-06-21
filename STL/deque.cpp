#include <iostream>
#include <vector>
#include <deque>
using namespace std;

void explainDeque()
{
    deque<int>dq;

    dq.push_back(1);

    dq.push_front(2);

    dq.pop_back();

    dq.pop_front();

    dq.front();

    dq.back();

    dq.size();
}
int main()
{

    return 0;
}