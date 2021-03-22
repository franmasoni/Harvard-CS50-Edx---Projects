#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Getting name
    string name = get_string("What is your name? ");

    //Printing the name with the hello
    printf("hello, %s\n", name);
}