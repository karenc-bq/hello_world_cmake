#include <helloworld/hello_world.h>

namespace BQ
{
namespace HELLOWORLD
{
int HELLO_WORLD::print_hello() {
  printf("hello world: %d\n", number);
  return number;
}
}
}
