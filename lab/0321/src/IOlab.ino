int currState = 0;
int prevState = 0;
const int swPin = 2;
const int ledPin = 13;

void setup(){
    Serial.begin(9600);
    pinMode(swPin, INPUT);
    pinMode(ledPin, OUTPUT);
}

void loop(){
    // sensing
    currState = digitalRead(swPin);
    int cnt = 0;
    int value = detectRisingEdge();
    prevState = currState;

    if (value) Serial.println(cnt++);

    delay(10);


}

int detectRisingEdge(){
    int result = 0;
    if(prevState == 0 && currState == 1){
        result = 1;
    }
    else {
        result = 0;
    }
    return result;
}
