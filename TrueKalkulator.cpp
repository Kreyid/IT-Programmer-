#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
char *fortunes[] ={
"Tez kunda ikki olasiz.\n",
"Yaqinda adangizdan kaltak yeysiz.\n",
"Yaqinda bomjlar aynan sizning pulingizni sorab sizni pulsiz qoldirib qo'yadi.\n",
"Ertaga ustingizga qushcha o'z ishini qib qo'yadi.\n",
"Ehtiyot bo'lmang baribir bugun boshingizga yog'och tushib ketadi.\n",
"Yaqinda telefo'ningiz sinadi.\n",
"Siz 500000 ming so'm yutib olib uyga kelayotganda yo'qotib qo'yasiz.\n",
"Sizning akkauntingizni buzib olishadi.\n",
};
int main()
{
    int chance;
    cout << "Kelajakingizni bilish uchun 1 dan 7 gacha bitta sondi bosing:";
    while(!kbhit()) rand();
    cout << '\n';
    chance = rand();
    chance = chance %5;
    cin >> chance;
    cout << fortunes[chance];
    return 0;
}


