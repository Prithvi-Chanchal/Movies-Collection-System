#ifndef MOVIES_HPP
#define MOVIES_HPP
#include "movie.hpp"
#include <vector>
#include <string>

class movies
{
	// Attributes
private:
	std::vector<movie> Movies;

	// Methods
public:
	void display_all_movies() const;
	void increment_movie(std::string &name_val);
	void add_movie(std::string &name, std::string &rating_val, int &watch_count_val);
};

#endif // MOVIES_HPP
