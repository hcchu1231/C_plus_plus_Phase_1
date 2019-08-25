#include <iostream>
using namespace std;

class point
{
  public:
    point (double xx = 0.0, double yy = 0.0);//
    double X() const;
    double Y() const;
    void zero();
    void set_value(double, double);   ////

  private:
    double x;
    double y;
};

// temporary constructor
point::point (double xx, double yy)  //
  :
  x(xx),
  y(yy)
{}


double point::X() const
{
  return x;
}

double point::Y() const
{
  return y;
}

void point::zero()
{
  x = 0.0;
  y = 0.0;
}

void point::set_value(double a, double b)////
{
  x = a;
  y = b;
}

int main()
{
  point p;
  cout << p.X() << endl;
  cout << p.Y() << endl;

  point q(3.0, 4.0);
  cout << q.X() << endl;
  cout << q.Y() << endl;

  p.set_value(1.2, 2.3);
  cout << p.X() << endl;
  cout << p.Y() << endl;

  return 0;
}
  
    
