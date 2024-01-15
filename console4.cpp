#include <iostream>
#include <cmath>
using namespace std;

float square(float&x) {
	return pow(x, 2);
}
float rectangle(float&l, float&w) {
	return l * w;
}

float triangle(float& h, float& b) {
	return b * h / 2;
}

float circle(float& radi) {
	return	3.14 * pow(radi, 2);
	
}

int main()
{
	system("Color 01");
	float cont, num1, num2;

	do {
		int ques;
		float area;
		cout
			<< "======================" << endl
			<< "(1) Area of square" << endl
			<< "(2) Area of rectangle" << endl
			<< "(3) Area of triangle" << endl
			<< "(4) Area of circle" << endl
			<< "(5) Exit" << endl
			<< "======================" << endl
			<< endl
			<< endl
			<< "Enter desired operation: ";
		cin >> ques;
		cout
			<< endl;

			
			cout << "Enter side/length/base: "; cin >> num1;
			cout << "Enter width/height (disregard if calculating Square/Circle): "; cin >> num2;
		switch (ques)
		{
		case 1:
		    area = square(num1);
			break;
		case 2:
			area = rectangle(num1, num2);
			break;
		case 3:
			area = triangle(num1, num2);
			break;
		case 4:
			area = circle(num1);
			break;
		case 5:
			cout << "Program closed.";
			exit(0);
		default:
			cout << "Not sure what to do with ur values. \n";
			break;
		}
		cout << "Calculating... "; 
		system("pause");
		
		cout
			<< endl
			<< "Area: " << area
			<< endl;

		
		cout
			<< "One more time?\n"
			<< "(1 or 0)\n";
		cin >> cont;
		system("cls");


	} while (cont == 1);
	return 0;
}


