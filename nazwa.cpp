#include <random>
#include <iostream>
using namespace std;
int main()
{
    random_device device;
    default_random_engine e(device());
    uniform_int_distribution<int> uniform_dist(1, 6);
    for(int i = 0; i<10; i++) cout<<uniform_dist(e)<<" ";
    return 0;
}
