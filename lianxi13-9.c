/*复制文件转换为大写同时输出在目标文件和界面*/
#include<stdio.h>
#include<ctype.h>
int main(void){
    int ch;
    FILE *sfp,*dfp;
    char sname[FILENAME_MAX],dname[FILENAME_MAX];
    printf("打开原文件：");scanf("%s",sname);
    printf("打开目标文件：");scanf("%s",dname);
    if((sfp=fopen(sname,"r"))==NULL)
    printf("\a文件打开失败。\n");
    else{
        if((dfp=fopen(dname,"w"))==NULL)
        printf("\a文件打开失败。\n");
        else{
            while((ch=fgetc(sfp))!=EOF){
                putchar(toupper(ch));
                fputc(toupper(ch),dfp);
            }
            fclose(dfp);
        }
        fclose(sfp);
    }
    return 0;
}