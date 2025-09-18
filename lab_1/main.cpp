#include <iostream>
#include <string>
#include <cstdlib>
#include "./include/plant.h"

using namespace std;


int main(int argc, char * argv[]){
    string UpSeed_n;
    int UpSeed;
    cout << "Ведите длину, на которое растение вырастет за день >> ";
    cin >> UpSeed_n;
    while (!check(UpSeed_n)) 
    {
        cout << "Ведите корректное значение >> ";
        cin >> UpSeed_n;
    }
    UpSeed = stoi(UpSeed_n);


    string DownSeed_n;
    int DownSeed;
    cout << "Ведите длину, на которое растение уменьшается за ночь >> ";
    cin >> DownSeed_n;
    while (!check(DownSeed_n)) 
    {
        cout << "Ведите корректное значение >> ";
        cin >> DownSeed_n;
    }
    DownSeed = stoi(DownSeed_n);

    string desiredHight_n;
    int desiredHight;
    cout << "Введите окончательную высоту растения >> ";
    cin >> desiredHight_n;
    while (!check(desiredHight_n)) 
    {
        cout << "Ведите корректное значение >> ";
        cin >> desiredHight_n;
    }
    desiredHight = stoi(desiredHight_n);

    plant(UpSeed,DownSeed, desiredHight);

    return 0;
}
