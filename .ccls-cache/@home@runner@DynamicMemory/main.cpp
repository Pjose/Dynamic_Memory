#include <iostream>
#include "Point.h"

using namespace std;

void testConstructor();
void testEqualToOperator();
void testCreateStaticPolygon();
void testCreateDynamicPolygon();

int main(int argc, char** argv) {
	
	testConstructor();
	testEqualToOperator();
	testCreateStaticPolygon();
	testCreateDynamicPolygon();
	
	return 0;
}

void testConstructor()
{
	Point point1;
	Point point2(0,2);
	Point point3(-1, -1);
	Point point4(point2);
	cout << "Test Point Constructor and operator<< overload." << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "point1" << point1 << endl;
	cout << "point2" << point2 << endl;
	cout << "point3" << point3 << endl;
	cout << "point4" << point4 << endl;
}

void testEqualToOperator()
{
	Point point2(0,2);
	Point point3(-1, -1);
	Point point4(point2);
	cout << "\nTest Point operator== overload." << endl;
	cout << "---------------------------------" << endl;
	if(point2 == point4)
	{
		cout << point2 << " is equal to " << point4 << endl;
	} 
	else 
	{
		cout << point2 << " NOT equal to " << point4 << endl;
	}
	
	if(point2 == point3) 
	{
		cout << point2 << " is equal to " << point3 << endl;
	} 
	else 
	{
		cout << point2 << " NOT equal to " << point3 << endl;
	}
}

void testCreateStaticPolygon()
{
	cout << "\nTest Creating a Static Polygon Using Point Class." << endl;
	cout << "---------------------------------------------------" << endl;
	Point polygon[] = { { 0, 0 }, { 10, 0 }, { 10, 10 }, { 0, 10 } };
	cout << "The sides are: ";
	for(Point pt : polygon)
	{
		cout << pt << " ";
	}
	cout << endl;
}

void testCreateDynamicPolygon()
{
	cout << "\nTest Creating a Dynamic Polygon Using Point Class." << endl;
	cout << "----------------------------------------------------" << endl;
	int numVertices;
	cout << "Enter number of vertices: ";
	cin >> numVertices;
	Point* polyPtr = new Point[numVertices];
	
	for(int i = 0; i < numVertices; i++)
	{
		int x, y;
		cout << "\nPoint " << (i+1);
		cout << "\nEnter value of x: ";
		cin >> x;
		cout << "Enter value of y: ";
		cin >> y;
		Point temp(x, y);
		*(polyPtr+i) = temp;
	}
	
	cout << "The sides are: ";
	for(int i = 0; i < numVertices; i++)
	{
		cout << *(polyPtr+i) << " ";
	}
	cout << endl;
	
	delete[] polyPtr;
}