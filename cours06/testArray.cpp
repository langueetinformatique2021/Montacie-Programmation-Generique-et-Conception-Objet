#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 8> vi = {10, 15, 23, 67, 43, 98, 34, 77};

    cout << vi.size() << endl;

    for (int i = 0; i < vi.size(); i++)
        cout << vi[i] << " ";
}
