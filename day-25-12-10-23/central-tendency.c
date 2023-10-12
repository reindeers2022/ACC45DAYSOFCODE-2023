/*
this program prints the mean, median, mode for any given set of data items
*/
#include <stdio.h>

// Function to calculate the mode
int calculateMode(int arr[], int n) {
    int maxCount = 0, mode = -1;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }
    return mode;
}

int main() {
    int n = 5; // Number of values
    int values[n];

    // Input values
    printf("Enter 5 integer values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }

    // Calculate mean
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += values[i];
    }
    double mean = sum / n;

    // Calculate median (by sorting the array)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (values[j] > values[j + 1]) {
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }
    double median;
    if (n % 2 == 0) {
        median = (values[n / 2 - 1] + values[n / 2]) / 2.0;
    } else {
        median = values[n / 2];
    }

    // Calculate mode
    int mode = calculateMode(values, n);

    // Output results
    printf("Mean: %.2lf\n", mean);
    printf("Median: %.2lf\n", median);
    printf("Mode: %d\n", mode);

    return 0;
}
