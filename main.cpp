#include <boost/mpl/vector.hpp>

struct ThreadSafe {};
struct Portable {};
struct ExceptionSafe {};

typedef boost::mpl::vector<ThreadSafe, ExceptionSafe> TESafe;


int main (int argc, char *argv[]) {
  return 0;
}


