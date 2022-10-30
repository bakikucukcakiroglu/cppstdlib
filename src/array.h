
// ^C++17

#ifndef ARRAY_H
#define ARRAY_H

#include <cstddef>

namespace hbk
{

    template <class T, std::size_t N>
    class array
    {

        std::size_t N;
        T[] arr;

        constexpr T &at(size_t pos);
        constexpr const T &at(size_t pos) const; // we need to implement const member functions to let our object execute this function even if it is passed as constant reference
                                                 // also a const member function cannot return a non-const reference to a member
        constexpr T &operator[](size_t pos);
        constexpr const T &operator[size_t pos] const;

        constexpr T &front();
        constexpr const T &front() const;

        constexpr T &back();
        constexpr const T &back() const;

        constexpr T *data();
        constexpr const T *data() const;

        constexpr bool empty() const;
    };

}

#endif // !ARRAY_H
