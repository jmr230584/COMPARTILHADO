// Define o pino do LED embutido
const int ledPin = 13;

void setup() {
  // Inicializa o pino do LED como saída
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Liga o LED
  digitalWrite(ledPin, HIGH);
  // Aguarda 1 segundo
  delay(1000);
  // Desliga o LED
  digitalWrite(ledPin, LOW);
  // Aguarda mais 1 segundo
  delay(1000);
}

