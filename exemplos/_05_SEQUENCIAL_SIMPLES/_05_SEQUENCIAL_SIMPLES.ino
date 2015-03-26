/*****************************************************************
                 Arduino Day 2015  - 28/03/15 
                    Hands ON - Arduino UNO
                 Embarcados - www.embarcados.com.br
                     Autor: Fabio Souza
*****************************************************************/

/*
  Exemplo 5 - Sequencial temporizado
  acende segmentos externos em sentido horario com intervalo de 100 ms entre 
  segmentos
 */

const int PRIMEIRO = 8; // constante para o segmento A
const int ULTIMO = 13;  // constante para o segmento F

// configurações
void setup() {
  for (int i=PRIMEIRO; i<=ULTIMO; i++) { //varre pino i
    pinMode(i, OUTPUT);                  //configura como saida
  }
}

// loop principal
void loop() {
  for (int i=PRIMEIRO; i<=ULTIMO; i++) { //varre pino i
    digitalWrite(i, HIGH);               //liga segmento i
    delay(100);                          //aguarda tempo
    digitalWrite(i, LOW);                //desliga segmento i
  }
}