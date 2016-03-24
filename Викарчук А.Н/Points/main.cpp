#include<iostream>
#include<ctime>

using namespace std;

struct Point
{
	int x;
	int y;

	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	Point(){}

	float vect_length()
	{
		return sqrt(x*x+y*y);
	}

	Point operator+(Point other)
	{
		Point npoint;
		npoint.x = this->x + other.x;
		npoint.y = this->y + other.y;
		return(npoint);
	}

};
ostream &operator<<(ostream &os, Point const &p)
{
	return os << "(" << p.x << ", " << p.y << ")";
}

typedef bool(*Comparator)(Point a, Point b);

struct PointList
{
private:
	Point *points;

public:
	int count;

	PointList(int n)
	{
		cout << "Constructing list";
		this->count = n;
		this->points = new Point[n];
	}

	~PointList()
	{
		cout << "Deleting list";
		delete [] points;
	}

	Point operator[](int i)
	{
		cout << "Accessing list alement at index" << i;
		return points[i];
	}

	void sort(Comparator comp)
	{
		for(int i=1; i<count; i++) 
		{
			for(int j=count; j>=i; j--)
				if(comp(points[j-1], points[j]))
					swap(points[j-1], points[j]);
		}
	}
};

bool comp(Point a, Point b)
{
	return a.x < b.x ;
}


void a()
{
	int n = 10;
	srand(time(0));
	Point *as = new Point[n];
	for(int i=0; i<10; i++)
	{
		as[i].x = rand()%100 + 1;
		as[i].y = rand()%100 + 1;
		cout << as[i].x << " " << as[i].y << endl;
	}
	cout << endl;

	Point t = as[0] + as[1];

	for(int i = 0; i<n; i++)
	{
		cout << as[i].x << " " << as[i].y << "    " << as[i].vect_length() << endl;
	}

	PointList list(10);

	/*for(int i=0; i<10; i++)
	{
		list[i] = Point(rand()%100 + 1, rand()%100 + 1);
		cout << list[i].x << " " << list[i].y << endl;
	}
	*/

	list[1] = t;
	list.sort(comp);
	cout <<endl << t << endl;
}

int main()
{
	a();
	
	system("pause");
}