#include <random>
using namespace std;
int main()
{
    random_device device;
    default_random_engine e(device());
    uniform_int_distribution<int> uniform_dist(1, 6);
    return uniform_dist(e);
}
