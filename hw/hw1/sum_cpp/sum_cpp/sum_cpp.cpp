//
// Convert this program to C++
// change to C++ io
// change to one line comments
// change defines of constants to const
// change array to vector<>
// inline any short function
//

#include <iostream>
#include <vector>

using namespace std;

template <class T>
inline void sum(int &p, const T &data)
{
    unsigned int i;
    p = 0;

    // Should really use iterators here
    //for (vector<T>::iterator it = data.begin(); it != data.end(); ++it)
    //    p += *it;

    for (i = 0; i < data.size(); ++i)
        p = p + data[i];
}

int main()
{
    const int N = 40;
    int accum = 0;
    vector<int> data;

    for (int i = 0; i < N; ++i)
        data.push_back(i);

    sum(accum, data);

    cout << "The sum is " << accum << endl;

    return 0;

}