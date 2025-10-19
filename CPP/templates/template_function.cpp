
#include <iostream>

template <typename T>
T func(T a, T b){
    return a + b;
}

int main(int argc, char **argv){

    int z_int;
    double z_double;

    z_int    = func<int>(5, 6);
    z_double = func<double>(5.4, 6.3);
    std::cout << "Integer sum: " << z_int << std::endl;
    std::cout << "Double sum: " << z_double << std::endl;    

    return 0;
}