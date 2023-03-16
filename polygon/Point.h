/**
  * Point Class
  * 
  * @author Peter D.
  */
#pragma once
  
class Point
{
	public:
		Point(int x = 0, int y = 0) : x(x), y(y) {}
		int getX() const { return x; }
		int getY() const { return y; }
		bool operator==(const Point& obj);
		friend std::ostream& operator<<(std::ostream& stream, const Point obj);
	
	private:
		int x, y;	
};