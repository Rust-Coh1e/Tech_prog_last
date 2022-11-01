#include "lib.h"

using namespace std;

int main() 
{
	/*Student* student;
	student = new Student;

	student->rewrite();
	student->show();

	Student* student2;
	student2 = new Student;
	student2->rewrite();
	student2->show();
	


	Group group;

	group.insert(student);
	group.insert(student2);
	group.show();

	group.insert(2);
	group.show();*/
	
	Menu menu;
	menu.add_new_group();
	menu.show_all();
	//menu.add_new_stud(1);
	menu.add_new_group();
	//menu.add_new_stud(1);

	menu.show_all();

	return 0;
}