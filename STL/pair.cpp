#include <iostream>
using namespace std;

void thisIsPair() {
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> p2 = {3, {9, 3}};
    cout << p2.first << " : " << p2.second.first << " " << p2.second.second << endl;

    //* whole array will have pairs 
    pair<int, int> arr[] = {{3, 8}, {2, 6}, {5, 7}};
    cout << arr[2].second;
}

int main() {
    thisIsPair();
    return 0;
}