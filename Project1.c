#include <stdio.h>

int main()
{
    int equipment_num, num_days, num_hrs;;


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

    return 0;

}