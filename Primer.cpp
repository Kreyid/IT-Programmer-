#include <iostream>
#include <cstring>
using namespace std;

void drill();
int count;
int num_right;
int main()
{
    cout << "Nechta mashq beray?: ";
    cin >> count;
    num_right = 0;
    do {
        drill(); count--;
    } while (count);
    cout << "Siz  " << num_right << "ta Mashqlarga javob berdingiz\n";
    return 0;
}
void drill()
{
    int count;
    int a, b, ans;
    a = rand() % 100;
    b = rand() % 100;
    for (count = 0; count < 2; count++) {
        cout << "Shu sonlarni qo'shsak nechi bo'ladi?" << a << " + " << b << " ? ";
        cin >> ans;
        if (ans == a + b) {
            cout << "Malades san matematiksan\n";
            num_right++;
            return;
        }
    }
    cout << "Uzur oshna urunishlarin qolmadi.\n";
    cout << "Javobi " << a + b << '\n';
}
