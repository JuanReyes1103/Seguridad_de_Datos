#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(5000);

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(700);

  DigiKeyboard.print(F("powershell -NoExit -c "));
  DigiKeyboard.print(F("\"$h=$Host.UI.RawUI;"));

  // Pantalla roja
  DigiKeyboard.print(F("$h.BackgroundColor='DarkRed';cls;"));
  DigiKeyboard.print(F("[console]::beep(900,300);"));
  DigiKeyboard.print(F("Write-Host 'SECURITY ALERT';Start-Sleep 1;"));

  // Pantalla azul
  DigiKeyboard.print(F("$h.BackgroundColor='DarkBlue';cls;"));
  DigiKeyboard.print(F("Write-Host 'Initializing USB Setup...' -f Cyan;"));
  DigiKeyboard.print(F("Write-Progress -Activity 'Processing' -PercentComplete 0;Start-Sleep 1;"));
  DigiKeyboard.print(F("Write-Progress -Activity 'Processing' -PercentComplete 50;Start-Sleep 1;"));
  DigiKeyboard.print(F("Write-Progress -Activity 'Processing' -PercentComplete 100;Start-Sleep 1;"));

  // Crear carpeta y archivo
  DigiKeyboard.print(F("$p=$env:USERPROFILE+'\\Desktop\\USB_Project';"));
  DigiKeyboard.print(F("mkdir $p -Force;"));
  DigiKeyboard.print(F("'Project by Juan - USB Demo'|Out-File($p+'\\Report.txt');"));

  // Final verde
  DigiKeyboard.print(F("cls;$h.BackgroundColor='Black';"));
  DigiKeyboard.print(F("Write-Host 'SETUP COMPLETE' -f Green\""));

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop(){}