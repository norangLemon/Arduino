int swPin = 2;
int ledPin = 13;
int cnt = 0;

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
        //Serial.println("HIGH");
        cnt++; // 누른 시간동안 계속 카운트됨
    }else{
        digitalWrite(ledPin, LOW);
        //Serial.println("LOW");
    }
    Serial.println(cnt);
    Serial.println(swValue);
    delay(200);
}
