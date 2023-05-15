#include "Fraction.h"
#include <string>

int res(int a, int b)
{
	if (a % b == 0)
	{
		return b;
	}
	if (b % a == 0)
	{
		return a;
	}


	if (a > b)
	{
		return res(a - b, b);
	}
	if (a < b)
	{
		return res(a, b - a);
	}
	return 0;
}

int Fraction::get_numerator() const 
{
	return this->numerator_;
};
int Fraction::get_denominator() const 
{
	return this->denominator_;
};

Fraction Fraction::MakingFraction(int a, int b)
{
	int x = res(a, b);
	if (x <= 0)
	{
		return Fraction(a, b);
	};
	return Fraction(a / x, b / x);
}


Fraction::Fraction(int numerator, int denominator)
{
	numerator_ = numerator;
	denominator_ = denominator;
}

std::string Fraction::print_info() const
{
	return std::to_string(numerator_) + "/" + std::to_string(denominator_);
}

Fraction Fraction::operator+(const Fraction& other) const
{
	int a = (numerator_ * other.denominator_) + (other.numerator_ * denominator_);
	int b = denominator_ * other.denominator_;

	return  MakingFraction(a, b);
}

Fraction Fraction::operator-(const Fraction& other) const
{
	int a = (numerator_ * other.denominator_) - (other.numerator_ * denominator_);
	int b = denominator_ * other.denominator_;

	return  MakingFraction(a, b);
}

Fraction Fraction::operator*(const Fraction& other) const
{
	int a = (numerator_ * other.numerator_);
	int b = denominator_ * other.denominator_;

	return  MakingFraction(a, b);
}

Fraction Fraction::operator/(const Fraction& other) const
{
	int a = (numerator_ * other.denominator_);
	int b = denominator_ * other.numerator_;

	return  MakingFraction(a, b);
}

Fraction Fraction::operator++()
{
	*this = MakingFraction(numerator_ + denominator_, denominator_);
	return *this;
}

Fraction Fraction::operator++(int) 
{
	Fraction temp = *this;
	++(*this);
	return temp;
}

Fraction Fraction::operator--()
{
	numerator_ -= denominator_;

	return  MakingFraction(numerator_, denominator_);
}

Fraction Fraction::operator--(int) 
{
	Fraction temp = *this;
	--(*this);
	return temp;
}
