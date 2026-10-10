#include <stdio.h>

int main() {
    //test case 1
    int s1, day1, hour1, minute1, second1;
    scanf("%d", &s1);

    day1 = s1 / 86400;
    hour1 = (s1 % 86400) / 3600;
    minute1 = (s1 % 3600) / 60;
    second1 = s1 % 60;

    if (day1 > 0) {
        printf("%d day %02d:%02d:%02d\n", day1, hour1, minute1, second1);
    } else {
        printf("%02d:%02d:%02d\n", hour1, minute1, second1);
    }

    //test case 2
    int s2, day2, hour2, minute2, second2;
    scanf("%d", &s2);

    day2 = s2 / 86400;
    hour2 = (s2 % 86400) / 3600;
    minute2 = (s2 % 3600) / 60;
    second2 = s2 % 60;

    if (day2 > 0) {
        printf("%d day %02d:%02d:%02d\n", day2, hour2, minute2, second2);
    } else {
        printf("%02d:%02d:%02d\n", hour2, minute2, second2);
    }

    //test case 3
    int s3, day3, hour3, minute3, second3;
    scanf("%d", &s3);

    day3 = s3 / 86400;
    hour3 = (s3 % 86400) / 3600;
    minute3 = (s3 % 3600) / 60;
    second3 = s3 % 60;

    if (day3 > 0) {
        printf("%d day %02d:%02d:%02d\n", day3, hour3, minute3, second3);
    } else {
        printf("%02d:%02d:%02d\n", hour3, minute3, second3);
    }

    //test case 4
    int s4, day4, hour4, minute4, second4;
    scanf("%d", &s4);

    day4 = s4 / 86400;
    hour4 = (s4 % 86400) / 3600;
    minute4 = (s4 % 3600) / 60;
    second4 = s4 % 60;

    if (day4 > 0) {
        printf("%d day %02d:%02d:%02d\n", day4, hour4, minute4, second4);
    } else {
        printf("%02d:%02d:%02d\n", hour4, minute4, second4);
    }

    //test case 5
    int s5, day5, hour5, minute5, second5;
    scanf("%d", &s5);

    day5 = s5 / 86400;
    hour5 = (s5 % 86400) / 3600;
    minute5 = (s5 % 3600) / 60;
    second5 = s5 % 60;

    if (day5 > 0) {
        printf("%d day %02d:%02d:%02d\n", day5, hour5, minute5, second5);
    } else {
        printf("%02d:%02d:%02d\n", hour5, minute5, second5);
    }
    return 0;
}