#include "PortableTechnique.h"
#include "Appliances.h"
#include "Phone.h"
int main()
{
    setlocale(LC_ALL, "rus");
    Itechnique* grocery[5];

    grocery[0] = new Watch(100,2);
    grocery[1] = new Flasglight(50, string("green"));
    grocery[2] = new TV(220, 55);
    grocery[3] = new AirConditioner(220, 1000);
    grocery[4] = new Phone(100, 220);

    bool open = true;
    while (open)
    {
        cout << "¬ыберите технику : 1 - часы, 2 - фонарик, 3 - телевизор, 4 - кондиционер, 5 - телефон, 0 чтобы выйти" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            grocery[0]->Show();
            break;

        case 2:
            grocery[1]->Show();
            break;

        case 3:
            grocery[2]->Show();
            break;

        case 4:
            grocery[3]->Show();
            break;

        case 5:
            grocery[4]->Show();
            break;

        case 0:
            open = false;
            break;

        default:
            cout << "¬ыберите технику от 1 до 5 или 0, чтобы выйти" << endl;
            break;
        }
    }
    delete grocery[0];
    delete grocery[1];
    delete grocery[2];
    delete grocery[3];
    delete grocery[4];

    return 0;
}