#pragma once
class Point
{
public:
	Point();
	Point(double, double);
	Point(const Point&);
	Point& operator=(const Point&);
	~Point();

	void init(double, double);
	double dist(const Point&);

private:
	void copy(const Point&);

private:
	double x;
	double y;
};

