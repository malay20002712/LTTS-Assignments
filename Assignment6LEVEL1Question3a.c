#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct LogEntry {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
};

int extract_log_entries(char *filename, struct LogEntry *log_entries, int max_entries) {
    FILE *fp;
    char line[1024];
    int i = 0;

    fp = fopen(test_file.txt, "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        if (i >= max_entries) {
            break;
        }

        // Create fields on the line.
        char *fields[6];
        int j = 0;
        for (char *token = strtok(line, ","); token != NULL; token = strtok(NULL, ",")) {
            fields[j++] = token;
        }

        // The array should contain the log entry.
        log_entries[i].entryNo = atoi(fields[0]);
        strcpy(log_entries[i].sensorNo, fields[1]);
        log_entries[i].temperature = atof(fields[2]);
        log_entries[i].humidity = atoi(fields[3]);
        log_entries[i].light = atoi(fields[4]);

        i++;
    }

    fclose(fp);

    return i;
}

int main() {
    struct LogEntry log_entries[100];
    int num_entries = extract_log_entries("C:\\Users\\DELL\\Desktop\\Malay\\DataAnalysis\\temperature_data.csv", log_entries, 100);

    return 0;
}
