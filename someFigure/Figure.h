#pragma once
#include "Header.h"

class Figure
{
public:
	virtual void draw() = 0;
	void test() {}
	void change() {}
};

class Romb : public Figure {
public:
	void draw() override {
		cout << "Romb is being drawn..." << endl;
	}
};

class Circle : public Figure {
public:
	void draw() {
		cout << "Circle is being drawn..." << endl;
	}
};

class Triangle : public Figure {
public:
	void draw() {
		cout << "Triangle is being drawn..." << endl;
	}

	void power() {
		cout << "I'm a real triangle!!!" << endl;
	}
};