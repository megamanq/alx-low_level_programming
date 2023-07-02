#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i;

    srand(time(NULL));
    for (i = 0; i < 5; i++) {
        int randomNum = rand();
        printf("%d\n", randomNum);
    }

    return 0;
}
