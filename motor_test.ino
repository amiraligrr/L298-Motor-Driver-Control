

// #define en1 3
// #define in1 4
// #define in2 5

// #define in3 6
// #define in4 7
// #define en2 8
#define en1 6
#define in1 7
#define in2 5 
#define in3 4
#define in4 2
#define en2 3
// #define in5 8
// #define in6 7
// #define en3 9
// int s =0;
// #define ir A0
// #define br A1

void setup() {
  //  pinMode(in5, OUTPUT);
  // pinMode(in6, OUTPUT);
  // pinMode(en3, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);
  // pinMode(ir, INPUT);
  // pinMode(br, INPUT);
  Serial.begin(9600);
  
}
void loop()
{
forward();
delay(1000);
stop_m();
delay(1000);
right();
delay(1000);
left();
delay(1000);
}





void stop_m()
{
  digitalWrite(in1, 0);
  digitalWrite(in2, 0);
  analogWrite(en1, 0);

  digitalWrite(in3, 0);
  digitalWrite(in4, 0);
  analogWrite(en2, 0);
}

void right()
{
  digitalWrite(in1, 1);
  digitalWrite(in2, 0);
  analogWrite(en1, 255);

  digitalWrite(in3, 0);
  digitalWrite(in4, 0);
  analogWrite(en2, 0);
}
void left()
{
  digitalWrite(in3, 1);
  digitalWrite(in4, 0);
  analogWrite(en2, 255);

  digitalWrite(in1, 0);
  digitalWrite(in2, 0);
  analogWrite(en1, 0);
}
void forward()
{
  digitalWrite(in1, 1);
  digitalWrite(in2, 0);
  analogWrite(en1, 255);

  digitalWrite(in3, 1);
  digitalWrite(in4, 0);
  analogWrite(en2, 255);
}

void p_on()
{
  // digitalWrite(in5, 1);
  // digitalWrite(in6, 0);
  // analogWrite(en3, 200);

 
}
void p_off()
{
  // digitalWrite(in5, 0);
  // digitalWrite(in6, 0);
  // analogWrite(en3, 0);

 
}
