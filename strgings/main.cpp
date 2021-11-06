#include <stdio.h>

int main(){
    FILE *file=fopen("in.txt","rt");
    char c=0;
    bool quote=false;
    while(!feof(file)){
        fscanf(file,"%c",&c);
        if(c=='"'){
            if(quote)printf("\n");
            quote=!quote;
        }else if(quote)printf("%c",c);
    };
};