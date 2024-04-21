#include <stdio.h>

int main() {
    int workedHours, overtimeHours = 0, weeklySalary, weeklyOvertimeSalary, totalEarningsPerWeek;
    float netPay, taxLevel1 = 0.15, taxLevel2 = 0.20, taxLevel3 = 0.25;

    printf("Please enter the number of hours you worked in a week: ");
    scanf("%i", &workedHours);

    if (workedHours > 40) {
        overtimeHours = workedHours - 40;
        workedHours -= overtimeHours;
    }

    weeklySalary = workedHours * 12; // per hr the worker gets paid 12$
    weeklyOvertimeSalary = overtimeHours * 18; // per hr the worker gets paid 18%
    totalEarningsPerWeek = weeklySalary + weeklyOvertimeSalary;

    printf("overtime Hours %i, worked hours %i \n", overtimeHours, workedHours);
    printf("weeklySalary %i, weeklyOvertimeSalary %i \n", weeklySalary, weeklyOvertimeSalary);
    printf("total earnings per week %i\n", totalEarningsPerWeek);

    float taxAmount = 0.0;
    if (totalEarningsPerWeek <= 300) {
        taxAmount = totalEarningsPerWeek * taxLevel1;
    } else if (totalEarningsPerWeek <= 450) {
        taxAmount = 300 * taxLevel1 + (totalEarningsPerWeek - 300) * taxLevel2;
    } else {
        taxAmount = 300 * taxLevel1 + 150 * taxLevel2 + (totalEarningsPerWeek - 450) * taxLevel3;
    }

    netPay = totalEarningsPerWeek - taxAmount;

    printf("Tax amount for the week: %.2f\n", taxAmount);
    printf("The net pay is %f", netPay);

    return 0;
}
