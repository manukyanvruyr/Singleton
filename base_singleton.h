template <typename T>
T* BaseSingleton<T>::s_instance = nullptr;

template <typename T>
T* BaseSingleton<T>::get_instance()
{
        if (nullptr == s_instance) {
                s_instance = new T();
        }   
        return s_instance;
}

template <typename T>
void BaseSingleton<T>::remove_instance()
{
        delete s_instance;
        s_instance = 0;
}
