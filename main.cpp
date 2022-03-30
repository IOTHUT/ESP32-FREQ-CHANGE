#include <Arduino.h>

//*************************************************************************************************
// valores tipicamente aceitos (cristal de 40 MHz)
// 240, 160 e 80 MHz
// 40,  20  e 10 MHz
// consulte a frequencia do cristal oscilador do ESP que voce possui em maos para ter certeza disso
//*************************************************************************************************



#define ESP_FREQ 160             //define valor para frequencia do CPU_CLK em MHzs


void setup() {
  
  setCpuFrequencyMhz(ESP_FREQ); //funcao para alterar frequencia do ESP32

  Serial.begin(115200);         //inicia serial
   
}


void loop() {

  Serial.println("CPU FREQ    --> " + String(ESP.getCpuFreqMHz()) + " MHz");
  Serial.println("XTal Freq   --> " + String(getXtalFrequencyMhz()) + " MHz");
  Serial.println("Cycle Count --> " + String(ESP.getCycleCount() / 1000000) + " M");
  Serial.println();

  delay(1000);
}



