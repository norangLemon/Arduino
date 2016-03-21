int swPin = 2;
int ledPin = 13;

void setup(){
    pinMode(swPin, INPUT);
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}
void loop(){
    // sensing part
    int swValue = digitalRead(swPin);
    
    // judge & action part -> forwarding
    if (swValue == HIGH){
        digitalWrite(ledPin, HIGH);
        Serial.println("HIGH");
    }else{
        digitalWrite(ledPin, LOW);
        Serial.println("LOW");
    }
    Serial.println(swValue);
    delay(20);
}
