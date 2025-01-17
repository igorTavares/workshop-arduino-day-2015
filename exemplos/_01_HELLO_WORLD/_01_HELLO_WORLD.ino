/*
  Workshop do Embarcados no Arduino Day 2015
  Fabio Souza
  Igor Tavares
  
  Exemplo 1 - Hello World
  Pisca o led ligado ao pino 13 do arduino em intervalos de 1 seg
 */
 
//cria uma constante para dar um nome ao pino 13 do arduino
const int LED = 13;

// configurações
void setup() {                
  // inicializa pino do que o led está ligado como saída
  pinMode(LED, OUTPUT);     
}

// loop principal
void loop() {
  digitalWrite(LED, HIGH);   //liga led
  delay(1000);               // aguarda 1 seg
  digitalWrite(LED, LOW);    // desliga led
  delay(1000);               // aguarda 1 seg
}
