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
	void change_data();
	void add_new_group();//done
	void add_new_stud(int num);//done
	void delete_group();
	void delete_student();
	void exit_from_programm();
	void average_stud();
};

