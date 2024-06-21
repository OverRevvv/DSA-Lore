#include <iostream>
#include <vector>
using namespace std;

//* vectors are dynamic in nature that can be always modified unlike the array
//* Vector basically Array but Dynamic one.
void its_vector()
{
    //* Creating empty container
    vector<int> v;

    //* push the value into the empty container
    v.push_back(1);
    //* similar to push back basically it dynamically increases the size of the container and insert the value in the back.
    v.emplace_back(2);

    //? Defining a vector of pairs
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(9, 8); //* automatically assumes the inputs as pair

    vector<int> v5(5, 100);
    vector<int> v1(5, 20);
    vector<int> v2(v1);

    //? Access the vectors

    for (int i = 0; i < v5.size(); i++)
    {
        // cout << v5.at(i) << " ";
        //* or
        cout << v5[i] << " ";
    }
    cout << endl;
    //? Iterators

    vector<int>::iterator it = v5.begin(); //* Iterators points to the memory address
    cout << *(it) << " ";
    cout << endl;
    //* Since all the vectors or arrays are in contained in  contagious memory addresses we can add increment iterators and access the value of vectors by doing so.

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        // cout << *(it) << " ";
    }
    cout << endl;

    for (auto it = v2.begin(); it != v2.end(); it++)
    {
        // cout << *(it) << " ";
    }
    //* easiest method
    for (auto it : v)
    {
        cout << it << " ";
    }

    //* other iterators
    v.end(); //* basically points to the next of the last element in memory address
    v.rend(); //* reverse iterator in opposite direction of the general allocation of memory
    v.rbegin(); //* reverse iterator in opposite direction of general allocation of memory

    v.back(); //* basically gets the last element of the vector

    //? Deletion of Vector
    v.erase(v.begin() + 1);               //* Takes address of value as argument
    v.erase(v.begin() + 2, v.begin() + 4); //* starting point and ending point for deletion to take place

    //? Insertion
    vector<int> vv(2,100); //{100,100}
    vv.insert(vv.begin(), 300); //{300,100,100}
    vv.insert(vv.begin()+1,2,10);//{300,10,10,100,100}

    vector<int> copy(2,50);
    v.insert(v.begin(), copy.begin(), copy.end());//{50,50,300,10,10,100,100}

    cout<<v.size();

    v.pop_back() ;//* pops the last element
    // v1.swap(v2); //* swaps the element

    v.clear();//* clear the vector

}

int main()
{
    its_vector();
    return 0;
}