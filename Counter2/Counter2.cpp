// Counter2.cpp : Defines the entry point for the console application.
//
// Increment Counter variable with ++ operator, with return value
#include <iostream>

class Counter
{
private:
	unsigned int count; // count
public:
	Counter(): count{0} // constructor
	{}
	unsigned int getCounter() //return count
	{
		return count;
	}
	Counter operator ++ () // increment count
	{
		++count; // increment count
		Counter temp; // make temprorary Counter
		temp.count = count; // give it same value as this object
		return temp;
	}

};


int main()
{
	Counter c1, c2; //c1 = 0, c2 = 0

	std::cout << "\nc1= " << c1.getCounter();  // display 
	std::cout << "\nc2= " << c2.getCounter();  // display

	++c1; // c1 = 1;
	c2 = ++c1; // c1 = 2, c2 = 2

	std::cout << "\nc1= " << c1.getCounter();  // display 
	std::cout << "\nc2= " << c2.getCounter() << std::endl;  // display



	system("pause");
    return 0;
}

