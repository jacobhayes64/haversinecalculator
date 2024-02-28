// haversinecalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <string>
#include <future>

int temp2;

int grabinput() {
    std::cin.clear();
    std::cin >> temp2;
    std::cin.clear();
    return temp2;
}


void printmenu() {
    std::cout << "....." << std::endl << "(1) View input(s)\n(2) Add new input\n(3) Delete input\n(4) Clear inputs\n(5) Exit program" << endl << "....." << endl;
    int menuinput = grabinput();
    std::cout << endl;
    switch (menuinput) {
    case 1:
        printarray();
        printmenu();
        break;
    case 2:
    {
        std::future<bool> fut = std::async(grabstring);
        bool ret = fut.get();
        if (ret) {
            printmenu();
        }
        else {
            std::cout << "ERROR NO STRING";
        }
        break;
    }
    case 3:
        deleteinput();
        printmenu();
        break;
    case 4:
        cleararray();
        printmenu();
        break;
    case 5:
        killprogram();
        break;
    default:
        std::cout << "Enter a valid option" << endl;
        printmenu();
        break;
	
}

double getinput() {
	std::cout << "Enter the number;"
	std::getline(std::cin, )
}

long double haversine(double long1, double long2, double lat1, double lat2, long double radius){ 
	long double distance;
	distance = 2 * radius * asin(sqrt(pow(sin, 2))

	return distance;
}

int main()
{
	std::cout << "|Haversine Calculator|" << std::endl;


}
