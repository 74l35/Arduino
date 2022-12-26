/*
 * PROJETO 3: Semáforo simples
 * 
 */
 
// <!--- Definindo os pinos dos LEDs!>
int led_vermelho = 13;
int led_amarelo = 12;
int led_verde = 11;

void setup()
 
// <!--- Configurando os LEDs como saída>
{
  pinMode(led_vermelho,OUTPUT);
  pinMode(led_amarelo,OUTPUT);
  pinMode(led_verde,OUTPUT);
}

void loop() 
{
  digitalWrite(led_vermelho,HIGH);
  delay(10000); // 10 segundos
  digitalWrite(led_vermelho,LOW);

  digitalWrite(led_amarelo,HIGH);
  delay(5000); // 5 segundos
  digitalWrite(led_amarelo,LOW);

  digitalWrite(led_verde,HIGH);
  delay(20000); // 20 segundos
  digitalWrite(led_verde,LOW);
}  
