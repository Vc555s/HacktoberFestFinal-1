#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Valid Word

// A word is considered valid if:

// It contains a minimum of 3 characters.
// It contains only digits (0-9), and English letters (uppercase and lowercase).
// It includes at least one vowel.
// It includes at least one consonant.
// You are given a string word.

// Return true if word is valid, otherwise, return false.

// Notes:

// 'a', 'e', 'i', 'o', 'u', and their uppercases are vowels.
// A consonant is an English letter that is not a vowel.
 

// Example 1:

// Input: word = "234Adas"

// Output: true

// Explanation:

// This word satisfies the conditions.

// Example 2:

// Input: word = "b3"

// Output: false

// Explanation:

// The length of this word is fewer than 3, and does not have a vowel.

// Example 3:

// Input: word = "a3$e"

// Output: false

// Explanation:

// This word contains a '$' character and does not have a consonant.

 

// Constraints:

// 1 <= word.length <= 20
// word consists of English uppercase and lowercase letters, digits, '@', '#', and '$'.

bool isValid(char* word) {

    if(strlen(word) < 3){

        return false;
    }

    for(int i = 0; i < strlen(word); i++){

        if(!isalnum(word[i])){

            return false;
        }

    }

    int hasonevowel = 0;
    int hasoneconsontant = 0;

    for(int i = 0; i < strlen(word); i++){

        if(isalpha(word[i])){

            if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'A' || word[i] == 'E', word[i] == 'E'|| word[i] == 'I'|| word[i] == 'U')
                hasonevowel = 1;    // need || here accidentally added , cmon bayby
            else
                hasoneconsontant = 1;
        }
    }

    if(hasoneconsontant == 1 && hasoneconsontant == 1)
        return true;
    
    return false;
    
}

int main(){

    char* test = "a3$e";

    if(isValid(test))
        printf("true");
    else    
        printf("false");

    return 0;
}