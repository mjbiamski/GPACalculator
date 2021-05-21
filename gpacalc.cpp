#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
	double sum = 0;
	double count = 0;
	double gpa;
	while(true)
	{
		cout << "Enter a grade: ";
		string x;
		getline(cin,x);
		if (x == "") break;
		char sx = x[0];
		if(sx == 'A' || 'B' || 'C' || 'D' || 'F')
			switch(sx)
			{
				case 'A':
				sx = '4';
				break;
				case 'B':
				sx = '3';
				break;
				case 'C':
				sx = '2';
				break;
				case 'D':
				sx = '1';
				break;
				case 'F':
				sx = '0';
				break;
			}	
		stringstream ss;  // declare the stringstream
		ss << sx;        // put the string into the stringstream
		double g;    
		ss >> g;         // We can now do arithmetic with g
		sum += g;
		count += 1;
	}
	gpa = sum/count;
	cout <<"GPA: " << setprecision(3) << gpa << endl;
	return 0;
}	
