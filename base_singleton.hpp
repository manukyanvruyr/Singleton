#pragma once

/**
 * @class BaseSingleton
 * @param A template singleton pattern implementation
 * There are requirements on the T singleton class.
 * It should have private constructor, destructor and should
 *	declare this class as friend.
 */
template <typename T>
class BaseSingleton
{
protected:
	BaseSingleton() {};
	~BaseSingleton() {};

public:
	BaseSingleton(const BaseSingleton& ob) = delete;
	BaseSingleton(BaseSingleton&& ob) = delete;
	BaseSingleton& operator=(const BaseSingleton& ob) = delete;
	BaseSingleton& operator=(BaseSingleton&& ob) = delete;

public:
	static T& get_instance();
};

#include "base_singleton.h"
