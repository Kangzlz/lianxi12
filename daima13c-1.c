/*显示当前日期和时间*/
#include<stdio.h>
#include<time.h>
int main(void){
    time_t current=time(NULL);
    struct tm *timer=localtime(&current);
    char *wday_name[]={"日","一","二","三","四","五","六"};
    printf("当前日期为%d年%d月%d日(%s)%d时%d分%d秒已过%d天。\n",
    timer->tm_year+1900,
    timer->tm_mon+1,
    timer->tm_mday,
    wday_name[timer->tm_wday],
    timer->tm_hour,        
    timer->tm_min,
    timer->tm_sec,
    timer->tm_yday 
    );
    return 0;
}