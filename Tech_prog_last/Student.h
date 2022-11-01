#pragma once

#include "lib.h"

using namespace std;


class Student
{
private:
	string name;
	int* ball;
	int size;

public:
	Student();
	Student(string new_name);
	~Student();
	Student(const Student& Student_copy);

	string get_name() const;
	int* get_ball() const;
	int get_size() const;
	
	//int define_size() const;

	void set_name(string new_name);
	void set_ball(int* new_ball);
	void set_size(int new_size);

	void show();
	void rewrite();

	float av_ball();
};

