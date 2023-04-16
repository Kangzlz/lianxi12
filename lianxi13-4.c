#include<stdio.h>
#include<time.h>
int main(void){
    FILE *fp;
    char name[100];
    double height,weight;
    puts("请输入姓名 身高 体重。");
    scanf("%s %lf %lf",name,&height,&weight);
    if((fp=fopen("dd_dat","w"))==NULL)
    printf("\a无法打开文件。");
    else{
        puts("写出姓名 身高 体重。");
        fprintf(fp,"%-15s %6.1f %6.1f\n",name,height,weight );
        fclose(fp);
    }
    return 0;
}