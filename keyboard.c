#include<stdio.h>
#include<string.h>
int main()
{
    char direction,string[105];
    int index, length;
    scanf("%c", &direction);
    scanf(" %s", string);
    length=strlen(string);
    if(direction=='R')
    {
        for(index=0; index<length; index++)
        {
            if(string[index]=='w')
                string[index]='q';
            else if(string[index]=='e')
                string[index]='w';
            else if(string[index]=='r')
                string[index]='e';
            else if(string[index]=='t')
                string[index]='r';
            else if(string[index]=='y')
                string[index]='t';
            else if(string[index]=='u')
                string[index]='y';
            else if(string[index]=='i')
                string[index]='u';
            else if(string[index]=='o')
                string[index]='i';
            else if(string[index]=='p')
                string[index]='o';
            else if(string[index]=='[')
                string[index]='p';
            else if(string[index]=='s')
                string[index]='a';
            else if(string[index]=='d')
                string[index]='s';
            else if(string[index]=='f')
                string[index]='d';
            else if(string[index]=='g')
                string[index]='f';
            else if(string[index]=='h')
                string[index]='g';
            else if(string[index]=='j')
                string[index]='h';
            else if(string[index]=='k')
                string[index]='j';
            else if(string[index]=='l')
                string[index]='k';
            else if(string[index]==';')
                string[index]='l';
            else if(string[index]=='x')
                string[index]='z';
            else if(string[index]=='c')
                string[index]='x';
            else if(string[index]=='v')
                string[index]='c';
            else if(string[index]=='b')
                string[index]='v';
            else if(string[index]=='n')
                string[index]='b';
            else if(string[index]=='m')
                string[index]='n';
            else if(string[index]==',')
                string[index]='m';
            else if(string[index]==';')
                string[index]='l';
            else if(string[index]=='.')
                string[index]=',';
            else if(string[index]=='/')
                string[index]='.';

            printf("%c",string[index]);
        }
    }

    else
    {
        for(index=0; index<length; index++)
        {
            if(string[index]=='q')
                string[index]='w';
            else if(string[index]=='w')
                string[index]='e';
            else if(string[index]=='e')
                string[index]='r';
            else if(string[index]=='r')
                string[index]='t';
            else if(string[index]=='t')
                string[index]='y';
            else if(string[index]=='y')
                string[index]='u';
            else if(string[index]=='u')
                string[index]='i';
            else if(string[index]=='i')
                string[index]='o';
            else if(string[index]=='o')
                string[index]='p';
            else if(string[index]=='a')
                string[index]='s';
            else if(string[index]=='s')
                string[index]='d';
            else if(string[index]=='d')
                string[index]='f';
            else if(string[index]=='f')
                string[index]='g';
            else if(string[index]=='g')
                string[index]='h';
            else if(string[index]=='h')
                string[index]='j';
            else if(string[index]=='j')
                string[index]='k';
            else if(string[index]=='k')
                string[index]='l';
            else if(string[index]=='z')
                string[index]='x';
            else if(string[index]=='x')
                string[index]='c';
            else if(string[index]=='c')
                string[index]='v';
            else if(string[index]=='v')
                string[index]='b';
            else if(string[index]=='b')
                string[index]='n';
            else if(string[index]=='n')
                string[index]='m';
            else if(string[index]=='l')
                string[index]=';';
            else if(string[index]=='m')
                string[index]=',';
            else if(string[index]==',')
                string[index]='.';
            else if(string[index]=='.')
                string[index]='/';
            printf("%c",string[index]);

        }
    }

    return 0;


}
