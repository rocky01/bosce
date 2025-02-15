#pragma once

#include <cstdlib>
#include <string.h>

template<std::size_t N>
inline bool eqString(const char *data, const char (&pattern)[N])
{
    return !::strncmp(data, pattern, N-1);
}

template<std::size_t N>
inline bool expectString(char *&data, const char (&pattern)[N])
{
    if ( eqString(data, pattern) )
    {
        data += N-1;
        return true;
    }
    return false;
}

inline bool expectAddress(char *&data)
{
    const char *begin = data;
    return ::strtoul(begin, &data, 16);
}
