#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int getnumber(FILE *fs)
{
    int i;
    char temp[MAX];
    rewind(fs);
    while(fgets(temp,MAX,fs)!=NULL){
        i++;
    }
    
    return i;
}
int main(void)
{
    FILE *fp;
    char word[MAX];
    if((fp=fopen("words","a+"))==NULL){
        printf("can not open");
        exit(EXIT_FAILURE);
    }
    else{
        printf("please enter the word you want to add(# to quit):");
        int cnt;
        cnt=getnumber(fp);
        while((fscanf(stdin,"%s",word)==1)&&(word[0]!='#')){
            fprintf(fp,"%d %s\n",++cnt,word);
        }
    }
    fclose(fp);
    return 0;
}
