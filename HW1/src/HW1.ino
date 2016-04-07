const int LED1 = 2;
const int LED2 = 3;
const int LED3 = 4;
const int LED4 = 5;
const int LED5 = 6;
const int LED6 = 7;
const int LED7 = 8;
const int LED8 = 9;
const int LED9 = 10;
const int LED10 = 11;
const int LED11 = 12;
const int LED12 = 13;
//const int PTMETER = A0;
//const int BTN1 = A1;
//const int BTN2 = A2;
int currLED = LED1;
int prevLED = LED1;


void setup(){
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    pinMode(LED4, OUTPUT);
    pinMode(LED5, OUTPUT);
    pinMode(LED6, OUTPUT);
    pinMode(LED7, OUTPUT);
    pinMode(LED8, OUTPUT);
    pinMode(LED9, OUTPUT);
    pinMode(LED10, OUTPUT);
    pinMode(LED11, OUTPUT);
    pinMode(LED12, OUTPUT);

    pinMode(A0, INPUT);
    pinMode(A1, INPUT);
    pinMode(A2, INPUT);
    Serial.begin(9600);
}

void loop(){
    int ptm = analogRead(A0);
    int btn1 = analogRead(A1);
    int btn2 = analogRead(A2);

    currLED = 2 + (ptm*12/1024);
    digitalWrite(prevLED, LOW);
    digitalWrite(currLED, HIGH);
    Serial.print(btn1);
    Serial.print(", ");
    Serial.println(btn2);
    prevLED = currLED;
}
