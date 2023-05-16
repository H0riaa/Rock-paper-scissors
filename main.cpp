#include <iostream>
#include <time.h>
using namespace std;

#define ROCK 1
#define PAPER 2
#define SCISSORS 3
int main()
{
    int user;
    int cpu;
    srand(time(NULL));

    cout << "Rock = 1\n";
    cout << "Paper = 2\n";
    cout << "Scissors = 3\n";
    cin >> user;
    cpu = (rand() % 3 + 1);

    if(user == cpu)
    {
        if(user == ROCK)
        {
            cout << "You both chose rock.\n";
        }
        else if(user == PAPER)
        {
            cout << "You both chose paper.\n";
        }
        else
        {
            cout << "You both chose scissors.\n";
        }
        
        cout << "It's a draw!!\n";
    }
    else if(user == 1 && cpu == 3)
    {
        cout << "You chose rock,\n";
        cout << "CPU chose scissors\n";
        cout << "You won!!!\n";
    }
    else if(user == 2 && cpu == 1)
    {
        cout << "You chose paper,\n";
        cout << "CPU chose rock\n";
        cout << "You won!!!\n";
    }
    else if(user == 3 && cpu == 2)
    {
        cout << "You chose scissors,\n";
        cout << "CPU chose paper\n";
        cout << "You won!!!\n";
    }
    else if(user == 1 && cpu == 2)
    {
        cout << "You chose rock,\n";
        cout << "CPU chose paper\n";
        cout << "CPU won!!!\n";
    }
    else if(user == 2 && cpu == 3)
    {
        cout << "You chose paper,\n";
        cout << "CPU chose scissors\n";
        cout << "CPU won!!!\n";
    }
    else if(user == 3 && cpu == 1)
    {
        cout << "You chose scissors,\n";
        cout << "CPU chose rock\n";
        cout << "CPU won!!!\n";  
    }

}

