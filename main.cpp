#include <iostream>
#include <cmath>
#include "add.h"

using namespace std;


int main()
{
    float float1 = 0.25;
    float float2 = 0.50;
    float result = add_floats(0.5, 0.45);
    std::cout << to_string(result);
    return 0;
}


