#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "example.txt";
    char content[] = "This is a simple text file demonstrating file operations in C.";
    char buffer[255];
    int character;

    // 1. Opening a file for writing
    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file for writing\n");
        return 1;
    }

    // 2. Writing data to the file using fprintf
    fprintf(file, "%s\n", content);
    printf("Data written to file using fprintf: %s\n", content);

    // 3. Writing data using fputs
    fputs("This is an additional line using fputs.\n", file);
    printf("Data written to file using fputs.\n");

    // 4. Writing a single character using fputc
    fputc('A', file);
    printf("Single character 'A' written using fputc.\n");

    // 5. Closing the file after writing
    fclose(file);
    printf("File closed after writing.\n");

    // 6. Opening the file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file for reading\n");
        return 1;
    }

    // 7. Reading data using fscanf
    fscanf(file, "%s", buffer);  // Read the first word from the file
    printf("First word read using fscanf: %s\n", buffer);

    // 8. Reading data using fgets
    fgets(buffer, sizeof(buffer), file);  // Read a line from the file
    printf("Line read using fgets: %s\n", buffer);

    // 9. Reading a single character using fgetc
    character = fgetc(file);  // Read a single character
    if (character != EOF) {
        printf("Single character read using fgetc: %c\n", character);
    }

    // 10. Checking for end-of-file using feof
    if (feof(file)) {
        printf("End of file reached.\n");
    }

    // 11. Moving the file pointer using fseek
    fseek(file, 0, SEEK_SET);  // Move the file pointer to the beginning of the file
    printf("File pointer moved to the beginning using fseek.\n");

    // 12. Getting the current file pointer position using ftell
    long position = ftell(file);
    printf("Current file pointer position using ftell: %ld\n", position);

    // 13. Checking for errors during file operations using ferror
    if (ferror(file)) {
        printf("Error occurred during file operations.\n");
    } else {
        printf("No errors occurred during file operations.\n");
    }

    // 14. Rewinding the file pointer using rewind
    rewind(file);  // Reset the file pointer to the beginning
    printf("File pointer rewound using rewind.\n");

    // 15. Closing the file after reading
    fclose(file);
    printf("File closed after reading.\n");

    return 0;
}
