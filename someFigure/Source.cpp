#include "Figure.h"
#include "Figure.h"

void test(Figure** figures, int size) {
	for (int i = 0; i < size; i++)
	{
		//cout << typeid(figures[i]).name() << endl;
		figures[i]->draw();

		Triangle* triangle = dynamic_cast<Triangle*>(figures[i]);
		if (triangle) {
			triangle->power();
		}

	}
}

int main() {
	const int size = 5;
	//Figure* figure = new Figure();
	Triangle* triangle = new Triangle();
	Romb* romb = new Romb();
	Circle* circle = new Circle();

	Figure** figures = new Figure * [size];

	figures[0] = circle;
	figures[1] = triangle;
	figures[2] = romb;
	figures[3] = circle;
	figures[4] = triangle;

	test(figures, size);

	return 0;
}