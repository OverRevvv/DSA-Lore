#include <iostream>
#include <map>

using namespace std;

void explainMap(){
    //* Map stores unqiue keys in sorted order
    map<int, int> mpp;  // key, value

    map<int, pair<int,int>> mpp;    // key, pair of value

    map< pair<int, int>, int> mpp;  // pair of key, value

    mpp[1]=2;    // 1 is key and 2 is value
    mpp.emplace({3,1});     // 3 is key and 1 is value
    mpp.insert({2,4});     // 2 is key and 4 is value

    mpp[{2,3}] = 10;     // 2 is key and 3 is key and 10 is value

    //mpp = [{1,2},{2,4},{3,1} ]

    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1];
    cout<<mpp[5];

    auto it = mpp.find(3);
    cout<<*(it).second;

    auto it= mpp.lower_bound(2);
    auto it= mpp.upper_bound(3);

}

void explainMultiMap(){
    //everything is same as map, only it can store multiple keys
    // only mpp[key] cannot be used here
}

void unorderedMap(){
    //same as set and unordered set difference.
}
int main() {
    cout << "CPP Easy Snippet" << endl;
    return 0;
}
