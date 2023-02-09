#include <iostream> 
#include <cstdlib>
#include <conio.h>
using namespace std;

char* fortunes[] = {

	"Siz pul topib olasiz.\n",

	"Bugun sizni kaltaklashadi.\n",

	"Uzoq va baxtli hayot kechirasiz.\n",

	"Kochada ketayotganda qoqilib tushasiz.\n",

	"Qush qo'lingizga ishini qilib qo'yadi.\n",

	"Dostingiz bilan uchrashasiz.\n",

	"Ertangi kun siz uchun ajoyub kun bo'ladi.\n",
};
int main()
{
	int chance;
	cout << "Fol ochib berishim uchun 1 dan 7 gacha hohlagan soningizni bosing: ";
	while (!kbhit()) rand();
	cout << '\n';
	chance = rand();
	chance = chance % 7;

	cin >> chance;
	cout << fortunes[chance];
	return 0;
}