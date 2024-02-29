// haversinecalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <string>
#include <future>
#include <vector>
#include <array>
std::array<double long,5> temparray;
int temp2;
double temp3;
std::vector<std::array<double long, 5>> inputs;
void printvector(std::vector<std::array<double long, 5>> input) {
    std::cout << "Vector" << std::endl;
    std::cout << "Longitude 1 (Lo1)|Longitude 2 (Lo2)|Latitude 1 (La1)|Latitude 2 (La2)|Planetary Radius (r)" << std::endl;
    for (int i = 0; i <= input.size(); i++) {
        for (int j = 0; j <= input[i].size(); j++) {
            std::cout << input[i][j];
            std::cout << input[i][i];

        }
    }
}
int grabinput() {
    std::cin.clear();
    std::cin >> temp2;
    std::cin.clear();
    return temp2;
}




void printmenu() {
    std::cout << "....." << std::endl << "(1) View input(s)\n(2) Add new input\n(3) Calculate\n(4) Clear inputs\n(5) Exit program" << endl << "....." << endl;
    int menuinput = grabinput();
    std::cout << endl;
    switch (menuinput) {
    case 1:
        printvector();
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
