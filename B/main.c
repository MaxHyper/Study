#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdlib.h>


#define WRONG_ARGUMENTS (-1)
#define MAX_FILE_LENGTH (10000)
#define  WORD_MAX (20)
int main(int args,char * argv[]) {
    char c = 0;
    if (args != 3){
        printf("WRONG_ARGUMENTS , 2 files needed");
        return WRONG_ARGUMENTS;
    }

    FILE *f = fopen(argv[1], "r");
    char *text = malloc(MAX_FILE_LENGTH);
    int o=0;
    if (f) {
     while ((c = getc(f)) != EOF) {
         text[o] = c;
         o++;
     }
         text[o]='\0';
    }
    FILE *dict = fopen(argv[2], "r");

    char  temp[WORD_MAX];
    int counter=0;
    char translations[50][2][WORD_MAX];
    while(fgets(temp,WORD_MAX*WORD_MAX,dict)!=NULL) {
        if(sscanf(temp, "%s - %s", translations[counter][0], translations[counter][1])==2)
            counter++;
    }


    puts(text);
    char *ret;
    int i, count = 0;

    for (i = 0; text[i] != '\0'; i++)
    {
        for (int x=0; x<= 1; x++)
            if (strstr(&text[i], translations[x][0]) == &text[i])
            {
                count++;
                i += strlen(translations[x][0]) - 1;
            }
    }
    for (int x=0; x<= 1; x++)
        ret = (char *)malloc(i + count * (translations[x][1] - translations[x][0]));

    if (ret == NULL)
        return NULL;
    i = 0;
    while (*text)

    {
        int found=0;
        for (int x=0; x<= (counter-1) &&found==0; x++) {
            if (strstr(text, translations[x][0]) == text) //compare the substring with the new string
            {
                strcpy(&ret[i], translations[x][1]);
                i += strlen(translations[x][1]); //adding newlength to the new string
                text += strlen(translations[x][0]);//adding the same old length the old string
                found=1;
            }// else
               // ret[i++] = *s++;
        }
        if(!found)
            ret[i++] = *text++;
    }
    ret[i] = '\0';

    printf("%s\n", ret);
    fputs(ret,f);
    fclose(f);
    f = fopen(argv[1], "w");
    fputs(ret,f);
    fclose(f);

//get dictionary
    //get word
    return 0;
}
