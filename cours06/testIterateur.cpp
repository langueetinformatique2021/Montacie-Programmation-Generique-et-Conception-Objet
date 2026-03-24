#include <iostream>
#include <list>
#include "../cours04/Date.h"

using namespace std;

typedef list<Date> listDate;
typedef listDate::iterator ilistDate;

int main() {
    listDate L;
    ilistDate it;
    Date today, dfin;

    cin >> today;
    cin >> dfin;

    do {
        L.push_front(today);
        ++today;
    } while (today <= dfin);

    // 1ère version
    for (it = L.begin(); it != L.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // 2ème version
    if (!L.empty()) {
        it = L.end();
        do {
            --it;
            cout << *it << " ";
        } while (it != L.begin());
    }

    return 0;
}
