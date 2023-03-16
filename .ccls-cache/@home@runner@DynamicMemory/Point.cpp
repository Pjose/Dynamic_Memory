#include <iostream>
#include "Point.h"

bool Point::operator==(const Point& other)
{
	if((this->getX() == other.getX()) && (this->getY() == other.getY()))
	{
		return true;
	}
	return false;
}

std::ostream& operator<<(std::ostream& stream, const Point obj)
{
	stream << "(" << obj.getX() << "," << obj.getY() << ")";
	return stream;
}