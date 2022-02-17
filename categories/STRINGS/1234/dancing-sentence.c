#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[50];

    while(fgets(sentence, sizeof(sentence), stdin)) {
        for(int i = 0, count = 1; sentence[i] != '\0'; i++, count++) {
            if(sentence[i] == ' ')
                count--;
            else {
                if(count % 2 == 0)
                    sentence[i] = tolower(sentence[i]);
                else
                    sentence[i] = toupper(sentence[i]);
            }
        }
        printf("%s", sentence);
    }

    return 0;
}