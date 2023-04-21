#include<stdio.h>
int main(void){
    FILE *fp;
    char fname[FILENAME_MAX];
    int ch,linenum=0;
    printf("文件名：");
    scanf("%s",fname);
    if((fp=fopen(fname,"r"))==NULL)
    printf("\a文件打开失败。\n");
    else{
        while((ch=fgetc(fp))!=EOF){
            putchar(ch);
            if(ch=='\n')
            linenum++;
        }
        printf("文件共有%d行。\n");
        fclose(fp);
    }
    return 0;
}