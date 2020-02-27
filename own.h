class Point
{
public:
	Point(int = 0, int = 0);
	static void displayxy(Point p);				//若不给参数，程序区别不出来是哪个对象的非静态成员
private:
	int X, Y;
};

