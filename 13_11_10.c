#include <stdlib.h>
#include <stdio.h>
#define MAX 256
int main(void)
{
    char filename[20];
    FILE *fp;
    int position;
    char temp[MAX];
    printf("please enter the name of file:");
    scanf("%s",filename);
    if((fp=fopen(filename,"r"))==NULL){
        printf("can not open");
        exit(EXIT_FAILURE);
    }
    else{
        printf("please enter the position(# to quit):");
        while(scanf("%d",&position)==1){
            fseek(fp,position,SEEK_SET);
            while(fgets(temp,MAX,fp)!=NULL){
                printf("%s",temp);
            }
        }
    }
}
