#include <stdio.h>

void vulnerable_function() {
    char buffer[10];  // Fixed-size buffer (only 10 bytes)

    printf("Enter some text: ");


    gets(buffer);     // Warning: gets() is unsafe and causes buffer overflow vulnerabilities!

    // To avoid buffer overflow, replace gets(buffer) with a safer function, such as fgets(), which allows specifying the maximum number of characters:
    
    //fgets(buffer, sizeof(buffer), stdin);  // Safe input with bounds checking

    printf("You entered: %s\n", buffer);
}

int main() {
    vulnerable_function();
    return 0;
}
