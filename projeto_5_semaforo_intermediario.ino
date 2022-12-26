/*
 * PROJETO 3: Semáforo simples
 * 
 */
 
// <!--- Definindo os pinos dos LEDs!>
int led_vermelho = 13;
int led_amarelo = 12;
int led_verde = 11;
int botao = 10;

int led_verm_p = 9;
int led_verd_p = 8;
void setup()
 
// <!--- Configurando os LEDs como saída>
{
  pinMode(led_vermelho,OUTPUT);
  pinMode(led_amarelo,OUTPUT);
  pinMode(led_verde,OUTPUT);
  pinMode(botao,INPUT);
  pinMode(led_verm_p,OUTPUT);
  pinMode(led_verd_p,OUTPUT);
  
}

void loop() 
{
// <!--- Lógica do Semáforo  Básico 1>
if(digitalRead(botao)==0)
{
  digitalWrite(led_verde,LOW);
  
  digitalWrite(led_amarelo,HIGH);
  delay(3000);
  digitalWrite(led_verm_p,LOW);
  digitalWrite(led_amarelo,LOW);
  
  digitalWrite(led_vermelho,HIGH);
  digitalWrite(led_verd_p,HIGH);
  delay(10000);
  
  digitalWrite(led_verd_p,LOW);
  
  digitalWrite(led_verm_p,HIGH);
  delay(1000);
  digitalWrite(led_verm_p,LOW);
  delay(1000);
  
  digitalWrite(led_verm_p,HIGH);
  delay(1000);
  digitalWrite(led_verm_p,LOW);
  delay(1000);

   digitalWrite(led_verm_p,HIGH);
  delay(1000);
  digitalWrite(led_verm_p,LOW);
  delay(1000);
  
  digitalWrite(led_verm_p,HIGH);
  delay(1000);
  digitalWrite(led_verm_p,LOW);
  delay(1000);
}
 else
{
  digitalWrite(led_verde,HIGH);
  digitalWrite(led_amarelo,LOW);
  digitalWrite(led_vermelho,LOW);

  digitalWrite(led_verm_p,HIGH);
  digitalWrite(led_verd_p,LOW);
}

}
