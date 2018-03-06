long ledPinA = 2;
long ledPinB = 3;
long ledPinC = 4;
long ledPinD = 6;
long ledPinE = 7;
long ledPinF = 8;
long ledPinG = 9;
long ledPinDP = 10;


void setup() {
  pinMode(ledPinA, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  pinMode(ledPinC, OUTPUT);
  pinMode(ledPinD, OUTPUT);
  pinMode(ledPinE, OUTPUT);
  pinMode(ledPinF, OUTPUT);
  pinMode(ledPinG, OUTPUT);
  pinMode(ledPinDP, OUTPUT);

}

void loop() {
  afficher0();
  delay(1000);
  afficher1();
  delay(1000);
  afficher2();
  delay(1000);
  afficher3();
  delay(1000);
  afficher4();
  delay(1000);
  afficher5();
  delay(1000);
  afficher6();
  delay(1000);
  afficher7();
  delay(1000);
  afficher8();
  delay(1000);
  afficher9();
  delay(1000);
  

}
void afficher0(){
  digitalWrite(ledPinA,HIGH);
  digitalWrite(ledPinB,HIGH);
  digitalWrite(ledPinC,HIGH);
  digitalWrite(ledPinD,HIGH);
  digitalWrite(ledPinE,HIGH);
  digitalWrite(ledPinF,HIGH);
  digitalWrite(ledPinG,LOW);
  digitalWrite(ledPinDP,LOW);
  }
  void afficher1(){
  digitalWrite(ledPinA,LOW);
  digitalWrite(ledPinB,HIGH);
  digitalWrite(ledPinC,HIGH);
  digitalWrite(ledPinD,LOW);
  digitalWrite(ledPinE,LOW);
  digitalWrite(ledPinF,LOW);
  digitalWrite(ledPinG,LOW);
  digitalWrite(ledPinDP,LOW);
  }
  void afficher2(){
  digitalWrite(ledPinA,HIGH);
  digitalWrite(ledPinB,HIGH);
  digitalWrite(ledPinC,LOW);
  digitalWrite(ledPinD,HIGH);
  digitalWrite(ledPinE,HIGH);
  digitalWrite(ledPinF,LOW);
  digitalWrite(ledPinG,HIGH);
  digitalWrite(ledPinDP,LOW);
  }
  void afficher3(){
  digitalWrite(ledPinA,HIGH);
  digitalWrite(ledPinB,HIGH);
  digitalWrite(ledPinC,HIGH);
  digitalWrite(ledPinD,HIGH);
  digitalWrite(ledPinE,LOW);
  digitalWrite(ledPinF,LOW);
  digitalWrite(ledPinG,HIGH);
  digitalWrite(ledPinDP,LOW);
  }
  void afficher4(){
  digitalWrite(ledPinA,LOW);
  digitalWrite(ledPinB,HIGH);
  digitalWrite(ledPinC,HIGH);
  digitalWrite(ledPinD,LOW);
  digitalWrite(ledPinE,LOW);
  digitalWrite(ledPinF,HIGH);
  digitalWrite(ledPinG,HIGH);
  digitalWrite(ledPinDP,LOW);
  }
  void afficher5(){
  digitalWrite(ledPinA,HIGH);
  digitalWrite(ledPinB,LOW);
  digitalWrite(ledPinC,HIGH);
  digitalWrite(ledPinD,HIGH);
  digitalWrite(ledPinE,LOW);
  digitalWrite(ledPinF,HIGH);
  digitalWrite(ledPinG,HIGH);
  digitalWrite(ledPinDP,LOW);
  }
  void afficher6(){
  digitalWrite(ledPinA,HIGH);
  digitalWrite(ledPinB,LOW);
  digitalWrite(ledPinC,HIGH);
  digitalWrite(ledPinD,HIGH);
  digitalWrite(ledPinE,HIGH);
  digitalWrite(ledPinF,HIGH);
  digitalWrite(ledPinG,HIGH);
  digitalWrite(ledPinDP,LOW);
  }
  void afficher7(){
  digitalWrite(ledPinA,HIGH);
  digitalWrite(ledPinB,HIGH);
  digitalWrite(ledPinC,HIGH);
  digitalWrite(ledPinD,LOW);
  digitalWrite(ledPinE,LOW);
  digitalWrite(ledPinF,LOW);
  digitalWrite(ledPinG,LOW);
  digitalWrite(ledPinDP,LOW);
  }
    void afficher8(){
  digitalWrite(ledPinA,HIGH);
  digitalWrite(ledPinB,HIGH);
  digitalWrite(ledPinC,HIGH);
  digitalWrite(ledPinD,HIGH);
  digitalWrite(ledPinE,HIGH);
  digitalWrite(ledPinF,HIGH);
  digitalWrite(ledPinG,HIGH);
  digitalWrite(ledPinDP,LOW);
  }
    void afficher9(){
  digitalWrite(ledPinA,HIGH);
  digitalWrite(ledPinB,HIGH);
  digitalWrite(ledPinC,HIGH);
  digitalWrite(ledPinD,HIGH);
  digitalWrite(ledPinE,LOW);
  digitalWrite(ledPinF,HIGH);
  digitalWrite(ledPinG,HIGH);
  digitalWrite(ledPinDP,LOW);
  }
