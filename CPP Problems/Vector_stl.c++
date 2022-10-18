// Vector In C++ STL
#include <iostream>
#include <vector>
using namespace std;
template<class T>
void display(vector<T> &v)
{
    cout << "your vector is:"<< "  ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
}
int main()
{
    // ways to create vector
    vector<int>vec1;          // zero length integer vector
    // display(vec1);
    vector<char>vec2(4);      // 4-element character vector
    vec2.push_back('b');
    // display(vec2);
    vector<char>vec3(vec2);   // 4-element character vector from vec2
    // display(vec3);
    vector<int>v(6,40);        // 6-element vector of 3s
    display(v);
    cout<<v.size();
    
    


    // vector<int> vec1;
    // int size, element;
    // cout << "Enter size of vector" << endl;
    // cin >> size;
    // cout << "Enter element of vector" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();

    // to insert an element make iterator & begin() used to point at first element
    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter + 1, 2, 5);
    // SYNTAX->  vec.insert(pointer,kitne copy chahiye,what to insert)

    // display(vec1);
    return 0;
}