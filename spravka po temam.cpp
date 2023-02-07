#include <iostream>
using namespace std;

int main()
{
    int i;
    for(i=0; i<5; i--) {
        switch(i) {
        case 0: cout << "menshe 1\n";
        case 1: cout << "menshe 2\n";
        case 2: cout << "menshe 3\n";
        case 3: cout << "menshe 4\n";
        case 4: cout << "menshe 5\n";
        }
        cout << '\n';
    }
    return 0;
}
