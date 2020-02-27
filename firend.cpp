#include <iostream>
#include "own.h"
#include<stdio.h>

using namespace std;
Point::Point(int x, int y)
{
	X = x;
	Y = y;
}

void Point::displayxy(Point p)
{
	cout << "(" << p.X << "," << p.Y << ")" << endl;
}

int main()
{
	Point A(4, 5);											//第一个对象
	cout << "第一个点的位置是：";
	Point::displayxy(A);
	Point B(7, 8);											//第二个对象
	cout << "第二个点的位置是：";
	Point::displayxy(B);
	return 0;
}