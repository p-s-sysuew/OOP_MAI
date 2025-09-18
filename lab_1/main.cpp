#include <iostream>
using namespace std;

int main(int argc, char * argv[]){
    int UpSeed;
    cin >> UpSeed;
    int DownSeed;
    cin >> DownSeed;
    int desiredHight;
    cin >> desiredHight;
    int desiredHight_n = 0;
    for (int day = 1; desiredHight_n < desiredHight; day++)
    {
        desiredHight_n += UpSeed;
        cout << "После дня " << day << " --> " << desiredHight_n << endl;
        if (desiredHight_n >= desiredHight) break;
        desiredHight_n -= DownSeed;
        cout << "После ночи " << day << " --> " << desiredHight_n << endl;
    } 

    return 0;
}
