#include "Date.h"

int main()
{
    Date birthday {7, 7, 2022};
    std::cout << birthday.getDay() << '/'<< birthday.getMonth() << '/' << birthday.getYear();
}