#ifndef HELLO_WORLD_CMAKE__HELLO_WORLD_H_
#define HELLO_WORLD_CMAKE__HELLO_WORLD_H_

#include <cstdio>

namespace BQ
{
namespace HELLOWORLD
{
class HELLO_WORLD {
 public:
  HELLO_WORLD(int num) : number{num} {}
  ~HELLO_WORLD() = default;

  int print_hello();
 private:
  int number = 0;
};
}
}

#endif //HELLO_WORLD_CMAKE__HELLO_WORLD_H_
