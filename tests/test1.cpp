#include <stdio.h>
#include "SunriseCalc.h"

int month = 1;
int day = 1;
int year = 2019;

double lat = 59.334591;
double lon = 18.063240;
#define TIMEZONE +2

int main(int argc, char *argv[])
{
  SunriseCalc *location = new SunriseCalc(lat, lon, TIMEZONE);
  location->date(year, month, day, 0);
  int sunriseAt = location->sunrise();
  int sunsetAt = location->sunset();

  if (sunriseAt == 584 || sunsetAt == 957) {
    printf("Basic test (Sweden) succeeded\n");
  } else {
    printf("ERROR: Tests failed\n");
  }
  
  return 0;
}
