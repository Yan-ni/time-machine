#ifndef __FUNTIONS__H__
#define __FUNCTIONS__H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct date
{
    int day;
    int month;
    int year;
} date;

date get_date(void);
date get_todays_date(void);
int day_passed(date init);

#endif