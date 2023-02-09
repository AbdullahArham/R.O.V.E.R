char message;

const int in1 = 2;
const int in2 = 4;

const int in3 = 7;
const int in4 = 8;

const int led = 11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available() > 0) {
    message = Serial.read();
  }

  if (message == 'w') {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);

    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
      
  } else if (message == 's') {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);

    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);

      
      
  } else if (message == 'e') {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);

    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);

      
  } else if (message == 'q') {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);

    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);

      
      
  } else if (message == 'd') {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);

    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);

      
      
  } else if (message == 'a') {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);

    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);

      
      
  } else {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);

    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }
}
