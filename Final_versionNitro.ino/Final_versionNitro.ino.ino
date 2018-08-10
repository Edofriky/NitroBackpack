#include <SPI.h>
#include <MFRC522.h>
#include "I2Cdev.h"
#include "MPU6050.h"
#include "Wire.h"

#define RST_PIN  9    //Pin 9 para el reset del RC522
#define SS_PIN  10   //Pin 10 para el SS (SDA) del RC522
MFRC522 mfrc522(SS_PIN, RST_PIN); ///Creamos el objeto para el RC522
MPU6050 sensor;

// Valores RAW (sin procesar) del acelerometro y giroscopio en los ejes x,y,z
int ax, ay, az;
int gx, gy, gz;
float ax_m_s2 = ax * (9.81 / 16384.0);
float ay_m_s2 = ay * (9.81 / 16384.0);
float az_m_s2 = az * (9.81 / 16384.0);
int activado = 0;
float rango1x = 0;
float rango2x = 0;
float rango1y = 0;
float rango2y = 0;
float rango1z = 0;
float rango2z = 0;

void setup() {
  Serial.begin(9600); //Iniciamos La comunicacion serial
  SPI.begin();        //Iniciamos el Bus SPI
  mfrc522.PCD_Init(); // Iniciamos el MFRC522
  if (sensor.testConnection()) Serial.println("Sensor iniciado correctamente");
  else Serial.println("Error al iniciar el sensor");
  Serial.println("Control de acceso:");

}

void loop() {
  LecturaTarjeta();

}




