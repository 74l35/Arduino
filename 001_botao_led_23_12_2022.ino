/* SEGUNDO PROGRAMA (BOTÃO E LED)
   THALES ALVES DA SILVA 23/12/2022 */

int led = 13; // pino onde está ligado o LED
int botao = 12; // pino onde está ligado o botão

void setup()
{
  pinMode(led, OUTPUT); // direção do pino (saída)
  pinMode(botao, INPUT); // direção do pino (entrada)
}

void loop()
{
  if (digitalRead(botao) == 0) // Se o botão for igual a 0 liga o LED.
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW); // Se for igual a 1 desliga o LED.
  }
}
