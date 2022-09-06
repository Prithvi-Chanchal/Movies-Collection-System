#include <iostream>
#include <vector>
#include <string>
#include "movies.hpp"

using namespace std;

void print_menu()
{
    cout << "\n---------------------------------------------------------------------------" << endl;
    cout << "P - Print all movies\n"
         << "A - Add a movie\n"
         << "I - Increment watch count of a movie\n"
         << "Q - Quit\n"
         << "---------------------------------------------------------------------------"
         << endl;
}

int main()
{
    movies Movies;
    bool flag{false};
    char ch, temp;
    cout << "\n                         Movies collection system\n";
    do
    {
        print_menu();
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 'p':
        case 'P':
            Movies.display_all_movies();
            break;

        case 'a':
        case 'A':
        {
            string movie_name{}, movie_rating{};
            int wc;
            cout << "Enter movie name: ";
            cin.ignore();
            getline(cin, movie_name);
            cout << "Enter movie's rating(G/PG/PG-13/R): ";
            cin >> movie_rating;
            cout << "Enter watch count: ";
            cin >> wc;
            Movies.add_movie(movie_name, movie_rating, wc);
            break;
        }
        case 'i':
        case 'I':
        {
            string movie_name;
            cout << "Enter name of the movie you want to incremented: ";
            cin.ignore();
            getline(cin, movie_name);
            Movies.increment_movie(movie_name);
            break;
        }
        case 'q':
        case 'Q':
            cout << "Goodbye!!!" << endl;
            flag = true;
            break;

        default:
            cout << "Unknown selection, please try again." << endl;
        }
    } while (!flag);
    return 0;
}