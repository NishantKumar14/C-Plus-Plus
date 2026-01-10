#include <iostream>
using namespace std;
class A {
  public:
  int k;
  void displayA () {
  k = 10;
    cout << "Class A" << endl;
	}
};
class B: virtual public A {
  public:
  void displayB () {
    cout << "Class B" << endl;
	}
};
class C: virtual public A {
  public:
  void displayC () {
    cout << "Class C" << endl;
    }
};
class D: public C, public B {
  public:
  void displayD () {
    cout << "Class D" << endl;
  }
};
int main() {
  D obj;
  obj.displayA();
  cout << "K = " << obj.k << endl;s
  return 0;
}
