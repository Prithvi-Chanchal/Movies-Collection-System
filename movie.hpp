#ifndef MOVIE_HPP
#define MOVIE_HPP
#include <string>

class movie
{
	// Attributes
private:
	std::string name;
	std::string rating;
	int watch_count;

	// Methods
public:
	movie(std::string name_value, std::string rating_value, int watch_count_value)
		: name{name_value}, rating{rating_value}, watch_count{watch_count_value} {}

	void increment_watch_count()
	{
		watch_count++;
	}
	void display_movie() const;
	bool search_movie(std::string &name_val) const;
};

#endif // MOVIE_HPP
