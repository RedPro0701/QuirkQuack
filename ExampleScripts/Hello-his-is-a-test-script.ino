#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  
  DigiKeyboard.println("notepad");
  DigiKeyboard.delay(1000);
  
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  
  DigiKeyboard.println("MsgBox \"Hello, this is a test script\"");
  DigiKeyboard.println("Set objForm = CreateObject(\"Scripting.FileSystemObject\")");
  DigiKeyboard.println("Set objFile = objForm.CreateTextFile(\"C:\\\\Temp\\\\test.vbs\", True)");
  DigiKeyboard.println("objFile.WriteLine \"<input type=\"\"button\"\" value=\"\"Close\"\" onclick=\"\"window.close()\"\">\"");
  DigiKeyboard.println("objFile.Close");
  
  DigiKeyboard.delay(1000);
  
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_CTRL_LEFT);
  DigiKeyboard.delay(1000);
  
  DigiKeyboard.println("test.vbs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
}

void loop() {
}
