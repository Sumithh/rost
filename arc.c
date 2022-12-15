// Motor A connections
int left_motor = 9;
int in1 = 8;
int in2 = 7;
// Motor B connections
int right_motor = 3;
int in3 = 5;
int in4 = 4;


void setup() {
	// Set all the motor control pins to outputs
	pinMode(left_motor, OUTPUT);
	pinMode(right_motor, OUTPUT);
	pinMode(in1, OUTPUT);
	pinMode(in2, OUTPUT);
	pinMode(in3, OUTPUT);
	pinMode(in4, OUTPUT);
	
	// Turn off motors - Initial state
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, LOW);
}

void loop() {
  to_front();
  delay(500);
  to_reverse();
  delay(500);
}

void to_reverse() {
  analogWrite(left_motor, 255);
	analogWrite(right_motor, 255);


  digitalWrite(in1, HIGH);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, HIGH);
	delay(2000);
}

void to_front() {

    for(int i = 0; i < 255; i++) { 
  analogWrite(left_motor, i);
  analogWrite(right_motor, i);
  delay(1000);
    }

  digitalWrite(in1, LOW);
	digitalWrite(in2, HIGH);
	digitalWrite(in3, HIGH);
	digitalWrite(in4, LOW);
	delay(2000);

}