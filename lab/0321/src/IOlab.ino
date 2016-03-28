// 3월 28일
int potValue = 0;
const int MAX = 1023;
int ledSink = 9; 
int ledDrive = 8;


int State = 4, Next = 4;

void setup(){
    pinMode(ledSink, OUTPUT);
    pinMode(ledSink, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    //sensing
    potValue = analogRead(A0);

    // Action: forwording the pot value
    //Serial.println(potValue);
   
    // judgement and classification
    if(potValue < MAX/4){
        Next = 0;
    }else if(potValue < MAX/2){
        Next = 1;
    }else if(potValue < MAX*3/4){
        Next = 2;
    }else{
        Next = 3;
    }

    if (State != Next){
        State = Next;
        Serial.print(potValue);
        switch (State){
            case 0:
                digitalWrite(ledDrive, LOW);
                digitalWrite(ledSink, HIGH);
                Serial.println(" A");
                break;
            case 1:
                digitalWrite(ledDrive, LOW);
                digitalWrite(ledSink, LOW);
                Serial.println(" B");
                break;
            case 2:
                digitalWrite(ledDrive, HIGH);
                digitalWrite(ledSink, HIGH);
                Serial.println(" C");
                break;
            case 3:
                digitalWrite(ledDrive, HIGH);
                digitalWrite(ledSink, LOW);
                Serial.println(" D");
                break;
        }
    }
    
    delay(30); /// for our perception
}
