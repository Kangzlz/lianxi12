#include<stdio.h>
int main(void){
    int i;
    FILE *fp;
    double pi[10];
    if((fp=fopen("PI.ban","wb"))==NULL)
    printf("\a文件打开失败。\n");
    else{
    for(i=0;i<10;i++){
        printf("pi[%d]=",i);scanf("%lf",&pi[i]);
        }
        fwrite(&pi,sizeof(double),10,fp);
        fclose(fp);
    }
    if((fp=fopen("PI.ban","rb"))==NULL)
    printf("\a文件打开失败。\n");
    else{
        fread(&pi,sizeof(double),10,fp);
        for(i=0;i<10;i++)
            printf("pi[%d]:%f\n",i,pi[i]);
        fclose(fp);
    }
    return 0;
}