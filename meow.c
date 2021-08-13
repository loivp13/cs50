#include <cs50.h>
#include <stdio.h>

//tells compiler there will be this function
void meow(void)

//main program above
int main(void){
    for(int i = 0; i < 3; i++){
        meow();
    }
}


//helper functions below however compile works top to bottom;
//  to for solution copy name portion to top of the file;
void meow(void)
{
    printf("meow\n");
}