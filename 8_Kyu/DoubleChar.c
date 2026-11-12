// https://www.codewars.com/kata/56b1f01c247c01db92000076/train/c

// Given a string, you have to return a string in which each character (case-sensitive) is repeated once.
// Examples (Input -> Output):
// * "String"      -> "SSttrriinngg"
// * "Hello World" -> "HHeelllloo  WWoorrlldd"
// * "1234!_ "     -> "11223344!!__  "
// Good Luck!

char *double_char (const char *string, char *doubled) {
    char *dest = doubled;

    while (*string != '\0') {
        *dest++ = *string;
        *dest++ = *string;
        string++;
    }

    *dest = '\0';

    return doubled;
}