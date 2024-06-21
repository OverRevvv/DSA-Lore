#include <iostream>
#include <set>
using namespace std;

void explainSet(){
    //* Sorted and Unique
    set<int> st;
    st.insert(1);     // 1
    st.insert(2);     // 1, 2
    st.insert(3);     // 1, 2, 3
    st.insert(4);     // 1, 2, 3, 4
    st.insert(5);     // 1, 2, 3, 4, 5

    //Funtionality of insert in vector 
    // can be used also, that only increase
    //efficiency

    // begin(), end(), rebegin(), rend(),size(), empty() and swap() 

    // {1,2,3,4,5}
    auto it = st.find(3);

    // {1,2,3,4,5}
    auto it = st.find(6);

    // {1,4,5}
    st.erase(5); //erase 5 | takes logorathimic time
    
    int cnt = st.count(1); //1

    auto it = st.find(3);
    st.erase(it); //erase 3

    // {1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // {1,3,5}

    //lower_bound() and upper_bound() function works in the same way 

    //this is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

}
int main() {
    cout << "CPP Easy Snippet" << endl;
    return 0;
}
