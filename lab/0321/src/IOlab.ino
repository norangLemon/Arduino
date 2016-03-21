int x = 0;
void setup(){
    Serial.begin(9600);
}
void loop(){
    Serial.print("No format");
    Serial.print("\t");

    Serial.print("DEC");
    Serial.print("\t");

    Serial.print("HEX");
    Serial.print("\t");

    Serial.print("OCT");
    Serial.print("\t");

    Serial.print("BIN");
    Serial.print("\t");

    for(x = 0; x < 64; x++){
    Serial.print(x);
    Serial.print("\t");

    Serial.print(x, DEC);
    Serial.print("\t");

    Serial.print(x, HEX);
    Serial.print("\t");

    Serial.print(x, OCT);
    Serial.print("\t");

    Serial.print(x, BIN);

    delay(200);
    }
    Serial.println("");
}
