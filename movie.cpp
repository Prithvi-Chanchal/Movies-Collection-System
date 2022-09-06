#include "movie.hpp"
#include <iostream>

void movie::display_movie() const
{
    std::cout << name << ", " << rating << ", " << watch_count << std::endl;
}

bool movie::search_movie(std::string &name_val) const
{
    if (name == name_val)
        return true;
    else
        return false;
}