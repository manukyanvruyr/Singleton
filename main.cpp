#include <iostream>

#include "singleton.hpp"

int main()
{
        Singleton* p = Singleton::get_instance();
        Singleton::remove_instance();
}
