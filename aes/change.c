#include <stdio.h>
#include <string.h>

int main() {
    // Define the hexadecimal string
    char hexString[] = "39628bccc1cd48e45fddb5e89cbf9d2";

    // Calculate the length of the hex string
    int len = strlen(hexString);

    // Calculate the length of the char array needed (half of the hex string length)
    int charLen = len / 2;

    // Create a char array with the required length
    char charArray[charLen + 1]; // +1 for null terminator

    // Loop through the hex string and convert each pair of hexadecimal digits into a character
    for (int i = 0, j = 0; i < len; i += 2, j++) {
        // Extract two characters representing a hexadecimal number
        char hexPair[3] = { hexString[i], hexString[i + 1], '\0' };

        // Convert the hexadecimal string to an integer
        int value;
        sscanf(hexPair, "%x", &value);

        // Store the integer value in the char array
        charArray[j] = (char)value;
    }

    // Null-terminate the char array
    charArray[charLen] = '\0';

    // Print the char array
    printf("Char array: %s\n", charArray);

    return 0;
}
