#include "lib.h"

using namespace std;

int main() 
{
	Student* student;
	student = new Student;
	student->show();
	student->rewrite();
	student->show();
	cout << student->av_ball();
	return 0;
}