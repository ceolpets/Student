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
	Point A(4, 5);											//��һ������
	cout << "��һ�����λ���ǣ�";
	Point::displayxy(A);
	Point B(7, 8);											//�ڶ�������
	cout << "�ڶ������λ���ǣ�";
	Point::displayxy(B);
	return 0;
}