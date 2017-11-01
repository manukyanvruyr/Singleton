template <typename T>
T& BaseSingleton<T>::get_instance()
{
	static T s_instance;
	return s_instance;
}
