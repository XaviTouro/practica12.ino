/********************************************************************
*Accionamento dunha lámpara mediante unha fonte de alimentación 
*a 24vCC. Esta solo se activará cando o led do pin 12 estea activo,
*tamén estará desactivado dependendo novamente do estado do pin 12.
* Autor: Javi Figueiro
* Data: 06/12/23
********************************************************************/

// C++ code
//
int pin_12_alta_pin_11_alta = 0;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(4000); // Wait for 4000 millisecond(s)
}
