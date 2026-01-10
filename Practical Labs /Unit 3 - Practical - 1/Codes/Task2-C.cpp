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
class B: private A {
  public:
  void display () {
    x = 10;
    y = 20;
    cout << "X = " << x  << "  " << "Y = " << y << endl;
  }
};
int main() {
  B obj;
  //obj.x = 30; Due to private we have to comment it.
  //obj.y = 40;
  obj.display();
  return 0;
}
