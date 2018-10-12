#include <ESP8266WiFi.h>

WiFiClient espClient;

void setup() {

  Serial.begin(115200);


  char* cred[][2] = {
    {"Digital_Building", "Eco$1$tem@"},
    {"DigitalSchool", "@bestlab"}
  };

  //WiFi.begin(cred[1][0], cred[1][1]);

    WiFi.begin ("Digital_Building" , "Eco$1$tem@" );

  Serial.println("Connecting to WiFi...");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("Success!");
  Serial.print("IP Address is: ");
  Serial.println(WiFi.localIP());


}


void loop() {

}
