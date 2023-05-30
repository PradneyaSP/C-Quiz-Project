#include <stdio.h>
#include <string.h>

typedef struct {
    int score;
} Player;

int main() {
    FILE *file = fopen("scores.txt", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    Player topPlayer;
    topPlayer.score = 0;  // Initialize to 0 instead of -1

    Player currentPlayer;

    while (fscanf(file, "%d",  &currentPlayer.score) != EOF) {
        if (currentPlayer.score > topPlayer.score) {
            topPlayer = currentPlayer;
        }
    }

    fclose(file);

    printf("Top Score: %d\n", topPlayer.score);

    return 0;
}
