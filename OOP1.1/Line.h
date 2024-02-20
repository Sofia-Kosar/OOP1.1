#pragma once
class Line {
private:
	double first;
	double second;
	bool isValidA(double A);

public:
	void setFirst(double A);
	void setSecond(double B);
	double getFirst() const;
	double getSecond() const;
	bool Init(double A, double B);
	bool Read();
	void Display() const;
	double function(double x) const;



};