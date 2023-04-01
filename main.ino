
void setup() {
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
}

void loop() {
    int led = random(8,11);
    int _time = random (100,1000);
    digitalWrite(led, HIGH);
    delay(_time);
    digitalWrite(led, LOW);
    delay(_time);
}



