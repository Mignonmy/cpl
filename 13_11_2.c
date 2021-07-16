//包括了orgin和destination文件
#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 256
int main(int argc,char *argv[])
{
    FILE *fp_ori,*fp_dest;
    if((fp_ori=fopen(argv[1],"a+"))==NULL) {
        printf("can not open %s\n",argv[1]);
        exit(EXIT_FAILURE);
    }
    if((fp_dest=fopen(argv[2],"a+"))==NULL){
        printf("can not open %s\n",argv[2]);
        exit(EXIT_FAILURE);
    }
    char buff[BUFFER_SIZE];
    size_t bytes;
    while((bytes=fread(buff,sizeof(char),BUFFER_SIZE,fp_ori))>0){
        fwrite(buff,sizeof(char),bytes,fp_dest);
    }
    fclose(fp_ori);
    fclose(fp_dest);

    return 0;
}
