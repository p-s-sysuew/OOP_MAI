#include <iostream>
#include <string>
#include <cstdlib>
#include "./include/plant.h"

using namespace std;


int main(int argc, char * argv[]){
    string UpSeed_n;
    int UpSeed;
    while (true)
    {
        cout << "Ведите длину, на которое растение вырастет за день >> ";
        cin >> UpSeed_n;
        if (!check(UpSeed_n)) 
        {
            cout << "Должно быть корректное значение!\n";
            continue;
        }
        UpSeed = stoi(UpSeed_n);
        if (UpSeed < 1)
        {
            cout << "ДДолжно быть корректное значение\n";
            continue;
        }
        break;
    }


    string DownSeed_n;
    int DownSeed;
    while (true)
    {
        cout << "Ведите длину, на которое растение уменьшится за ночь >> ";
        cin >> DownSeed_n;
        if (!check(DownSeed_n)) 
        {
            cout << "Должно быть корректное значение!\n";
            continue;
        }
        DownSeed = stoi(DownSeed_n);
        if (DownSeed < 1)
        {
            cout << "Должно быть корректное значение\n";
            continue;
        }
        break;
    }

    string desiredHight_n;
    int desiredHight;
    while (true)
    {
        cout << "Ведите длину, которую должно достичь значение >> ";
        cin >> desiredHight_n;
        if (!check(desiredHight_n)) 
        {
            cout << "Должно быть корректное значение!\n";
            continue;
        }
        desiredHight = stoi(desiredHight_n);
        if (desiredHight < 1)
        {
            cout << "Должно быть корректное значение\n";
            continue;
        }
        break;
    }

    plant(UpSeed,DownSeed, desiredHight);

    return 0;
}
