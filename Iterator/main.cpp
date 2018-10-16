#include <iostream>
#include "Array.h"
#include "ArrayIterator.h"

using namespace std;

int main(int argc, char* argv[])
{
    Array<int, 10> arr{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    auto it = arr.newIterator();

    cout << "start element: " << it->start() << endl;
    cout << "=========begin iteration===========" << endl;

    for (; !it->done(); it->next()) {
        cout << it->current() << " ";
    }

    cout << endl;

    return 0;
}
