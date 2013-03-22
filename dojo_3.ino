// identificar o led vermelho1
// identificar o led amarelo1
// identificar o led verde1
// identificar o led vermelho2
// identificar o led verde2
// identificar o led amarelo2
// Piscar leds vermelho1 e amarelo1 em sequencia
// Piscar leds vermelho1, amarelo1 e verde1 em sequencia
// Piscar leds vermelho1, amarelo1 e verde1 e vermelhor2 em sequencia
// Piscar leds vermelho1, amarelo1 e verde1 e vermelho2 e amarelo2 em sequencia
// Piscar leds vermelho1, amarelo1 e verde1 e vermelho2 e amarelo2 e verde2 em sequencia
// Receber valor do potenciometro
// Pegar valor do potenciometro e alterar delay do tempo.
// Arrumar a range do potenciometro

int led_vermelho1 = 13;
int led_amarelo1 = 11;
int led_verde1 = 9;
int led_vermelho2 = 12;
int led_amarelo2 = 10;
int led_verde2 = 8;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led_vermelho1, OUTPUT);
  pinMode(led_amarelo1, OUTPUT); 
  pinMode(led_verde1, OUTPUT);
  pinMode(led_vermelho2, OUTPUT);
  pinMode(led_amarelo2, OUTPUT);
  pinMode(led_verde2, OUTPUT);
  Serial.begin(9600);
}

int led_atual = 5;
int vetor_de_leds[] = {13,11, 9, 12, 10, 8};

// the loop routine runs over and over again forever:
void loop() {
  
  //if (led_atual == 6) {
     //led_atual = 0;
  //}
  trocar_led();
  delay(recuperarValorPotenciometro());
}

int recuperarValorPotenciometro(){  
  return 100 + analogRead(A0);
}

void trocar_led( ){
  
  digitalWrite(vetor_de_leds[led_atual++], LOW);
  if (led_atual == 6) {
     led_atual = 0;
  }
  digitalWrite(vetor_de_leds[led_atual], HIGH);
}
