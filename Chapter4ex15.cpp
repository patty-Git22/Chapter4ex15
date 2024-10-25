/*
Ttile: Chapter 4 exercise 15 - Shipping Charges
File Name: Chapter4ex15.cpp
Programmer: Patrick Maloon
Date: 10/24/24

Requirements:
Write a program that asks for the weight of the package and the distance it is to be shipped, then displays the charges.

*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int WEIGHT_MIN = 0,
        WEIGHT_MAX = 20,
        DISTANCE_MIN = 10,
        DISTANCE_MAX = 3000;

    float package_weight,
        distance,
        total_charges;

    cout << "What is the weight in kg of the package? ";
    cin >> package_weight;

    if (package_weight <= WEIGHT_MIN ||
        package_weight > WEIGHT_MAX)
    {
        cout << "\nWe're sorry, package weight must weight more than 0kg and less than 20kg." << endl;
        cout << "Rerun the program and try again." << endl;

    }
    else
    {
        cout << "What is the distance? ";
        cin >> distance;


        if (distance < DISTANCE_MIN ||
            distance > DISTANCE_MAX)
        {
            cout << "\nWe're sorry, the distance must be between 10 and 3,000 miles." << endl;
            cout << "Rerun the program and try again."<<endl;
        }
        else
        {
            if (package_weight <= 2)
                total_charges = (distance / 500) * 1.10;
            else if (package_weight > 2 &&
                package_weight <= 6)
                total_charges = (distance / 500) * 2.20;
            else if (package_weight > 6 &&
                package_weight <= 10)
                total_charges = (distance / 500) * 3.70;
            else if (package_weight > 10 &&
                package_weight <= 20)
                total_charges = (distance / 500) * 4.80;

            cout << setprecision(2) << fixed
                << "\nTotal charges are $" << total_charges
                << "\nFor a distance of " << distance << "miles"
                << "\nand a total weight of " << package_weight << "kg.\n"
                << endl;
        }

    }

    return 0;
}