// ch2distancePerTankOfGas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Ch 2 Distance by Kevin Bell\n\n";
    auto townDriving = 0.0, highwayDriving = 0.0, tankSize = 10.0, cityMPG = 23.4, highwayMPG = 28.8;
    townDriving = tankSize * cityMPG;
    highwayDriving = tankSize * highwayMPG;
    cout << "Town driving: " << townDriving << endl;
    cout << "Highway driving: " << highwayDriving << endl;
    //Keep window open til done
    system("pause");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
