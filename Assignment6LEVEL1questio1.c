#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *source_file = "source.txt";
    char *destination_file = "destination.txt";

    FILE *source_fp, *destination_fp;

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

    char buffer[1024];
    size_t size;

    while ((size = fread(buffer, 1, sizeof(buffer), source_fp)) > 0) {
        fwrite(buffer, 1, size, destination_fp);
    }

    fclose(source_fp);
    fclose(destination_fp);

    return 0;
}