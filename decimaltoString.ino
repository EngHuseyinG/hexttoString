

int buffer[] = {18529, 27489, 28192, 24930, 26912, 28261, 8292, 27001, 28526};  // HG + UU +  S

void setup() {
    Serial.begin(115200); 
}

void loop() {


String final = "";

for (int i = 0; i < (sizeof(buffer)/sizeof(int)); i++) {

    final = final + String((char)highByte(buffer[i])) + String((char)lowByte(buffer[i])) ;
    
}
Serial.println(final);
/// Word = (HByte x 256)  + LByte

delay(1000);

}
