#include<iostream>
#include <conio.h>
int main()
{
char s[20];
 int sh=0;
 std::cout<<"Enter a string: ";
 std::cin.get(s,19);
 for(int i=0;s[i];i++){
        if(s[i]==' ')
            sh++;
    }
    std::cout<<"Number of words: "<<sh+1<<"\n";
    getch();
    return 0;
}
