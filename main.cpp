#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int user;
    int cpu;
    srand(time(NULL));

    cout << "Piatra = 1\n";
    cout << "Hartie = 2\n";
    cout << "Foarfeca = 3\n";
    cin >> user;
    cpu = (rand() % 3 + 1);

    if(user == 1 && cpu == 1)
    {
        cout << "Amandoi ati ales piatra.\n";
        cout << "Este egalitate!!\n";
    }
    else if(user == 2 && cpu == 2)
    {
        cout << "Amandoi ati ales hartie.\n";
        cout << "Este egalitate!!\n";
    }
    else if(user == 3 && cpu == 3)
    {
        cout << "Amandoi ati ales foarfeca.\n";
        cout << "Este Egalitate";
    }
    else if(user == 1 && cpu == 3)
    {
        cout << "Ai ales piatra,\n";
        cout << "CPU a ales foarfeca\n";
        cout << "Ai castigat!!!\n";
    }
    else if(user == 2 && cpu == 1)
    {
        cout << "Ai ales hartie,\n";
        cout << "CPU a ales foarfeca\n";
        cout << "Ai castigat!!!\n";
    }
    else if(user == 3 && cpu == 2)
    {
        cout << "Ai ales foarfeca,\n";
        cout << "CPU a ales hartie\n";
        cout << "Ai castigat!!!\n";
    }
    else if(user == 1 && cpu == 2)
    {
        cout << "Ai ales piatra,\n";
        cout << "CPU a ales hartie\n";
        cout << "CPU a castigat!!!\n";
    }
    else if(user == 2 && cpu == 3)
    {
        cout << "Ai ales hartie,\n";
        cout << "CPU a ales foarfeca\n";
        cout << "CPU a castigat!!!\n";
    }
    else if(user == 3 && cpu == 1)
    {
        cout << "Ai ales foarfeca,\n";
        cout << "CPU a ales piatra\n";
        cout << "CPU a castigat!!!\n";  
    }

}

