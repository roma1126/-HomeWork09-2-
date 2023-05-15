#pragma once
#include <string>

static int res(int a, int b); 

class Fraction
{
private:
	int numerator_;
	int denominator_;

	static Fraction MakingFraction(int a, int b);

public:
	Fraction(int numerator, int denominator);

	int get_numerator()const; 
	int get_denominator()const; 

	std::string print_info() const;

	Fraction operator+(const Fraction& other) const;
	Fraction operator-(const Fraction& other) const;
	Fraction operator*(const Fraction& other) const;
	Fraction operator/(const Fraction& other) const;
	Fraction operator++();
	Fraction operator++(int); 
	Fraction operator--();
	Fraction operator--(int); 

};