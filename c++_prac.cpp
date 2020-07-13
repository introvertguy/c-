#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include "functions.h"
#include "Rectangle.h"
using namespace std;

//main function

int main()
{
	/*
	std::cout << "HELLO!"<< std::endl << 2 + 1.38437<<endl;

	cout << "HELLO!" <<endl << 2 + 1.38437<<endl;

	int i = 788.1;
	auto j = (7/2);

	//auto datatype is similar to logic datatype from SV
	cout << i << endl;
	cout << j << endl;
	*/

	//FLOW CONTROL
	/* basically looping methods[for,while,do_while] and if else statements */

	/*
	int i;double j;

	cout << "Enter two numbers" << endl;

	cin >> i;
	cout << "First number is " << i << ". Enter another number" << endl;
	cin >> j;

	if (i > j)
	{
		cout << "First number is greater than second number" << endl;
	}

	else if (i == j)
	{
		cout << "First number is equal to second number" << endl;
	}
	else
		cout << "Second number is greater than the first one" << endl;

	for (int a = 0;a < 10;a++) {

		cout << "Numbers compared sucessfully" << endl;
	}
	*/

	/*		GUESS MY NUMBER GAME
   int i, j;
   i = 1998;

   cout << "Guess my number " << endl;
   cin >> j;
   cout << "You entered " << j << endl;

   if (j == i)
	   cout << "You guessed it Muthafuka!" << endl;
   else if (i < j)
	   cout << "Your guess is too high" << endl;

   else if (i > j)
	   cout << "You are falling short" << endl;
   */

	/*
	auto a = add(6, 1);
	auto b = add(6, 1, 4);
	cout << "Summation of 6.1 and 1 is " << a << endl;

	cout << "Summation of 6, 1 and 1 is " << b << endl;
	
	*/

	//*************STRING

	
	string name;

	cout<<"Who the fuck are you?" << endl;
	cin >> name;
	string output="I know you " + name;

	if (name == "sharayesh" || name == "varun" || name == "suyash")
	{
		output +=". Welcome back boi";
		cout <<output << endl;
	}
	else
		cout << "Wrong hood boi" << endl;
	
	cout << output.length();
	cout << output.find(' ');
	
	
/*
	string name1, name2;

	cout << "Enter two animal names" << endl;
	cin >> name1;
	cin >> name2;

	cout << "Alright so.. " << endl;
	if (name1.length() != name2.length())
	{
		cout << "The two given names are not equal" << endl;
		if (name1.length() < name2.length()) {
			cout << "First animal name is smaller than the other one." << endl;
		}
		else
			cout << "First animal name is bigger than the other one."<< endl;
	}
	else 
		cout << "Both the animal names are equal in length." << endl;
		 
*/


/*

//VECTOR is a template class similar to queues, MAYBE WITHA GRAIN OF SALT
//syntax for Vector---->  vector<data_type> vector_name;

vector<int>vi;
for (int i = 0;i < 10;i++) {
	vi.push_back(i);
}
vi[1] = 99;
for (auto item : vi)  //RANGED FOR LOOP, similar to FOREACH OF SV

//for(unsigned int i=0;i<vi.size();i++)
//for (auto i = begin(vi); i != end(vi);i++)
//BOTH THE FOR LOOPS ABOVE FUNCTION THE SAME AS THE RANGED FOR LOOP.

{
	cout << item << endl;

}
cout << "int vi vector has " << vi.size()<<" elements in it."<<endl;


*/


//Structures
/*
struct coffeeBean {
	string name;
	string origin;
	int strength;
};

coffeeBean bean = { "strata", "Columbia", 10 };
coffeeBean newbean;
newbean.name = "Flora";
newbean.origin = "Mexico";
newbean.strength = 8;

cout << "Coffee bean " + newbean.name + " is from " + newbean.origin << endl;

cout << "The new coffee bean name is " + newbean.name + "from the country " + newbean.origin + " of the strength "  <<newbean.strength<< endl;

//ENUM data type

enum DAY{Sunday =1 , Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

DAY payday;
payday = Monday;
cout << payday << endl;
*/

/*
char response = 'N';

switch (response)
{
case 'y':
	cout << "You chose y" << endl;
	break;
case 'Y':
	cout << "You chose Y" << endl;
	break;
case 'n':
	cout << "You chose n" << endl;
	break;
case 'N':
	cout << "You chose N" << endl;
	break;
}
*/
//----------------CLASSES IN C++

/*

Rectangle value_01{};
Rectangle uninitialised;
Rectangle value_02{ 4,7 };
int area_value_01{ value_01.get_area() };
int area_value_02{ value_02.get_area() };

cout << "Area of 1st Rectangle is " << area_value_01 << endl;
cout << "Area of 2nd Rectangle is " << area_value_02 << endl;
*/	
/*
int32_t nums[3] = { 2,4,3 };
cout << (nums[0] << nums[1] << nums[2]);

*/
	return 0;
}






