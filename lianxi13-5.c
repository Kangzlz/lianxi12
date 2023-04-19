#include<stdio.h>
#include<time.h>
char data_file[]="datatime.dat";
char mood[100];
void get_data(void){
    FILE *fp;
    if((fp=fopen(data_file,"r"))==NULL)
    printf("本程序第一次运行。\n");
    else{
        int year,month,day,h,m,s;
        fscanf(fp,"%d%d%d%d%d%d%s",&year,&month,&day,&h,&m,&s,mood);
        printf("上一次运行是在%d年%d月%d日%d时%d分%d秒。\n当时心情:%s!\n",year,month,day,h,m,s,mood);
        fclose(fp);
    }
}
void put_data(void){
    FILE *fp;
    time_t current=time(NULL);
    struct tm *timer=localtime(&current);
    printf("现在心情：");
    scanf("%s",mood);
    if((fp=fopen(data_file,"w"))==NULL)
    printf("\a无法打开文件。\n");
    else{
        fprintf(fp,"%d %d %d %d %d %d\n",
        timer->tm_year+1900,timer->tm_mon+1,timer->tm_mday,timer->tm_hour,timer->tm_min,timer->tm_sec);
        fprintf(fp,"%s\n",mood);
        fclose(fp);
    }
}
int main(void){
    get_data();
    put_data();
    return 0;
}