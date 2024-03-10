// codeme71 2024 
// please donate in SOL: EuRyXtxFq2NSwCRFxjgGRzYWN1xv72FGKSUF3TvVy6yu
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  * argv[]) {
    int i, sum = 0;

    if (argc != 2) {
        printf("Неверное количество аргументов\n");
        return 1;
    }

    for (i = 0; argv[1][i] != '\0'; i++) {
        if (argv[1][i] >= '0' && argv[1][i] <= '9') {
            sum += argv[1][i] - '0';
        }
    }

    printf("%d\n", sum);

    return 0;
}

