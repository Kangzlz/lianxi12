#include<stdio.h>
int main(void){
    int ch;
    FILE *sfp,*dfp;
    char sname[FILENAME_MAX],dname[FILENAME_MAX];
    printf("原文件：");scanf("%s",sname);
    printf("目标文件：");scanf("%s",dname);
    if((sfp=fopen(sname,"rb"))==NULL)
    printf("\a文件打开失败。\n");
    else{
        if((dfp=fopen(dname,"wb"))==NULL)
        printf("\a文件打开失败。\n");
        else{
            while(fread(&ch,1,1,sfp)>0)
            fwrite(&ch,1,1,dfp);
            fclose(dfp);
        }
        fclose(sfp);
    }
    return 0;
}