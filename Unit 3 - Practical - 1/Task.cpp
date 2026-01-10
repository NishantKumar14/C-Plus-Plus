#include <iostream>
using namespace std;
class A {
  public: 
    int x,y;
};
class B: public A {
  public:
  void display () {
    x = 10;
    y = 20;
    cout << "X = " << x  << "  " << "Y = " << y;
  }
};
int main() {
  B obj;
  obj.x = 30; 
  obj.y = 40;
  obj.display();
  return 0;
}
