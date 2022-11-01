#pragma once

#include "lib.h"

using namespace std;


class Student
{
private:
	string name;
	int* ball;
public:
	Student();
	Student(string name);
	~Student();
	Student(const Student& Student_copy);

	string get_name() const;
	int* get_ball() const;

	void set_name(string new_name);
	void set_ball(int* new_ball);

	void show();
	void rewrite();

	float av_ball();
};

