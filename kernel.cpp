/*
  this is a opensource kernel for arduino
  you can use this to create a OS
  for a arduino as a lowpowered computer.
 */
#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX

void setup() {
  int menuselect;
  // Open serial communications and wait for port to open:
  Serial.begin(57600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }


  Serial.println("MK Kernel loaded");
  delay(1000);
  Serial.println("initializing memory");
  char Memory1 = 0;
  char Memory2 = 0;
  char Memory3 = 0;
  char memory4 = 0;
  Serial.println("Memory initalized");
  delay(1000);
  Serial.println("initalizing cache");
  char cache = 0;
  delay(1000);
  Serial.println("loading boot Splash");
  delay(1000);
  Serial.println("||||||");
  Serial.println("||||||");
  Serial.println("||||||");
  Serial.println("||||||                        |||||||");
  Serial.println("||||||                        |||||||");
  Serial.println("||||||                        |||||||");
  Serial.println("||||||                        |||||||");
  Serial.println("||||||                        |||||||");
  Serial.println("||||||                        |||||||");
  Serial.println("||||||                        |||||||");
  Serial.println("||||||                        |||||||");
  Serial.println("||||||                        |||||||");
  Serial.println("||||||                        |||||||");
  Serial.println("||||||                        |||||||");
  Serial.println("||||||                        |||||||");
  Serial.println("||||||                        |||||||");
  Serial.println("||||||                        |||||||");
  Serial.println("||||||                        |||||||");
  Serial.println("||||||                        |||||||");
  Serial.println("|||||||||||||||||||||||||||||||||||||");
  Serial.println("|||||||||||||||||||||||||||||||||||||");
  Serial.println("|||||||||||||||||||||||||||||||||||||");
  Serial.println(" ========");
  Serial.println("Mk kernel");
    Serial.println("1% [*    ]");
  delay(1000);
    Serial.println("20% [**   ]");
  delay(1000);
    Serial.println("30% [***  ]");
  delay(1000);
    Serial.println("40% [*****]");
  delay(1000);
  Serial.flush();


  
  // your code here
  // you can store temporary things in the memory variables like :
  
  //memory 1
  //memory 2
  //memory 3
  //memory 4
  //cache
  
  // you do not need to initialize them the kernel will do it for you
  // to write memory you can use the char like : 


  //char memory1 = temp data here;

  // and you can use normal arduino code
  // notice this is a Operating system kernel that you can make your OS baised on this
  // this code or kernel connects the serial moniter and memory and other functions to your OS for arduino




  
}

void loop() { // run over and over
  if (Serial.available()) {
  }
}
 
