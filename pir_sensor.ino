int pir = 6;
int buzzer = 8;
int led = 7;
int pirState;

void setup () {
pinMode (pir, INPUT);
pinMode (buzzer, OUTPUT);
pinMode (led, OUTPUT);
}
void loop () {
pirState = digitalRead(pir);

    if (pirState==HIGH) {
    for (int x=0; x<5; x++) {
    digitalWrite (led, HIGH);
    digitalWrite (buzzer, HIGH);
    delay (1000);
    digitalWrite (led, LOW);
    digitalWrite (buzzer, LOW);
    delay (1000);
}
}
    else {
    digitalWrite (led, LOW);
    digitalWrite (buzzer, LOW);
}
}
