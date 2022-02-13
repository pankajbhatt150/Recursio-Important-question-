#include<cstring>
void replacePi(char input[]) 
{
    //BASE CASE
	if(input[0] == '\0')
        return;
    //RECURSIVE CALL
    replacePi(input+1);
    //CALCULATION
    int len = strlen(input); //this function do not count null character in length....eg strlen("abc") is 3 not 4
    if(input[0] == 'p' && input[1] == 'i')
    {
        for(int i=len+1; i>3; i--)//i=len+1 is for picking the position AFTER null-char of input not the position of null
        {
            input[i] = input[i-2];//here the element just before null is shifted to the place after null...so null
                                  // char automatically shifts in forward and space is created
        }
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
    }
}
