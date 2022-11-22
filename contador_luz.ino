int c = 0;

int b = 0;
int bb = 0;

int i = 0;

int j = 0;

#define pinBotao 4

#define sensor 8

void setup()
{
  pinMode(A5, INPUT);
  pinMode(A4, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(pinBotao, INPUT_PULLUP);
  pinMode(sensor, INPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  bool estadoBotao = !digitalRead( pinBotao );
  if (estadoBotao) {
     c = 0;
  } 
  i= analogRead(A5);
 
 
  if (i < 850) {
    digitalWrite(LED_BUILTIN, HIGH);
    if (b == 0) {
      c = (c + 1);
    }
   b = 1;
    delay(2000); // Wait for 2000 millisecond(s)
  } else {
    digitalWrite(LED_BUILTIN, LOW);
   b = 0;
  }
  
 /* j= analogRead(A4);
  if (j < 600) {
    digitalWrite(2, HIGH);
    if (bb == 0) {
      c = (c - 1);
    }
    bb = 1;
    delay(2000); // Wait for 2000 millisecond(s)
  } else {
    digitalWrite(2, LOW);
    bb = 0;
  }*/
  
  Serial.println(c);
  
  delay(1000);
}
