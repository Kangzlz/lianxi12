/*辅助文件*/
#include<stdio.h>
int main(void){
    int ch;
    FILE *sfp,*dfp;
    char sname[FILENAME_MAX];
    char dname[FILENAME_MAX];
    printf("打开源文件：");scanf("%s",sname);
    printf("打开目标文件：");scanf("%s",dname);
    if((sfp=fopen(sname,"r"))==NULL)
    printf("\a打开文件失败。\n");
    else{
        if((dfp=fopen(dname,"w"))==NULL)
        printf("\a打开文件失败。\n");
        else{
            while((ch=fgetc(sfp))!=EOF)
            fputc(ch,dfp);
            fclose(dfp);
        }
        fclose(sfp);
    }
    return 0;
}