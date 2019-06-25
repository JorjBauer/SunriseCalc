#pragma once

//#include <Arduino.h>
#include <math.h>

class SunriseCalc {
 public:
  SunriseCalc(float lat, float lon, float tz);
  
  void date(int y, int m, int d, bool dst);

  int sunrise();
  int sunset();

 private:
  float toJulian(int y, int m, int d);

  void updateCalc();

 private:
  float lat, lon, tz;

  int year, month, day;
  bool isDST;

  bool calculated;
  float solarNoonLST;
  float sunriseLST;
  float sunsetLST;
};
