#include<stdio.h>
int main(void){
    char s[34];
    printf("请输入文件名称:");
    scanf("%s",s);
    fopen(s,"w");
    return 0;
}