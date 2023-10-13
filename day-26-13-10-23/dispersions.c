#include <stdio.h>
#include <math.h>

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

    // Calculate mean deviation about mean
    double meanDeviationMean = 0;
    for (int i = 0; i < n; i++) {
        meanDeviationMean += fabs(values[i] - mean);
    }
    meanDeviationMean /= n;

    // Calculate variance
    double variance = 0;
    for (int i = 0; i < n; i++) {
        variance += pow(values[i] - mean, 2);
    }
    variance /= n;

    // Calculate standard deviation
    double standardDeviation = sqrt(variance);

    // Output results
    printf("Mean Deviation about Mean: %.2lf\n", meanDeviationMean);
    printf("Mean Deviation about Median: %.2lf\n", fabs(median - mean));
    printf("Variance: %.2lf\n", variance);
    printf("Standard Deviation: %.2lf\n", standardDeviation);

    return 0;
}
