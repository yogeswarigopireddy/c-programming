#include <stdio.h>
int main() {
    FILE *source_file, *destination_file;
    char source_filename[50], destination_filename[50], c;
    printf("enter source file name: ");
    scanf("%s", source_filename);
    source_file = fopen(source_filename, "r");
    if (source_file == NULL) {
        printf("Error: Could not open %s\n", source_filename);
        return 1;
    }
    printf("Enter destination file name: ");
    scanf("%s", destination_filename);
    destination_file = fopen(destination_filename, "w");
    if (destination_file == NULL) {
        printf("Error: Could not create %s\n", destination_filename);
        fclose(source_file);
        return 1;
    }
    while ((c = fgetc(source_file)) != EOF) {
        fputc(c, destination_file);
    }
    printf("Contents of %s copied to %s successfully.\n", source_filename, destination_filename);
    fclose(source_file);
    fclose(destination_file);
    return 0;
}

