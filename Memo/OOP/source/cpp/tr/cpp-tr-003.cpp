#include <iostream>
#include <cstring>
using namespace std;

class Point{
	private:
		int x, y;
		char color[10];
	public:
		void InitPoint(int* ix, int* iy, char* icolor);
		void ShowPoint();
		int MovePoint(int mx, int my);
};

int main(){
	
//	int ix, iy, mx, my;
//	char icolor[10];
		
//	Point *pointg;

//	cout << "포인트를 입력하세요 : ";
//	cin >> ix;
//	cin >> iy; 
//	cin >> icolor;
	
	pointg.InitPoint();

	pointg.ShowPoint();

	cout << "움직일 포인트를 입력하세요 : ";
	cin >> mx;
	cin >> my;

	pointg.MovePoint();

	pointg.ShowPoint();

}

void Point::InitPoint(){
//	x = ix;
//	y = iy;
//	strcpy(color, icolor);
	
	Point *p;

	malloc(sizeof(p));

	cout << "포인트를 입력하세요 : ";
	cin >> p.x;
	cin >> p.y; 
	cout << "포인트 색상을 입력하세요 : ";
	cin >> p.color;
	
}

void Point::ShowPoint(){
	cout << "x : " << p.x << " y : " << p.y << endl;
	cout << "color : " << color << endl;
}

int Point::MovePoint(int mx, int my){
	
	x = x + mx;
	y = y + my;
}
