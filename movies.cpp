#include "movies.hpp"
#include "movie.hpp"
#include <vector>
#include <string>
#include <iostream>

void movies::display_all_movies() const
{
    std::cout << "\n---------------------------------------------------------------------------\n";
    if (Movies.size() != 0)
    {
        for (size_t i = 0; i < Movies.size(); ++i)
        {
            Movies[i].display_movie();
        }
    }
    else
        std::cout << "No movies to display!" << std::endl;
    std::cout << "---------------------------------------------------------------------------\n"
              << std::endl;
}

void movies::increment_movie(std::string &name_val)
{
    for (size_t i = 0; i < Movies.size(); ++i)
    {
        if (Movies[i].search_movie(name_val))
        {
            Movies[i].increment_watch_count();
            std::cout << name_val << " incremented!" << std::endl;
            return;
        }
    }
    std::cout << "Movie not found!" << std::endl;
}

void movies::add_movie(std::string &name, std::string &rating_val, int &watch_count_val)
{
    if (Movies.size() != 0)
    {
        for (size_t i = 0; i < Movies.size(); ++i)
        {
            if (Movies[i].search_movie(name))
            {
                std::cout << "Movie already exist!" << std::endl;
                return;
            }
        }
        Movies.push_back(movie(name, rating_val, watch_count_val));
        std::cout << "Movie " << name << " added succesfully!" << std::endl;
    }
    else
    {
        Movies.push_back(movie(name, rating_val, watch_count_val));
        std::cout << "Movie " << name << " added succesfully!" << std::endl;
    }
}