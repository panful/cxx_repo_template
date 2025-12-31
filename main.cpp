#include <iostream>
#include <string>
#include <vector>

namespace MyNamespace {
class ClassA {
 public:
  ClassA(int _a, float _b, double _c)
      : a(_a)
      , b(_b)
      , c(_c) {}

  void f1();
  void f2();

 protected:
  bool f3() { return false; }

 private:
  int a {};     // int
  float b {};   // float
  double c {};  // double
};

class ClassB {};
class ClassC {};
class ClassD {};
class ClassLongName____________________________ {};

class ClassE
    : public ClassA
    , public ClassB {};

class ClassF
    : public ClassA
    , public ClassB
    , public ClassC
    , public ClassD
    , public ClassLongName____________________________ {};

struct StructA {
  int x {};
  int y {};
  int z {};
};

struct Object {
  std::string uuid {};
  int value {};
};
}  // namespace MyNamespace

#define MY_MACRO(x, y)         \
  auto z = x + y;              \
  std::cout << x << std::endl; \
  std::cout << y << std::endl; \
  std::cout << z << std::endl;

void multiple_parameters(int aaa1,
                         float bbb12,
                         double ccc123,
                         int xxx1,
                         float yyy12,
                         double zzz123,
                         int ax    = 1,
                         float by  = 2.f,
                         double cz = 3.) {}

template <typename T>
void f_t(T&& p) {}

int main() {
  int flag {};

  switch (flag) {
    case 1: break;            
    case 2: {
    } break;
    case 3: return 1;
  }

  for (int i = 0; i < 100; ++i) {}

  while (flag < 10) flag++;

  if (flag == 1) return 1;

  int long_name_variable_int {1};
  float long_name_variable_float {1.f};
  double long_name_variable_double {1.};
  multiple_parameters(1, 2.f, 3., long_name_variable_int, long_name_variable_float, long_name_variable_double);

  auto func_obj = []() {
    int x    = 0;
    float y  = 0;
    double z = x + y;
    return z;
  };

  func_obj();

  std::vector<int> vec_int {1, 2, 3, 4, 5, 6, 7};

  std::vector<MyNamespace::StructA> vec_StructA {
      {1, 2, 3},
      {2, 3, 4},
      {3, 4, 5},
      {4, 5, 6},
      {5, 6, 7},
      {6, 7, 8},
      {7, 8, 9}
  };

  using namespace MyNamespace;
  std::vector<Object> vec_obj1 {
      {"uuid", 123}
  };
  std::vector<Object> vec_obj2 {
      {"abcdefg",   123      },
      {"xyz",       123456   },
      {"abc",       123      },
      {"12345abcd", 1234567  },
      {"abcd",      123456789}
  };

  std::cout << "this is a repo template" << std::endl;

  return 0;
}
