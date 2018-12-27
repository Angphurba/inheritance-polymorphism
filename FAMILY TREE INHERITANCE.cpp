// ConsoleApplication54.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// Base Class
class grandparent {
public:
	void setFamily(int a)
	{
		family = a;
	}

protected:
	int family;
};

//Derived class
class parents : public grandparent {
public:
	int getParent() {
		return (family + family);
	}

};

int main(void)
{
	parents Par;

	int parent;
	int child;
	int gchild;


	int num;
	cout << "Enter a number:" << endl;
	cin >> num;


	Par.setFamily(num);

	parent = Par.getParent();
	child = parent + parent;
	gchild = child + child;


	cout << "Grandparent = " << num << endl;
	cout << "Parent = " << parent << endl;
	cout << "Child = " << child << endl;
	cout << "Grandchild = " << gchild << endl;


	system("pause");
	return 0;
}


