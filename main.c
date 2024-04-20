#include <stdio.h>
#include "hangman.h"
#include <string.h>
int main ()
{
    char secret[16];
    get_word(secret);
    printf("%s\n", secret);
    printf("%d\n", is_word_guessed("secret", "aeiou"));
    // prints: 0
    printf("%d\n", is_word_guessed("hello", "aeihoul"));
    // prints: 1

    char result1[30];
    get_guessed_word("container", "arpstxgoieyu", result1);
    printf("%s\n", result1);
    // result = "_o_tai_er"
    char result2[30];
    get_available_letters("arpstxgoieyu", result2);
    printf("%s\n", result2);
    // result = "bcdfhjklmnqvwz"



    
    return 0;
}