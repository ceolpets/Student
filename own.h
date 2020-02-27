class Student
{
	int no;												//学生的学号
	string name;										//学生的姓名
	float score;										//学生的成绩
	Student* per;										//当前结点指针
	Student* next;										//下一个结点指针
public:
	Student();											//构造函数
	Student *find(int i_no);							//查找制定学号的学生
	void edit(string i_newname, float i_score);			//修改学生的信息
	void erase();										//删除制定学号的学生
	int add(Student* i_newStudent);						//增加学生
	int getno();										//获得学生的学号
	string getname();									//获得学生的姓名
	float getscore();									//获得学生的成绩
	static int maxno;									//当前最大学号
};

