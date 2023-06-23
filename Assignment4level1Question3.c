#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateTimeDifference(const struct Time* t1, const struct Time* t2) {
    struct Time difference;
    int seconds1, seconds2, timeDifference;
    seconds1 = t1->hours * 3600 + t1->minutes * 60 + t1->seconds;
    seconds2 = t2->hours * 3600 + t2->minutes * 60 + t2->seconds;

    timeDifference = seconds1 - seconds2;

    difference.hours = timeDifference / 3600;
    difference.minutes = (timeDifference % 3600) / 60;
    difference.seconds = (timeDifference % 3600) % 60;

    return difference;
}

int main() {
    struct Time t1, t2, difference;

    printf("Enter the first time period:\n");
    printf("Hours: ");
    scanf("%d", &(t1.hours));
    printf("Minutes: ");
    scanf("%d", &(t1.minutes));
    printf("Seconds: ");
    scanf("%d", &(t1.seconds));

    printf("Enter the second time period:\n");
    printf("Hours: ");
    scanf("%d", &(t2.hours));
    printf("Minutes: ");
    scanf("%d", &(t2.minutes));
    printf("Seconds: ");
    scanf("%d", &(t2.seconds));

    difference = calculateTimeDifference(&t1, &t2);

    printf("\n");
    printf("Difference between the time periods:\n");
    printf("Hours: %d\n", difference.hours);
    printf("Minutes: %d\n", difference.minutes);
    printf("Seconds: %d\n", difference.seconds);

    return 0;
}
