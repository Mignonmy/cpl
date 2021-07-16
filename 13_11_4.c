#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[])
{
    FILE* fp;
    char ch;
    for(int i=1;i<argc;i++){
        if((fp=fopen(argv[i],"r"))!=NULL){
            printf("now print file:%s\n",argv[i]);
            while((ch=getc(fp))!=EOF){
                putchar(ch);
            }
            printf("\n");
            fclose(fp);
        }
        else{
            printf("error!");
            exit(EXIT_FAILURE);
        }
    }
    return 0;
}
