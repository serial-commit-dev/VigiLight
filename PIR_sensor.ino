int val;

int Pir_pin = 7;
int Home_light1 = 6; //RED
int Home_light2 = 5; //GREEN


void setup() {
  Serial.begin(9600);

  pinMode(Pir_pin, INPUT);
  pinMode(Home_light1, OUTPUT); //inner light
  pinMode(Home_light2, OUTPUT); // Street Light

}

void loop() {

  
   
  val = digitalRead(Pir_pin);
  Serial.println(val);

  if (val == 1) {
    Blink_home_light();
    Serial.println("Motion Detected");

  } else if (val == 0) {
    Blink_no_light();
    Serial.println("Motion not Detected");
  }

  delay(200);

  
}

void Blink_home_light() {
  digitalWrite(Home_light1, HIGH);
  delay(100);
  digitalWrite(Home_light1, LOW);
  delay(100);

  digitalWrite(Home_light2, HIGH);
  delay(100);
  digitalWrite(Home_light2, LOW);
  delay(100);

  digitalWrite(Home_light1, HIGH);
  delay(100);
  digitalWrite(Home_light1, LOW);
  delay(100);

  digitalWrite(Home_light2, HIGH);
  delay(100);
  digitalWrite(Home_light2, LOW);
  delay(100);

  digitalWrite(Home_light1, HIGH);
  delay(100);
  digitalWrite(Home_light1, LOW);
  delay(100);

  digitalWrite(Home_light2, HIGH);
  delay(100);
  digitalWrite(Home_light2, LOW);
  delay(100);

  digitalWrite(Home_light1, HIGH);
  delay(100);
  digitalWrite(Home_light1, LOW);
  delay(100);

  digitalWrite(Home_light2, HIGH);
  delay(100);
  digitalWrite(Home_light2, LOW);
  delay(100);

  digitalWrite(Home_light1, HIGH);
  delay(100);
  digitalWrite(Home_light1, LOW);
  delay(100);

  digitalWrite(Home_light2, HIGH);
  delay(100);
  digitalWrite(Home_light2, LOW);
  delay(100); // Light 1 & 2 blinks 5 times
}

void Blink_no_light() {
  digitalWrite(Home_light1, LOW);
  digitalWrite(Home_light2, LOW);
}

