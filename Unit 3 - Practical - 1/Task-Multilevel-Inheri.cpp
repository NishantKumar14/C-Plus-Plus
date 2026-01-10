#include <iostream>
using namespace std;
class A {
  public: 
    int x;
  protected:
  	 int y;
  private:
  	 int z;
};
class B: public A {
  public:
  int a;
  void display () {
  	 a = 10;
    x = 10;
    y = 20;
    cout << "A = " << a << " "<<"X = " << x  << "  " << "Y = " << y << endl;
  }
};
class C: public B {
  public:
  int b;
  void display () {
  	 b = 30;
    x = 10;
    y = 20;
    cout << "B = " << b << " " <<"X = " << x  << "  " << "Y = " << y << endl;
  }
};
class D: public C {
  public:
  int c;
  void display () {
  	 c = 40;
    x = 10;
    y = 20;
    cout << "C = " << c << " "<<"X = " << x  << "  " << "Y = " << y << endl;
  }
};
int main() {
  D obj;
  //obj.x = 30; Due to private we have to comment it.
  //obj.y = 40;
  obj.display();
  return 0;
}
