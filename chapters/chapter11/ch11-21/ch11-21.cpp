//Introductory21.cpp - Displays the average stock price
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double prices[10] = { 96.5, 100.5, 100.5, 100.5, 99, 99, 99, 100, 98.5, 98.9 };
	double total = 0.0;
	double average = 0.0;
	double totalPrice = 0.0;

	for (int i = 0; i < 10; i++) {
		totalPrice += prices[i];
	}

	average = totalPrice / 10;



	cout << fixed << setprecision(2);
	cout << "Total of all Prices : $" << totalPrice << endl;
	cout << "Average stock price: $" << average << endl;
	return 0;
}	//end of main function

