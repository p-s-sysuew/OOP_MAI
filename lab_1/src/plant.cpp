#include "../include/plant.h"
#include <iostream>
using namespace std;

int plant(int UpSeed,int DownSeed, int desiredHight)
{
    int day;
    int desiredHight_n = 0;
    for (day = 1; desiredHight_n < desiredHight; day++)
    {
        desiredHight_n += UpSeed;
        cout << "После дня " << day << " --> " << desiredHight_n << endl;
        if (desiredHight_n >= desiredHight) break;
        desiredHight_n -= DownSeed;
        cout << "После ночи " << day << " --> " << desiredHight_n << endl;
        
    } 
    return day;
}