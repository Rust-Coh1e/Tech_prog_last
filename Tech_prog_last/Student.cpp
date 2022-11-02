#include "lib.h"

using namespace std;

Student::Student()
{
	//cout << "Constructor Student ws called" << endl;
}

Student::Student(string new_name)
{
	name = new_name;
	ball = nullptr;
	size = 0;
	//cout << "Constructor Student ws called" << endl;
}

Student::~Student()
{
	cout << "Destructor ws called" << endl;
}

Student::Student(const Student& Student_copy)
{
	name = Student_copy.name;
	ball = Student_copy.ball;
	size = Student_copy.size;
}

string Student::get_name() const { return name; }

int* Student::get_ball() const { return ball; }

int Student::get_size() const { return size; }

void Student::set_name(string new_name)
{
	name = new_name;
}

void Student::set_ball(int* new_ball)
{
	ball = new_ball;
}

void Student::set_size(int new_size)
{
	size = new_size;
}


float Student::av_ball()
{	
	float res = 0;
	for (int i = 0; i < size; i++)
	{
		res += *(ball + i);
	}

	return res/size;
}

void Student::show()
{
	cout << "Name: " << name << endl;
	cout << "Grades: ";
	for (int i = 0; i < size; i++)
	{
		cout << *(ball + i) << " ";
	}
	cout << endl;
}

void Student::rewrite()
{
    
    cin.ignore(32767, '\n');

    cout << "Input new name: ";
    getline(cin, name);
    
	cout << "Input number of marks: ";
	cin >> size;
	
	delete ball;
	ball = new int[size];

	cout << "Input marks ";

	for (int i = 0; i < size; i++)
	{
		cin >> *(ball + i);
	}
}