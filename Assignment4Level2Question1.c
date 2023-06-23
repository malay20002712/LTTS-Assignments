#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sensor_info {
  char sensor_id[3];
  float temperature;
  int humidity;
  int light_intensity;
};

void parse_data(char *data, struct sensor_info *sensor_info) {
  char *token;
  int i = 0;

  token = strtok(data, "-");
  while (token != NULL) {
    switch (i) {
      case 0:
        strcpy(sensor_info->sensor_id, token);
        break;
      case 1:
        sensor_info->temperature = atof(token);
        break;
      case 2:
        sensor_info->humidity = atoi(token);
        break;
      case 3:
        sensor_info->light_intensity = atoi(token);
        break;
    }
    i++;
    token = strtok(NULL, "-");
  }
}

void print_sensor_info(struct sensor_info *sensor_info) {
  printf("Sensor Info:\n");
  printf("---------------------\n");
  printf("Sensor ID: %s\n", sensor_info->sensor_id);
  printf("Temperature: %.2f C\n", sensor_info->temperature);
  printf("Humidity: %d\n", sensor_info->humidity);
  printf("Light Intensity: %d%%\n", sensor_info->light_intensity);
  printf("---------------------\n");
}

int main() {
  struct sensor_info sensor_info;
  char *data = "S1-T:36.5-H:100-L:50";

  parse_data(data, &sensor_info);
  print_sensor_info(&sensor_info);

  return 0;
}