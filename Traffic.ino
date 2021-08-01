int KPin = 7;
int SPin = 6;
int YPin = 5;

void setup(){
    pinMode(KPin, OUTPUT);
    pinMode(SPin, OUTPUT);
    pinMode(YPin, OUTPUT);
}
void loop(){
    DecideLight();
    delay(15000);
}
void DecideLight(){
    // yellow is open for 3 second and green close
    digitalWrite(YPin, LOW);
    digitalWrite(SPin, HIGH);
    delay(3000);
    //After 3 second yellow is closed and red is open for 5 second
    digitalWrite(SPin, LOW);
    digitalWrite(KPin, HIGH);
    delay(5000);
    //After 5 second red and yellow is open for 2 second (ready to green open)
    digitalWrite(SPin, HIGH);
    delay(2000);
    //After 2 second red and yellow is closed and green is open for 3 second
    digitalWrite(SPin, LOW);
    digitalWrite(KPin, LOW);
    digitalWrite(YPin, HIGH);
    delay(3000);
}
