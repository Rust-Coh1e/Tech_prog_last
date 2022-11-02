#pragma once
#include "lib.h"

class Menu
{
protected:
	int count=0;
	Group* list;
	int exit = 1;
public:
	
	void main_menu();
	int show_options();
	void show_all();//done
	void red_group();
	void red_student();
	void add_new_group();//done
	void add_new_stud();//done
	void delete_group();
	void delete_student();
	void exit_from_programm();
	void average_stud();
};

