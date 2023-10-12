#include <Arduino.h>

float a = 1;
float b = 2;
float c;
float chieu_dai_duong_cheo(float canh_dai, float canh_ngan);
void setup()
{
  Serial.begin(9600);
  c=chieu_dai_duong_cheo(a, b);
  Serial.println(c);
}

void loop()
{
  // put your main code here, to run repeatedly:
}
float chieu_dai_duong_cheo(float canh_dai, float canh_ngan)
{
  float KetQua;
  KetQua = sqrt(canh_dai * canh_dai + canh_ngan * canh_ngan);
  return KetQua;
}
