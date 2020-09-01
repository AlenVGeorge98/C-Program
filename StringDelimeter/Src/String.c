
#include<stdio.h>
int delimeter(char string[])
{

    int i=0,len=0;
    len = strlen(string);


     for(i=0; i<len; i++)
        {
            if(string[i]=='_')
            {
               string[i]=',' ;
            }
        }

     return(string);
}
