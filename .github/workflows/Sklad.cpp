#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>

using namespace std;

const int SIZE = 100;

struct inv_type {
char item[40];
double cost;
double retail;
int on_hand;
int lead_time;

} invtry[SIZE];
void enter(), init_list(), display();
void update(), input(int i);

int menu();

int main()
{
    system("color 0D");
    char choice;
    init_list();
    for(;;) {
        choice = menu();
        switch(choice) {
        case 'e' : enter();
        break;
        case 'd' : display();
        break;
        case 'u' : update();
        break;
        case 'q' : return 0;
        }
    }
}
void init_list()
{
    int t;
    for(t=0; t<SIZE; t++) *invtry[t].item='\0';
}
int menu()
{
    char ch;
    cout << '\n';
    do {
        cout << "(E)nter\n";
        cout << "(D)isplay\n";
        cout << "(U)pdate\n";
        cout << "(Q)uit\n\n";
        cout << "\nViberite komandu:";
        cin >> ch;
    } while(!strchr("eduq", tolower(ch)));
    return tolower(ch);
}
void enter()
{
    int i;

    for(i=0; i<SIZE; i++)
        if(!*invtry[i].item) break;
    if(i==SIZE) {
        cout <<"Spisok polom.\n";
        return;
    }
    input(i);
}
void input(int i)
{
    cout << "\nTovar: ";
    cin >> invtry[i].item;

    cout <<"Stoimost: ";
    cin >> invtry[i].cost;

    cout << "Roznichnaya tsena: ";
    cin >> invtry[i].retail;

    cout <<"V nalichie: ";
    cin >> invtry[i].on_hand;

    cout << "Vremya do popolneniya zapasov(in days): ";
    cin >> invtry[i].lead_time;

}
void update()
{
    int i;
    char name[80];
    cout << "Vedite naimenovanie tovara: ";
    cin >> name;
    for(i=0; i<SIZE; i++)
        if(!strcmp(name, invtry[i].item)) break;

    if(i==SIZE) {
        cout << "Tovar ne nayden.\n";
        return;
    }
    cout << "Vedite novuyu informatsiyu.\n";
    input [i];

}
void display()
{
    int t;
    for(t=0; t<SIZE; t++) {
        if(*invtry[t].item) {
            cout << invtry[t].item <<'\n';
            cout << "Stoimost:$ " << invtry[t].cost;
            cout << "\nV raznitsu:$ ";
            cout << invtry[t].retail << '\n';
        }
    }
}


