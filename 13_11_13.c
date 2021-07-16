#include <stdio.h>
#include <stdlib.h>
static const char ver[10]={' ','.','\'','\"','^','*','%','$','&','#'};
void reada(int row,int col,int a[row][col],FILE *fp)
{
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            fscanf(fp,"%d",&a[i][j]);
        }
    }
}
void writea(int row,int col,int a[row][col],FILE *fs)
{
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%c",ver[a[i][j]]);
            fprintf(fs,"%c",ver[a[i][j]]);
        }
        printf("\n");
        fprintf(fs,"\n");
    }
}
int main(int argc,char *argv[])
{
    FILE *fp,*fs;
    int row;
    int col;
    
    printf("please enter the row:"); //即使是变长数组，也要先知道[]里面的数
    scanf("%d",&row);
    printf("please enter the col:");
    scanf("%d",&col);
    
    int data[row][col];
    if((fs=fopen("graphy2.txt","w"))==NULL){
        printf("can not open");
        exit(EXIT_FAILURE);
    }
    if((fp=fopen("data.txt","r"))==NULL){
        printf("can not open");
        exit(EXIT_FAILURE);
    }
    reada(row,col,data,fp);
    writea(row,col,data,fs);
    fclose(fp);
    fclose(fs);
    return 0;
}
