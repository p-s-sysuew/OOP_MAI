#include <iostream>
#include "./include/plant.h"

using namespace std;


int main(int argc, char * argv[]){
    int UpSeed;
    cout << "Ведите длину, на которое растение вырастет за ночь >> ";
    cin >> UpSeed;
    int DownSeed;
    cout << "Ведите длину, на которое растение уменьшается за ночь >> ";
    cin >> DownSeed;
    int desiredHight;
    cout << "Ведите длину, на которое растение вырастет за ночь >> ";
    cin >> desiredHight;

    plant(UpSeed,DownSeed, desiredHight);

    return 0;
}
