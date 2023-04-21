/*显示文件内容及字符数*/
#include<stdio.h>
int main(void){
    int ch,cnum=0;
    FILE *fp;
    char fname[FILENAME_MAX];
    printf("文件名：");
    scanf("%s",fname);
    if((fp=fopen(fname,"r"))==NULL)
    printf("\a文件打开失败。\n");
    else{
        while((ch=fgetc(fp))!=EOF){
            putchar(ch);
            cnum++;
        }
        printf("\n字符数:%d。\n",cnum);
        fclose(fp);
    }
    return 0;
}