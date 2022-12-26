/*
 * PROJETO 3: Semáforo simples
 * 
 */
 
// <!--- Definindo os pinos dos LEDs!>
int led_vermelho = 13;
int led_amarelo = 12;
int led_verde = 11;
int botao = 10;

void setup()
 
// <!--- Configurando os LEDs como saída>
{
  pinMode(led_vermelho,OUTPUT);
  pinMode(led_amarelo,OUTPUT);
  pinMode(led_verde,OUTPUT);
  pinMode(botao,INPUT);
}

void loop() 
{
// <!--- Lógica do Semáforo  Básico 1>
if(digitalRead(botao)==0)
{
  digitalWrite(led_verde,LOW);
  digitalWrite(led_amarelo,HIGH);
  delay(3000); // 3 segundos
  digitalWrite(led_amarelo,LOW);
  digitalWrite(led_vermelho,HIGH);
  delay(5000);
}
 else
 {
   digitalWrite(led_vermelho,LOW);
   digitalWrite(led_amarelo,LOW);
   digitalWrite(led_verde,HIGH);
 }
 
}  
