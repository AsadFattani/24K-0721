#include <stdio.h>
#include <string.h>

struct movieInfo {
    char title[50];
    char genre[20];
    char director[50];
    int releaseYear;
    int rating;
};

void addNewMovie(struct movieInfo *movie) {
    printf("Enter movie title: ");
    scanf(" %[^\n]s", movie->title);
    printf("Enter movie genre: ");
    scanf(" %[^\n]s", movie->genre);
    printf("Enter movie director: ");
    scanf(" %[^\n]s", movie->director);
    do {
        printf("Enter movie release year: ");
        scanf("%d", &movie->releaseYear);
    } while (movie->releaseYear < 1874 || movie->releaseYear > 2024);
    do {
        printf("Enter movie rating: ");
        scanf("%d", &movie->rating);
    } while (movie->rating < 0 || movie->rating > 10);
}

void displayMovieDetails(struct movieInfo movie) {
    printf("\nTitle: %s\n", movie.title);
    printf("Genre: %s\n", movie.genre);
    printf("Director: %s\n", movie.director);
    printf("Release Year: %d\n", movie.releaseYear);
    printf("Rating: %d\n", movie.rating);
}

void displayAllMovies(struct movieInfo movies[], int size) {
    for (int i = 0; i < size; i++) {
        displayMovieDetails(movies[i]);
    }
}

void searchMovie(struct movieInfo *movie, char *genre) {
    if (strcmp(movie->genre, genre) == 0) {
        displayMovieDetails(*movie);
    }
}

int main() {
    struct movieInfo movies[100] = {
        {"Sherlock Holmes", "Mystery", "Guy Ritchie", 2009, 7},
        {"The Dark Knight", "Action", "Christopher Nolan", 2008, 9},
        {"Inception", "Sci-Fi", "Christopher Nolan", 2010, 8}
    };
    int choice, size = 3;

    do {
        printf("\nMenu:\n");
        printf("1. Add a new movie\n");
        printf("2. Display movie details\n");
        printf("3. Search movie by genre\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addNewMovie(&movies[size]);
                size++;
                break;
            case 2:
                displayAllMovies(movies, size);
                break;
            case 3: {
                char genre[20];
                printf("Enter the genre to search: ");
                scanf(" %[^\n]s", genre);
                int found = 0;
                for (int i = 0; i < size; i++) {
                    if (strcmp(movies[i].genre, genre) == 0) {
                        searchMovie(&movies[i], genre);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("No movie found with the given genre.\n");
                }
                break;
            }
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}