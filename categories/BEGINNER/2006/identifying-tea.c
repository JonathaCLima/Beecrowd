#include <stdio.h>

int main() {
    int tea, answer[4], correct_answer = 0;

    scanf("%d", &tea);

    for(int i = 0; i < 5; i++) {
        scanf("%d", &answer[i]);
        if(answer[i] == tea) correct_answer++;
    }

    printf("%d\n", correct_answer);

    return 0;
}