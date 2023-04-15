#include<stdio.h>
int main(void){
    FILE *fp;
    char wen[12];
    printf("请输入文件名:");
    scanf("%s",wen);
    fp=fopen(wen,"r");
    if(fp==NULL)
    printf("\a无法打开文件\"wen\"\n");
    else{
        printf("\a成功打开了文件\"wen\"\n");
        fclose(fp);
    }
    return 0;
}