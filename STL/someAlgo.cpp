#include <iostream>
using namespace std;

bool comp(pair<int,int>p1, pair<int,int>p2){
    if(p1.second < p2.second)return true;
    if(p1.second > p2.second)return false;

    if(p1.first < p2.first)return true;
    return false;
}
void explainExtra(){
    sort(a,a+n);    //sort in ascending order
    sort(v.begin(), v.end());    //sort in ascending order

   sort(a+2, a+4);   //sort a subarray

   sort(a, a+n, greater<int>());  //sort in descending order

   pair<int,int> a[] = {{1,2},{3,4},{4,1}};

    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending

    sort(a,a+n,comp);  //{{4,1},{4,1},{3,4},{1,2}} 

    int num = 7;
    int cnt = __builtin_popcount();

    long long num = 23434343244324324;
    int cnt= __builtin_popcountll();

    string s = '123';
    sort(s.begin(), s.end());

    do{
        cout<<s<<endl;
        while(next_permutation(s.begin(), s.end()));

        int maxi = *max_element(a,a+n);
}
int main() {
    cout << "CPP Easy Snippet" << endl;
    return 0;
}
