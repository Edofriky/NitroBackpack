
float SetInicialPosition() {
  float movimiento();
  float rango1x = ax_m_s2 + 1;
  float rango2x = ax_m_s2 - 1;
  float rango1y = ay_m_s2 + 1;
  float rango2y = ay_m_s2 - 1;
  float rango1z = az_m_s2 + 1;
  float rango2z = az_m_s2 - 1;
  float InicialX = ax_m_s2;
  float InicialY = ay_m_s2;
  float InicialZ = az_m_s2;
 return (InicialX, InicialY, InicialY);

}
float movimiento() {
  // Leer las aceleraciones y velocidades angulares
  sensor.getAcceleration(&ax, &ay, &az);
  sensor.getRotation(&gx, &gy, &gz);
  float ax_m_s2 = ax * (9.81 / 16384.0);
  float ay_m_s2 = ay * (9.81 / 16384.0);
  float az_m_s2 = az * (9.81 / 16384.0);


  //Mostrar las lecturas separadas por un [tab]
  Serial.print("a[x y z](m/s2) g[x y z](deg/s):\t");
  Serial.print(ax_m_s2); Serial.print("\t");
  Serial.print(ay_m_s2); Serial.print("\t");
  Serial.println(az_m_s2); Serial.print("\t");




  delay(1000);

  return (ax_m_s2, ay_m_s2, az_m_s2);
}

