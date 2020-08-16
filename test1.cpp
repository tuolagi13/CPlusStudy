#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

class Point
{
	public:
		map<string,string> x;
		map<string,string> y;

	public:
		void  setX(map<string,string>& tmpX)
		{
			x = tmpX;
		}
		void setY(map<string,string>* tmpY)
		{
			y = *tmpY;
		}
		void setPoint(map<string,string> myX,map<string,string> myY)
		{
			x = myX;
			y = myY;			
		}
};

void testPointer(Point& p)
{
	map<string, string>::iterator  iterX;
	iterX = p.x.begin();
	map<string, string>::iterator  iterY;
	iterY = p.y.begin();

   if(iterX->first == "x")
   {
		map<string,string> tmpX;
		tmpX.insert(pair<string, string>("tmpX", "student_tmpX"));
		p.setX(tmpX);

		map<string,string>* tmpY;
		tmpY = &tmpX;
		tmpY->insert(pair<string, string>("tmpY", "student_tmpY"));
		p.setY(tmpY);

		map<string, string>::iterator  tmp = tmpY->begin();
		cout << "In if,Value of tmpY : " << tmp->second << endl;
	}
	//Sleep(3000);
	cout << "In quicksort,Value of X is : " << iterX->second << endl;
	cout << "In quicksort,Value of Y is : " << iterY->second << endl;
}

int main(){
	Point p;
	map<string, string> mapX;
	mapX.insert(pair<string, string>("x", "student_x"));
	map<string, string> mapY;
	mapY.insert(pair<string, string>("y", "student_y"));
	p.setPoint(mapX,mapY);

	map<string, string>::iterator  iterX = p.x.begin();
	map<string, string>::iterator  iterY = p.y.begin();

	testPointer(p);

	cout << "In main,Value of X is : " << iterX->second << endl;
	cout << "In main,Value of Y is : " << iterY->second << endl;

	int a = (-1)||(-1);
	cout << "Value of str is : " << a << endl;
}