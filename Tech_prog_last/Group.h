#pragma once
#include "lib.h"

class Group
{
private:
	int size;
	Student* data;
	int number;
public:
	Group();
	Group(int size);
	~Group();

	int get_size();
	void set_size(int new_size);

	Student* operator[](int index);

	void insert(Student* new_Student);
	void insert(int ind);
	void sort();
	
	float aver();
};

