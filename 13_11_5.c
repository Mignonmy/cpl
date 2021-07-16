#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFSIZE 4096
void contrat (FILE* ,FILE* );
int main (int argc,char* argv[])
{
    FILE *fo; //fo指向源文件，fg指向目标文件
    FILE *fg;
    int addf=0; //目标文件数量
    int index; //附加文件索引下标
    char ch;

    if((fo=fopen(argv[1],"a+"))==NULL){
        fprintf(stderr,"can not open the origin file.\n");
        exit(EXIT_FAILURE);
    }
    if(setvbuf(fo,NULL,_IOFBF,BUFSIZE)!=0){
        fputs("can not creat a output buffer\n",stderr);
        exit(EXIT_FAILURE);
    }

    addf=argc-2; //以两个附加文件为例，这里的值是2
    index=argc-addf;

    if(argc<3){
        printf("lack of goalfile!");
    }
    else{

        for(int i=0;i<addf;i++,index++){
            if(strcmp(argv[1],argv[index])==0){
                printf("the origin file is the same as the goal file.");
                break;
            }
            else if((fg=fopen(argv[index],"r"))==NULL) {
                printf("can not open the goalfile:%s.",argv[index]);
            }
            else {
                if(setvbuf(fg,NULL,_IOFBF,BUFSIZE)!=0)
                {   printf("can not creat a input buffer.");}
                    contrat(fo,fg);
                    if(ferror(fo)!=0){
                        fprintf(stderr,"error in writing the file:%s.\n",argv[1]);
                    }
                    if(ferror(fg)!=0){
                        fprintf(stderr,"error in reading the file:%s.\n",argv[index]);
                    }
                    fclose(fg);
                    printf("file:%s writing sucessfully.\n",argv[index]);
            
        }
        }

    }
    rewind(fo);
    printf("the whole result is:");
    while((ch=getc(fo))!=EOF){
        putchar(ch);
    }
    fclose(fo);
    return 0;
}
void contrat (FILE* fo,FILE* fg)
{
    size_t byte;
    static char temp[BUFSIZE]; //只分配一次

    while((byte=fread(temp,sizeof(char),BUFSIZE,fg))>0){
        fwrite(temp,sizeof(char),byte,fo);
    }
}
