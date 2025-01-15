// Defina os pinos do DIP switch
const int dipA = 2; // Pino A (MSB)
const int dipB = 3; // Pino B
const int dipC = 4; // Pino C
const int dipD = 5; // Pino D (LSB)

// Defina os pinos dos segmentos do display de 7 segmentos
const int segA = 6;
const int segB = 7;
const int segC = 8;
const int segD = 9;
const int segE = 10;
const int segF = 11;
const int segG = 12;

void setup() {
  // Configurar os pinos do DIP switch como entradas
  pinMode(dipA, INPUT);
  pinMode(dipB, INPUT);
  pinMode(dipC, INPUT);
  pinMode(dipD, INPUT);

  // Configurar os pinos dos segmentos como saídas
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
}

void loop() {
  // Ler as entradas do DIP switch
  int a = digitalRead(dipA);
  int b = digitalRead(dipB);
  int c = digitalRead(dipC);
  int d = digitalRead(dipD);

  // Resetar o display antes de cada exibição
  resetDisplay();

  // Combinar as entradas A, B, C, D para definir o que será exibido
  if (a == 0 && b == 0 && c == 0 && d == 0) {
    // Mostrar o número 8
    show8();
  } else if (a == 0 && b == 0 && c == 0 && d == 1) {
    // Mostrar a letra A
    showA();
  } else if (a == 0 && b == 0 && c == 1 && d == 0) {
    // Mostrar a letra L
    showL();
  } else if (a == 0 && b == 1 && c == 0 && d == 0) {
    // Mostrar a letra E
    showE();
  } else if (a == 1 && b == 0 && c == 0 && d == 0) {
    // Mostrar a letra H
    showH();
  }
}

// Função para resetar o display (desligar todos os segmentos)
void resetDisplay() {
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, LOW);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, LOW);
}

// Funções para exibir as letras e números
void show8() {
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
}

void showA() {
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, LOW);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
}

void showL() {
  digitalWrite(segA, LOW);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, LOW);
}

void showE() {
  digitalWrite(segA, HIGH);
  digitalWrite(segB, LOW);
  digitalWrite(segC, LOW);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
}

void showH() {
  digitalWrite(segA, LOW);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, LOW);
  digitalWrite(segE, HIGH);
  digitalWrite(segF, HIGH);
  digitalWrite(segG, HIGH);
}

