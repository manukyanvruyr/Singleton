#pragma once

#include "base_singleton.hpp"

class Singleton : public BaseSingleton<Singleton>
{
private:
        Singleton() {}
        ~Singleton() {}

private:
        friend class BaseSingleton<Singleton>;
};
