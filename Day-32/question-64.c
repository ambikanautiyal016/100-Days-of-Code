#include <stdio.h>

int main() {
    long long num, temp;
    int freq[10] = {0};

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Handle 0 and negative numbers
    if (num == 0) {
        freq[0] = 1;
    } else {
        temp = (num < 0) ? -num : num;
        while (temp != 0) {
            int digit = temp % 10;
            freq[digit]++;
            temp /= 10;
        }
    }

    int max_freq = 0;
    int most_frequent_digit = 0;

    for (int i = 0; i < 10; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            most_frequent_digit = i;
        }
    }

    printf("Most frequent digit: %d (occurs %d times)\n", most_frequent_digit, max_freq);

    return 0;
}
