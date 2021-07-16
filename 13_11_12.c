#include <stdio.h>
#include <stdlib.h>
#define ROW 20
#define COL 30
int main(void)
{
    FILE *fp,*fs;
    int a[ROW][COL];
    if((fs=fopen("graphy1.txt","w"))==NULL){
        printf("can not open");
        exit(EXIT_FAILURE);
    }
    if((fp=fopen("data.txt","r"))==NULL){
        printf("can not open");
        exit(EXIT_FAILURE);
    }
    
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            fscanf(fp,"%d",&a[i][j]);
        }
    }
    
    char ver[10]={' ','.','\'','\"','^','*','%','$','&','#'};
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            printf("%c",ver[a[i][j]]);
            fprintf(fs,"%c",ver[a[i][j]]);
        }
        printf("\n");
        fprintf(fs,"\n");
    }
    fclose(fp);
    fclose(fs);
    return 0;
}
