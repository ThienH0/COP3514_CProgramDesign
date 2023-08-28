#include <stdio.h>

int main()
{
    int equipment_num, num_days, num_hrs;
    int equip1_4hr_rate = 7, equip1_daily_rate = 10, equip1_weekly_rate = 40;
    int equip2_4hr_rate = 27, equip2_daily_rate = 39, equip2_weekly_rate = 156;
    int equip3_4hr_rate = 61, equip3_daily_rate = 87, equip3_weekly_rate = 348;
    int equip4_4hr_rate = 59, equip4_daily_rate = 84, equip4_weekly_rate = 336;


    printf("Please select from four equipment: 1, 2, 3, and 4\n");
    printf("Enter equipment selection: %d\n", equipment_num);
    scanf("%d", &equipment_num);

    if (equipment_num < 1 || equipment_num > 4)
    {
        printf("Invalid selection. Select from 1 to 4.\n");
        return 0;
    }

    printf("Enter days: %d\n", num_days);
    scanf("%d", &num_days);

    if (num_hrs < 0 || num_hrs > 24)
    {
        printf("Invalid hours.\n");
        return 0;
    }



}