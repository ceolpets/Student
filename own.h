class Student
{
	int no;												//ѧ����ѧ��
	string name;										//ѧ��������
	float score;										//ѧ���ĳɼ�
	Student* per;										//��ǰ���ָ��
	Student* next;										//��һ�����ָ��
public:
	Student();											//���캯��
	Student *find(int i_no);							//�����ƶ�ѧ�ŵ�ѧ��
	void edit(string i_newname, float i_score);			//�޸�ѧ������Ϣ
	void erase();										//ɾ���ƶ�ѧ�ŵ�ѧ��
	int add(Student* i_newStudent);						//����ѧ��
	int getno();										//���ѧ����ѧ��
	string getname();									//���ѧ��������
	float getscore();									//���ѧ���ĳɼ�
	static int maxno;									//��ǰ���ѧ��
};

