
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

uint16_t value;

void setup() //this is the initial function that will take place when you run the code 
{

  pinMode(D5, OUTPUT);
    Serial.begin(9600);
}

void loop()// this would loop your code infinetly (theoretically)
{
  uint16_t x =analogRead(A5);//this is claiming  the value of A5 as x wh
  Serial.println(x);
  digitalWrite(D5, HIGH);
  delay(x);
  digitalWrite(D5, LOW);
  delay(x);
  x = analogRead(A5);

}

