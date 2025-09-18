#include "../include/plant.h"
#include <iostream>
#include <string>
#include <cctype>
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

bool check(const std::string & input) {
    for (int i = 0; i < input.length(); i++) {
        if (!isdigit(input[i]))
            return false;
    }
    return true;
}