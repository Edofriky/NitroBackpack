void comprobarAlarma(float InicialX, float InicialY, float InicialZ){
  while (activado == 1) {
  movimiento();
  if (   InicialX < rango1x || InicialX > rango2x); {
    ActivaAlarma();
  }
  if (   InicialY < rango1y || InicialY > rango2y); {
    ActivaAlarma();
  }
  if (   InicialZ < rango1z || InicialZ > rango2z); {
    ActivaAlarma();
  }

}
}

void ActivaAlarma() {
  digitalWrite(8, HIGH);
}
void ApagaAlarma() {
  digitalWrite(8, LOW);
}

