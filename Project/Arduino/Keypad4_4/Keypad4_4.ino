#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {2, 3, 4, 5}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {6,7,8,9}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(9600);
}
  
void loop(){

  if (Serial.available()){
     char ch = Serial.read();
     if( ch == 'k'){
        Serial.write('90');
     }
  }
  
  char key = keypad.getKey();
    // just print the pressed key
  if (key == '2'){
    Serial.write("2");
  } 
  if (key == '3'){
    Serial.write("3");
  }
  if (key == '8'){
    Serial.write("8");
  } 
  if (key == '9'){
    Serial.write("9");
  } 
}
