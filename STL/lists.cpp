#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void itsList()
{
    list<int> ls;
    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5);   //{5,2,4}
    ls.emplace_front(); //{2,4}
}

void itsDeque()
{
    deque<int> dq;
    // pretty much same as list
}

int main()
{
    itsList();
    return 0;
}