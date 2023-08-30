#include <stdio.h>

int main()
{
    int equipment_num = 0, num_days = 0, num_week = 0, num_hrs = 0;
    int hr_rate = 0, day_rate = 0, wk_rate = 0, total = 0;
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

    printf("Enter days: ");
    scanf("%d", &num_days);

    if (num_days > 7){
        num_week = num_days / 7;
        num_days = num_days % 7;
    }
    else {
        num_week = 0;
    }

    printf("Enter hours: ");
    scanf("%d", &num_hrs);


    if (num_hrs < 0 || num_hrs > 24){
        printf("Invalid hours.\n");
        return 0;
    }

    switch (equipment_num) {

        case 1:
            if (num_hrs < 4) {
                hr_rate = equip1_4hr_rate;
            }
            if (num_hrs < 24 || num_days < 1) {
                day_rate = equip1_daily_rate;
            }
            if (num_week < 1) {
                wk_rate = equip1_weekly_rate;
            }
            total = hr_rate + day_rate + wk_rate;
            break;
    

        case 2:
            if (num_hrs < 4) {
                hr_rate = equip2_4hr_rate;
            }
            if (num_hrs < 24 || num_days < 1) {
                day_rate = equip2_daily_rate;
            }
            if (num_week < 1) {
                wk_rate = equip2_weekly_rate;
            }
            total = hr_rate + day_rate + wk_rate;
            break;
    

        case 3:
            if (num_hrs < 4) {
                hr_rate = equip3_4hr_rate;
            }
            if (num_hrs < 24 || num_days < 1) {
                day_rate = equip3_daily_rate;
            }
            if (num_week < 1) {
                wk_rate = equip3_weekly_rate;
            }
            total = hr_rate + day_rate + wk_rate;
            break;
    
        case 4:
            if (num_hrs < 4) {
                hr_rate = equip4_4hr_rate;
            }
            if (num_hrs < 24 || num_days < 1) {
                day_rate = equip4_daily_rate;
            }
            if (num_week < 1) {
                wk_rate = equip4_weekly_rate;
            }
            total = hr_rate + day_rate + wk_rate;
            break;
    }

    printf("Charge($): %d\n", total);
    return 0;
}