//
// #include <cstdio>
//
// int main () {
//     int sum=0;
//     for (int i =  1; i <= 100; i++) {
//         printf("%d\n", i);
//         sum = sum + i;
//     }
//     printf("%d\n", sum);
//     return 0;
// }

#include <cstdio>

int main() {
    while (1) {
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number <= 0) {
            break;
        }

        if ((number % 2) != 0) {
            continue;
        }
        printf("You entered a number %d.\n", number);
    }
}
