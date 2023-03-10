#include "Critter.h"
#include <iostream>

using namespace std;

int main()
{
    Critter crit1("Fluffy");
    Critter crit2("Spike");

    crit1.talk();
    crit2.talk();

    int choice = 1;

    while (choice != 0)
    {
        cout << "\nQuè vols fer amb les criatures virtuals?" << endl;
        cout << "0 - Sortir\n1 - Parlar amb la criatura 1\n2 - Parlar amb la criatura 2\n3 - Alimentar la criatura 1\n4 - Alimentar la criatura 2\n5 - Jugar amb la criatura 1\n6 - Jugar amb la criatura 2\n";
        cout << R"(
         .^._.^.         .^._.^.
         | . . |         | . . |
        (  ---  )       (  ---  )
        .'     '.       .'     '.
        |/     \|       |/     \|
         \ /-\ /         \ /-\ /
          V   V           v   V
 criatura:  1               2
)" << endl;


           
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Adeu!\n";
            break;
        case 1:
            crit1.talk();
            break;
        case 2:
            crit2.talk();
            break;
        case 3:
            int food1;
            cout << "Quants menjar vols donar a la criatura 1? (1-10)" << endl;
            cin >> food1;
            crit1.eat(food1);
            break;
        case 4:
            int food2;
            cout << "Quants menjar vols donar a la criatura 2? (1-10)" << endl;
            cin >> food2;
            crit2.eat(food2);
            break;
        case 5:
            int fun1;
            cout << "Durant quant temps vols jugar amb la criatura 1? (1-10)" << endl;
            cin >> fun1;
            crit1.play(fun1);
            break;
        case 6:
            int fun2;
            cout << "Durant quant temps vols jugar amb la criatura 2? (1-10)" << endl;
            cin >> fun2;
            crit2.play(fun2);
            break;
        default:
            cout << "Ho sento, no entenc la teva elecció.\n";
        }
    }

    return 0;
}
