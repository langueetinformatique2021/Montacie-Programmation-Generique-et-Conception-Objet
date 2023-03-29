#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> v1 {1, 2, 3, 4};
    vector<int> v2 {3, 4, 5, 6};
    vector<int> v_union(v1.size() + v2.size());

    auto it = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v_union.begin());

    v_union.resize(it - v_union.begin());

    cout << "Union de v1 et v2 : ";
    for (int x : v_union) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
