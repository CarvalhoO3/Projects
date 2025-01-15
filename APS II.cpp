
const int pinoPotenciometro = A0;  
const int pinoLED = 13;          

void setup() {
 
  pinMode(pinoLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int valorPotenciometro = analogRead(pinoPotenciometro);
  
  Serial.println(valorPotenciometro);
  
  if (valorPotenciometro > 500) {
    digitalWrite(pinoLED, HIGH); 
  } else {
    digitalWrite(pinoLED, LOW);   
  }

  delay(100);
}

