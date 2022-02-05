
float sensorPin = A0;    // selecciona la entrada analogica
float sensorPin2=A1;

float sensorValue = 0;  // inicializa la variable de entrada
float adcCalculo=0;
void setup() {
Serial.begin(9600);
}

void loop() {
 // leer el convertidor
  sensorValue = analogRead(sensorPin)-analogRead(sensorPin2);
  adcCalculo= (sensorValue*500)/1024;
  /*
  Conversor de Bits en Grados Centigrados 
    Temperatura = (Valores del Sensor)*Voltaje/1024 
  */
  Serial.print("sensor = ");
  Serial.println(adcCalculo);
  delay(100);
}
