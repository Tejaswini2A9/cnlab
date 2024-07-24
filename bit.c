#include <stdio.h>

void main() {
    int a[20], b[30], i, j, k, count, n;
    printf("Enter frame length: ");
    scanf("%d", &n);
    printf("Enter input frame (0's & 1's only): ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    i = 0;
    count = 0;
    j = 0;

    while (i < n) {
        b[j] = a[i];
        if (a[i] == 1) {
            count++;
        } else {
            count = 0;
        }
        
        if (count == 5) {
            j++;
            b[j] = 0;
            count = 0; // Reset the count after stuffing
        }
        i++;
        j++;
    }

    printf("After stuffing the frame is: ");
    for (i = 0; i < j; i++)
        printf("%d", b[i]);
    printf("\n");
}
