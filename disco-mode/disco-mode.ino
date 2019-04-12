// *****************************************************************
// *****************************************************************
// WARNING DO NOT USE THIS ON YOUR OWN CAR
// *****************************************************************
// *****************************************************************
// This sketch uses 125kbps steering can bus and NOT the 500kbps can bus the OBD2 plug uses
// PDO 'Car in a box' Disco mode
//
// Board library definition 1.6.21
// New nano ATmega328P bootloader
//
#include "mcp_can.h"                                  // version 24/03/17 from https://github.com/coryjfowler/MCP_CAN_lib
#include <SPI.h>                                      // version 1.0.0

MCP_CAN CAN0(10);     // Set CS to pin 10

void setup()
{
  Serial.begin(115200);

  // Initialize MCP2515 running at 8MHz with a baudrate of 125kb/s and the masks and filters disabled.
  if(CAN0.begin(MCP_ANY, CAN_125KBPS, MCP_8MHZ) == CAN_OK) Serial.println("MCP2515 Initialized Successfully!");
  else Serial.println("Error Initializing MCP2515...");

  CAN0.setMode(MCP_NORMAL);   // Change to normal mode to allow messages to be transmitted
}

const unsigned int  msg_id  = 0x094;
int                 index   = 0;
int                 interval  = 50;

void loop()
{
  byte dataa[8] = {0x02,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
  byte sndStata = CAN0.sendMsgBuf(msg_id, 0, 8, dataa);   // fog off
  if(sndStata == CAN_OK){
    Serial.println(F("Message Sent Successfully: "));
  } else {
    Serial.println(F("Error Sending Message..."));
  }
  index++;
  delay(interval);
  byte datab[8] = {0x0,0x0,0x40,0x0,0x0,0x0,0x0,0x0};
  byte sndStatb = CAN0.sendMsgBuf(msg_id, 0, 8, datab);   // left hand indicator
  if(sndStatb == CAN_OK){
    Serial.println(F("Message Sent Successfully: "));
  } else {
    Serial.println(F("Error Sending Message..."));
  }
  index++;
  delay(interval);
  byte datac[8] = {0x04,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
  byte sndStatc = CAN0.sendMsgBuf(msg_id, 0, 8, datac);   // fog on
  if(sndStatc == CAN_OK){
    Serial.println(F("Message Sent Successfully: "));
  } else {
    Serial.println(F("Error Sending Message..."));
  }
  index++;
  delay(interval);
  byte datad[8] = {0x0,0x0,0x80,0x0,0x0,0x0,0x0,0x0};
  byte sndStatd = CAN0.sendMsgBuf(msg_id, 0, 8, datad);   // right hand indicator
  if(sndStatd == CAN_OK){
    Serial.println(F("Message Sent Successfully: "));
  } else {
    Serial.println(F("Error Sending Message..."));
  }
  index++;
  delay(interval);
  byte datae[8] = {0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
  byte sndState = CAN0.sendMsgBuf(msg_id, 0, 8, datae);   // side lights
  if(sndState == CAN_OK){
    Serial.println(F("Message Sent Successfully: "));
  } else {
    Serial.println(F("Error Sending Message..."));
  }
  index++;
  delay(interval);
  byte dataf[8] = {0x0,0x0,0xC0,0x0,0x0,0x0,0x0,0x0};
  byte sndStatf = CAN0.sendMsgBuf(msg_id, 0, 8, dataf);   // hazard lights
  if(sndStatf == CAN_OK){
    Serial.println(F("Message Sent Successfully: "));
  } else {
    Serial.println(F("Error Sending Message..."));
  }
  index++;
  delay(interval);

  if (index > 80) {
    for (byte i = 1;i < 20;i++) {
      Serial.print("No lights,");
      byte data[8] = {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0};
      byte sndStat = CAN0.sendMsgBuf(msg_id, 0, 8, data);
      if(sndStat == CAN_OK){
        Serial.println(F("Message Sent Successfully: "));
      } else {
        Serial.println(F("Error Sending Message..."));
      }
      delay(interval*4);
    }
    byte dataw[8] = {0x0,0x02,0x0,0x0,0x0,0x0,0x0,0x0};
    byte sndStatw = CAN0.sendMsgBuf(msg_id, 0, 8, dataw);   // washer jets
    if(sndStatw == CAN_OK){
      Serial.println(F("Message Sent Successfully: "));
    } else {
      Serial.println(F("Error Sending Message..."));
    }
    index = 0;
  }
}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
