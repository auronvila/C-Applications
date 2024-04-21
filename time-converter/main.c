#include <stdio.h>

int main() {
    double minutes;
    printf("Welcome to the Minute to Days and Hours Converter\n");

    printf("Please enter the number of minutes you want to convert: ");
    scanf("%lf", &minutes);

    double hours = minutes / 60;
    double days = hours / 24;
    double years = days / 365;

    printf("%.2lf minutes is equivalent to:\n", minutes);
    printf("%.2lf hours\n", hours);
    printf("%.2lf days\n", days);
    printf("%lf years\n", years);

    return 0;
}
