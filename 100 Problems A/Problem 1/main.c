#include <stdio.h>

int main() {
    int n; // number of problems
    scanf("%d", &n);

    int count = 0; // count of problems they will implement

    for (int i = 0; i < n; i++) {
        int p, v, t; // confidence levels for Petya, Vasya, and Tonya
        scanf("%d %d %d", &p, &v, &t);

        // Count how many are confident
        int sure_count = p + v + t;

        // If at least two are confident, increment the count
        if (sure_count >= 2) {
            count++;
        }
    }

    // Output the number of problems they will implement
    printf("%d\n", count);
    return 0;
}
