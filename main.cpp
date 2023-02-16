////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////

#include <iostream> 
#include <list>
#include <algorithm>

using namespace std;

void printa(list<int> a) {
    for (auto it = a.begin(); it != a.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}
int main() {
    setlocale(LC_ALL, "Russian");
    list <int> a(10, 2) ;
    a.push_back(8);
    a.push_front(1);
    auto it = a.begin();
    for (int i = 0; i < 4; i++)
    {
        it++;
    }
    a.insert(it, 5);
        for (int i = 0; i < 4; i++)
        {
            it++;
        }

    a.insert (it, 3, 3);
    a.sort();
    printa(a);
    a.unique();
    printa(a);
    cout << a.back() << endl;
    system ("pause");
}
 



