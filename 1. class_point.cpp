#include <iostream>
using namespace std;

class point
{
  public:
    point(double xx = 0.0, double yy = 0.0)
      : 
      x(xx),
      y(yy)
      {}
    
    double X() const;
    double Y() const;
    void set_value(double, double);
    
  private:
    double x;
    double y;
};


double point::X() const
{
  return x;
}

double point::Y() const
{
  return y;
}

void point::set_value(double a, double b)
{
  x = a;
  y = b;
}


int main()
{
  point p1;
  cout << p1.X() << endl;
  cout << p1.Y() << endl;
  cout << "finished testing default constructor" << endl;

  double c, d;
  cout << "input first argument: " << endl;
  cin >> c;
  cout << "input 2nd argument: " << endl;
  cin >> d;
  p1.set_value(c, d);
  cout << "after calling the set_value function: " << endl;
  cout << p1.X() << endl;
  cout << p1.Y() << endl;
  
  point p2(c,d);
  cout << "if the object, p2, is directly initialized using input arguments" << endl;
  cout << p2.X() << endl;
  cout << p2.Y() << endl;
  
  point p3;
  cout << "original value of p3" << endl;
  cout << p3.X() << endl;
  cout << p3.Y() << endl;
  p3 = p2;
  cout << "after assigning p3 as p2" << endl;
  cout << p3.X() << endl;
  cout << p3.Y() << endl;

  return 0;
}
  
    
