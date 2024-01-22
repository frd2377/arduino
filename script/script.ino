const int pin2 = 4;
const int pin1 = 7;
const int pin3 = 8;

void setup() {
  Serial.begin(9600);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
}

void loop() {
  char dato = Serial.read();

  if(dato=='1'){
    digitalWrite(pin1,HIGH);
  }
  else if(dato=='2'){
    digitalWrite(pin2,HIGH);
  }
  else if(dato=='3'){
    digitalWrite(pin3,HIGH);
  }
  else if(dato=='4'){
   encender();
  } 
  else if(dato=='5'){
    apagar();
  }
  
}

void encender() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
}

void apagar() {
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
}

void apagar(int pin) {
  digitalWrite(pin, LOW);
}
