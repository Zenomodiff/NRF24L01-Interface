//feel free to contact
//sreeramaj53@gmail.com
//www.youtube.com/ZenoModiff

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(7, 8);  // CE, CSN

const byte address[6] = "00001";

void setup()
{
  radio.begin();
  
  radio.openWritingPipe(address);
 
  radio.stopListening();
}
void loop()
{

  const char text[] = "Hello iam NRF24LO1";
  radio.write(&text, sizeof(text));
  
  delay(1000);
}
