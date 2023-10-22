#include <stdio.h>
#include <string.h>

void generateHashtags(char input[]) {
    char* token = strtok(input, " ");  // Split the input by spaces
    while (token != NULL) {
        if (token[0] == '#') {
            printf("%s ", token);  // If the word starts with #, it's already a hashtag
        } else {
            printf("#%s ", token);  // Add # before the word to make it a hashtag
        }
        token = strtok(NULL, " ");  // Get the next word
    }
    printf("\n");
}

int main() {
    char input[256];

    printf("Enter your text: ");
    fgets(input, sizeof(input), stdin);
    
    generateHashtags(input);

    return 0;
}
