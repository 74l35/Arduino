/* PRIMEIRO PROGRAMA (PISCA LED)
   THALES ALVES DA SILVA 11/12/2022 */

int led = 13; // pino onde está ligado o LED

void setup() 
{
  pinMode(led,OUTPUT); // direção do pino (saída)
}

void loop() 
{
  digitalWrite(led,HIGH); //pino em nível alto (5 Volts)
  delay(1000);           //delay de 1 segundo
  digitalWrite(led,LOW);  //coloca o pino em nível baixo (GND)
  delay(1000);
}
