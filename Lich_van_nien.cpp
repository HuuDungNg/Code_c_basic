/*************************************************
*    Yêu cầu:                                    *
*    Viết chương trình nhập ngày, tháng, năm.    *
*    – Tháng có bao nhiêu ngày                   *
*    – Tìm ngày trước ngày vừa nhập.             *
*    – Tìm ngày sau ngày vừa nhập                *
**************************************************/

#include <stdio.h>

const int month_table[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int leap_month_table[]= {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//check leap year or not
#define IS_LEAP_YEAR(year) (((year%400 == 0) || (year%4 == 0 && year%100 != 0))? true : false)

bool validDate(int, int, int);
int getTotalDayinMonth(int, int);
void findPreDate(int*, int*, int*);
void findNextDate(int*, int*, int*);

int main(){
int day, month, year;
    int tempDay, tempMonth, tempYear;
    int sel;
    int totalDay;
    printf("******Calendar*********\n");
    do
    {
        printf("day = "); scanf("%d", &day);
        printf("\nmonth = "); scanf("%d", &month);
        printf("\nyear = "); scanf("%d", &year);
    }while(!validDate(day, month, year));
 
    printf("\n****Option****\n\
    1. Find the number of month\n\
    2. Find previous date\n\
    3. Find next date\n\
    Other. Exit");
    do
    {
        printf("\n\nSelect option: ");
        scanf("%d", &sel);
        switch(sel)
        {
            case 1:
                totalDay = getTotalDayinMonth(month, year);
                printf("\nThe number of month %d is: %d", month, totalDay);
                break;
            case 2:
                tempDay = day; tempMonth = month; tempYear = year;
                findPreDate(&tempDay, &tempMonth, &tempYear);
                if(validDate(tempDay, tempMonth, tempYear))
                {
                    printf("\nThe previous date is %02d/%02d/%04d", tempDay, tempMonth, tempYear);
                }
                else
                {
                    printf("\nThe date is invalid");
                }
                break;
            case 3:
                tempDay = day; tempMonth = month; tempYear = year;
                findNextDate(&tempDay, &tempMonth, &tempYear);
                if(validDate(tempDay, tempMonth, tempYear))
                {
                    printf("\nThe next date is %02d/%02d/%04d", tempDay, tempMonth, tempYear);
                }
                else
                {
                    printf("\nThe date is invalid");
                }      
                break;
            default:
                printf("\nExit");
        }
    }while(sel == 1 || sel == 2 || sel == 3);

    return 0;
}

int getTotalDayinMonth(int month, int year)
{
    return (IS_LEAP_YEAR(year) ? leap_month_table[month-1] : month_table[month-1]);
}

bool validDate(int day, int month, int year){
    // Validate dd/mm/yyy
    if(year < 1 || year > 9999 || month < 1 || month > 12 || day < 1 || day > 31){
        return false;
    }
    else if ( day > getTotalDayinMonth(month, year)){
        return false;
    }
    else return true;
}

void findPreDate(int *day, int* month, int* year)
{
 
    (*day)--;
    if (*day < 1)
    {
        (*month)--;
        if (*month < 1) { 
            (*year)--; 
            if(*year == 0) { 
                *month = 0; *day = 0; 
                return; 
            } 
            else *month = 12; 
            } 
            *day = getTotalDayinMonth(*month, *year); 
    } 
} 
void findNextDate(int *day, int* month, int* year) { 
    (*day)++; 
    if(*day > getTotalDayinMonth(*month, *year))
    {
        *day = 1;
        (*month)++;
        if (*month > 12)
        {
            *month = 1;
            (*year)++;
        }
    }
}
