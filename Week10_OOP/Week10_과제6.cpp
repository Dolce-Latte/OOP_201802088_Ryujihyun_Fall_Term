#include<iostream>

class DrawAPI {
public:
	virtual ~DrawAPI() {};
	virtual void drawCircle(int radius, int x, int y) = 0;
};

class RedCircle : public DrawAPI {
public:
	void drawCircle (int radius, int x, int y) override {
		std::cout << "Drawing Circle[ color : red, radius : " << radius << ", x : "
			<< x << ", y : " << y << "]" << std::endl;
	}
};

class GreenCircle : public DrawAPI {
public:
	void drawCircle(int radius, int x, int y) override {
		std::cout << "Drawing Circle[ color : green, radius : " << radius << ", x : "
			<< x << ", y : " << y << "]" << std::endl;
	}
};

//Abstract
class Shape {
public:
	virtual ~Shape() {}
	virtual void draw() = 0;
};

class Circle : public Shape {
private:
	int x, y, radius;
	DrawAPI* drawAPI;
public:
	Circle(int x, int y, int radius, DrawAPI* drawAPI) {
		this->x = x;
		this->y = y;
		this->radius = radius;
		this->drawAPI = drawAPI;
	}
	void draw() {
		this->drawAPI->drawCircle(this->radius, this->x, this->y);
	}
};

int main() {
	Shape *redcircle = new Circle(100, 100, 10, new RedCircle());
	Shape* greencircle = new Circle(100, 100, 10, new GreenCircle());

	redcircle->draw();
	greencircle->draw();
	return 0;
}