#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *source_file = argv[1];
    char *destination_file = argv[2];
    char *option = argv[3];

    FILE *source_fp, *destination_fp;
    char buffer[1024];
    size_t size;

    source_fp = fopen(source_file, "r");
    if (source_fp == NULL) {
        printf("Error opening source file\n");
        return 1;
    }

    destination_fp = fopen(destination_file, "w");
    if (destination_fp == NULL) {
        printf("Error opening destination file\n");
        return 1;
    }

    if (option == NULL) {
        while ((size = fread(buffer, 1, sizeof(buffer), source_fp)) > 0) {
            fwrite(buffer, 1, size, destination_fp);
        }
    } else if (strcmp(option, "-u") == 0) {
        while ((size = fread(buffer, 1, sizeof(buffer), source_fp)) > 0) {
            for (int i = 0; i < size; i++) {
                buffer[i] = toupper(buffer[i]);
            }
            fwrite(buffer, 1, size, destination_fp);
        }
    } else if (strcmp(option, "-l") == 0) {
        while ((size = fread(buffer, 1, sizeof(buffer), source_fp)) > 0) {
            for (int i = 0; i < size; i++) {
                buffer[i] = tolower(buffer[i]);
            }
            fwrite(buffer, 1, size, destination_fp);
        }
    } else if (strcmp(option, "-s") == 0) {
        while ((size = fread(buffer, 1, sizeof(buffer), source_fp)) > 0) {
            for (int i = 0; i < size; i++) {
                if (buffer[i] >= 'a' && buffer[i] <= 'z') {
                    buffer[i] -= 32;
                }
            }
            fwrite(buffer, 1, size, destination_fp);
        }
    } else {
        printf("Invalid option\n");
        return 1;
    }

    fclose(source_fp);
    fclose(destination_fp);

    return 0;
}