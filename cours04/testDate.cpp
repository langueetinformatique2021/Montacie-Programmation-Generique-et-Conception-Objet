#include "Date.h"
#include <iostream>
using namespace std;

int main() {
    Date d(28, 2, 2024); // année bissextile

    ++d;
    cout << d << endl; // 29/2/2024

    ++d;
    cout << d << endl; // 1/3/2024

    return 0;
}
