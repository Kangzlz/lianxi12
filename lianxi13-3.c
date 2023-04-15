#include<stdio.h>
typedef struct{
    char name[100];
    double height;
    double weight;
}Human;
void swap_Human(Human *pa,Human *pb){
    Human temp=*pa;
    *pa=*pb;
    *pb=temp;
}
void sort_by_height(Human a[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=n-1;j>i;j--)
            if(a[j-1].height>a[j].height)
            swap_Human(&a[j-1],&a[j]);
    }
}
int main(void){
    int i;
    FILE *fp;
    int ninzu=0;
    double hsum=0.0,wsum=0.0;
    Human std[100]={0};
    if((fp=fopen("hw.dat","r"))==NULL)
    printf("\a文件打开失败。\n");
    else{
        while(fscanf(fp,"%s%lf%lf",std[ninzu].name,&std[ninzu].height,&std[ninzu].weight)==3){
        printf("%-10s %5.1f %5.1f\n",std[ninzu].name,std[ninzu].height,std[ninzu].weight);
        hsum+=std[ninzu].height;
        wsum+=std[ninzu].weight;
        ninzu++;
        }
        sort_by_height(std,ninzu);
        puts("按身高排序了。");
        for(i=0;i<ninzu;i++)
        printf("%-10s %5.1f %5.1f\n",std[i].name,std[i].height,std[i].weight);
        printf("----------\n");
        printf("平均     %5.1f %5.1f\n",hsum/ninzu,wsum/ninzu);
        fclose(fp);
    }
    return 0;
}