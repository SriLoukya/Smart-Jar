#include <WiFi.h>
#include "ThingSpeak.h"

const int trig = 4;
const int echo = 5;

const char* ssid = "BRAHMA";   // your network SSID (name)
const char* password = "brnpdvmr";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1567638;
const char * myWriteAPIKey = "EA2RYS0TP6E9B76O";


//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float space_left;
float percentage_filled;
float init_ht = 10;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  WiFi.mode(WIFI_STA);

  ThingSpeak.begin(client);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
    // Clears the trigPin
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echo, HIGH);

    // Calculate the distance
    space_left = duration * SOUND_SPEED / 2;
    percentage_filled = ((init_ht - space_left) / init_ht) * 100;

    // Prints the distance in the Serial Monitor

    Serial.print("Space left(cm): ");
    Serial.println(space_left);
    ThingSpeak.setField(1, space_left);
    ThingSpeak.setField(2, percentage_filled);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(3000);
  }#include <WiFi.h>
#include "ThingSpeak.h"

const int trig = 4;
const int echo = 5;

const char* ssid = "BRAHMA";   // your network SSID (name)
const char* password = "brnpdvmr";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1567638;
const char * myWriteAPIKey = "EA2RYS0TP6E9B76O";


//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float space_left;
float percentage_filled;
float init_ht = 10;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  WiFi.mode(WIFI_STA);

  ThingSpeak.begin(client);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
    // Clears the trigPin
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echo, HIGH);

    // Calculate the distance
    space_left = duration * SOUND_SPEED / 2;
    percentage_filled = ((init_ht - space_left) / init_ht) * 100;

    // Prints the distance in the Serial Monitor

    Serial.print("Space left(cm): ");
    Serial.println(space_left);
    ThingSpeak.setField(1, space_left);
    ThingSpeak.setField(2, percentage_filled);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(3000);
  }#include <WiFi.h>
#include "ThingSpeak.h"

const int trig = 4;
const int echo = 5;

const char* ssid = "BRAHMA";   // your network SSID (name)
const char* password = "brnpdvmr";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1567638;
const char * myWriteAPIKey = "EA2RYS0TP6E9B76O";


//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float space_left;
float percentage_filled;
float init_ht = 10;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  WiFi.mode(WIFI_STA);

  ThingSpeak.begin(client);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
    // Clears the trigPin
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echo, HIGH);

    // Calculate the distance
    space_left = duration * SOUND_SPEED / 2;
    percentage_filled = ((init_ht - space_left) / init_ht) * 100;

    // Prints the distance in the Serial Monitor

    Serial.print("Space left(cm): ");
    Serial.println(space_left);
    ThingSpeak.setField(1, space_left);
    ThingSpeak.setField(2, percentage_filled);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(3000);
  }#include <WiFi.h>
#include "ThingSpeak.h"

const int trig = 4;
const int echo = 5;

const char* ssid = "BRAHMA";   // your network SSID (name)
const char* password = "brnpdvmr";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1567638;
const char * myWriteAPIKey = "EA2RYS0TP6E9B76O";


//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float space_left;
float percentage_filled;
float init_ht = 10;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  WiFi.mode(WIFI_STA);

  ThingSpeak.begin(client);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
    // Clears the trigPin
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echo, HIGH);

    // Calculate the distance
    space_left = duration * SOUND_SPEED / 2;
    percentage_filled = ((init_ht - space_left) / init_ht) * 100;

    // Prints the distance in the Serial Monitor

    Serial.print("Space left(cm): ");
    Serial.println(space_left);
    ThingSpeak.setField(1, space_left);
    ThingSpeak.setField(2, percentage_filled);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(3000);
  }#include <WiFi.h>
#include "ThingSpeak.h"

const int trig = 4;
const int echo = 5;

const char* ssid = "BRAHMA";   // your network SSID (name)
const char* password = "brnpdvmr";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1567638;
const char * myWriteAPIKey = "EA2RYS0TP6E9B76O";


//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float space_left;
float percentage_filled;
float init_ht = 10;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  WiFi.mode(WIFI_STA);

  ThingSpeak.begin(client);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
    // Clears the trigPin
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echo, HIGH);

    // Calculate the distance
    space_left = duration * SOUND_SPEED / 2;
    percentage_filled = ((init_ht - space_left) / init_ht) * 100;

    // Prints the distance in the Serial Monitor

    Serial.print("Space left(cm): ");
    Serial.println(space_left);
    ThingSpeak.setField(1, space_left);
    ThingSpeak.setField(2, percentage_filled);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(3000);
  }#include <WiFi.h>
#include "ThingSpeak.h"

const int trig = 4;
const int echo = 5;

const char* ssid = "BRAHMA";   // your network SSID (name)
const char* password = "brnpdvmr";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1567638;
const char * myWriteAPIKey = "EA2RYS0TP6E9B76O";


//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float space_left;
float percentage_filled;
float init_ht = 10;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  WiFi.mode(WIFI_STA);

  ThingSpeak.begin(client);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
    // Clears the trigPin
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echo, HIGH);

    // Calculate the distance
    space_left = duration * SOUND_SPEED / 2;
    percentage_filled = ((init_ht - space_left) / init_ht) * 100;

    // Prints the distance in the Serial Monitor

    Serial.print("Space left(cm): ");
    Serial.println(space_left);
    ThingSpeak.setField(1, space_left);
    ThingSpeak.setField(2, percentage_filled);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(3000);
  }#include <WiFi.h>
#include "ThingSpeak.h"

const int trig = 4;
const int echo = 5;

const char* ssid = "BRAHMA";   // your network SSID (name)
const char* password = "brnpdvmr";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1567638;
const char * myWriteAPIKey = "EA2RYS0TP6E9B76O";


//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float space_left;
float percentage_filled;
float init_ht = 10;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  WiFi.mode(WIFI_STA);

  ThingSpeak.begin(client);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
    // Clears the trigPin
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echo, HIGH);

    // Calculate the distance
    space_left = duration * SOUND_SPEED / 2;
    percentage_filled = ((init_ht - space_left) / init_ht) * 100;

    // Prints the distance in the Serial Monitor

    Serial.print("Space left(cm): ");
    Serial.println(space_left);
    ThingSpeak.setField(1, space_left);
    ThingSpeak.setField(2, percentage_filled);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(3000);
  }#include <WiFi.h>
#include "ThingSpeak.h"

const int trig = 4;
const int echo = 5;

const char* ssid = "BRAHMA";   // your network SSID (name)
const char* password = "brnpdvmr";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1567638;
const char * myWriteAPIKey = "EA2RYS0TP6E9B76O";


//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float space_left;
float percentage_filled;
float init_ht = 10;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  WiFi.mode(WIFI_STA);

  ThingSpeak.begin(client);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
    // Clears the trigPin
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echo, HIGH);

    // Calculate the distance
    space_left = duration * SOUND_SPEED / 2;
    percentage_filled = ((init_ht - space_left) / init_ht) * 100;

    // Prints the distance in the Serial Monitor

    Serial.print("Space left(cm): ");
    Serial.println(space_left);
    ThingSpeak.setField(1, space_left);
    ThingSpeak.setField(2, percentage_filled);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(3000);
  }#include <WiFi.h>
#include "ThingSpeak.h"

const int trig = 4;
const int echo = 5;

const char* ssid = "BRAHMA";   // your network SSID (name)
const char* password = "brnpdvmr";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1567638;
const char * myWriteAPIKey = "EA2RYS0TP6E9B76O";


//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float space_left;
float percentage_filled;
float init_ht = 10;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  WiFi.mode(WIFI_STA);

  ThingSpeak.begin(client);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
    // Clears the trigPin
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echo, HIGH);

    // Calculate the distance
    space_left = duration * SOUND_SPEED / 2;
    percentage_filled = ((init_ht - space_left) / init_ht) * 100;

    // Prints the distance in the Serial Monitor

    Serial.print("Space left(cm): ");
    Serial.println(space_left);
    ThingSpeak.setField(1, space_left);
    ThingSpeak.setField(2, percentage_filled);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(3000);
  }#include <WiFi.h>
#include "ThingSpeak.h"

const int trig = 4;
const int echo = 5;

const char* ssid = "BRAHMA";   // your network SSID (name)
const char* password = "brnpdvmr";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1567638;
const char * myWriteAPIKey = "EA2RYS0TP6E9B76O";


//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float space_left;
float percentage_filled;
float init_ht = 10;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  WiFi.mode(WIFI_STA);

  ThingSpeak.begin(client);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
    // Clears the trigPin
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echo, HIGH);

    // Calculate the distance
    space_left = duration * SOUND_SPEED / 2;
    percentage_filled = ((init_ht - space_left) / init_ht) * 100;

    // Prints the distance in the Serial Monitor

    Serial.print("Space left(cm): ");
    Serial.println(space_left);
    ThingSpeak.setField(1, space_left);
    ThingSpeak.setField(2, percentage_filled);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(3000);
  }#include <WiFi.h>
#include "ThingSpeak.h"

const int trig = 4;
const int echo = 5;

const char* ssid = "BRAHMA";   // your network SSID (name)
const char* password = "brnpdvmr";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1567638;
const char * myWriteAPIKey = "EA2RYS0TP6E9B76O";


//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float space_left;
float percentage_filled;
float init_ht = 10;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  WiFi.mode(WIFI_STA);

  ThingSpeak.begin(client);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
    // Clears the trigPin
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echo, HIGH);

    // Calculate the distance
    space_left = duration * SOUND_SPEED / 2;
    percentage_filled = ((init_ht - space_left) / init_ht) * 100;

    // Prints the distance in the Serial Monitor

    Serial.print("Space left(cm): ");
    Serial.println(space_left);
    ThingSpeak.setField(1, space_left);
    ThingSpeak.setField(2, percentage_filled);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(3000);
  }#include <WiFi.h>
#include "ThingSpeak.h"

const int trig = 4;
const int echo = 5;

const char* ssid = "BRAHMA";   // your network SSID (name)
const char* password = "brnpdvmr";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1567638;
const char * myWriteAPIKey = "EA2RYS0TP6E9B76O";


//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float space_left;
float percentage_filled;
float init_ht = 10;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  WiFi.mode(WIFI_STA);

  ThingSpeak.begin(client);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
    // Clears the trigPin
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echo, HIGH);

    // Calculate the distance
    space_left = duration * SOUND_SPEED / 2;
    percentage_filled = ((init_ht - space_left) / init_ht) * 100;

    // Prints the distance in the Serial Monitor

    Serial.print("Space left(cm): ");
    Serial.println(space_left);
    ThingSpeak.setField(1, space_left);
    ThingSpeak.setField(2, percentage_filled);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(3000);
  }#include <WiFi.h>
#include "ThingSpeak.h"

const int trig = 4;
const int echo = 5;

const char* ssid = "BRAHMA";   // your network SSID (name)
const char* password = "brnpdvmr";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1567638;
const char * myWriteAPIKey = "EA2RYS0TP6E9B76O";


//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float space_left;
float percentage_filled;
float init_ht = 10;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  WiFi.mode(WIFI_STA);

  ThingSpeak.begin(client);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
    // Clears the trigPin
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echo, HIGH);

    // Calculate the distance
    space_left = duration * SOUND_SPEED / 2;
    percentage_filled = ((init_ht - space_left) / init_ht) * 100;

    // Prints the distance in the Serial Monitor

    Serial.print("Space left(cm): ");
    Serial.println(space_left);
    ThingSpeak.setField(1, space_left);
    ThingSpeak.setField(2, percentage_filled);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(3000);
  }#include <WiFi.h>
#include "ThingSpeak.h"

const int trig = 4;
const int echo = 5;

const char* ssid = "BRAHMA";   // your network SSID (name)
const char* password = "brnpdvmr";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1567638;
const char * myWriteAPIKey = "EA2RYS0TP6E9B76O";


//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float space_left;
float percentage_filled;
float init_ht = 10;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  WiFi.mode(WIFI_STA);

  ThingSpeak.begin(client);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
    // Clears the trigPin
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echo, HIGH);

    // Calculate the distance
    space_left = duration * SOUND_SPEED / 2;
    percentage_filled = ((init_ht - space_left) / init_ht) * 100;

    // Prints the distance in the Serial Monitor

    Serial.print("Space left(cm): ");
    Serial.println(space_left);
    ThingSpeak.setField(1, space_left);
    ThingSpeak.setField(2, percentage_filled);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(3000);
  }#include <WiFi.h>
#include "ThingSpeak.h"

const int trig = 4;
const int echo = 5;

const char* ssid = "BRAHMA";   // your network SSID (name)
const char* password = "brnpdvmr";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1567638;
const char * myWriteAPIKey = "EA2RYS0TP6E9B76O";


//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float space_left;
float percentage_filled;
float init_ht = 10;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  WiFi.mode(WIFI_STA);

  ThingSpeak.begin(client);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
    // Clears the trigPin
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echo, HIGH);

    // Calculate the distance
    space_left = duration * SOUND_SPEED / 2;
    percentage_filled = ((init_ht - space_left) / init_ht) * 100;

    // Prints the distance in the Serial Monitor

    Serial.print("Space left(cm): ");
    Serial.println(space_left);
    ThingSpeak.setField(1, space_left);
    ThingSpeak.setField(2, percentage_filled);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(3000);
  }#include <WiFi.h>
#include "ThingSpeak.h"

const int trig = 4;
const int echo = 5;

const char* ssid = "BRAHMA";   // your network SSID (name)
const char* password = "brnpdvmr";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1567638;
const char * myWriteAPIKey = "EA2RYS0TP6E9B76O";


//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float space_left;
float percentage_filled;
float init_ht = 10;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  WiFi.mode(WIFI_STA);

  ThingSpeak.begin(client);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
    // Clears the trigPin
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echo, HIGH);

    // Calculate the distance
    space_left = duration * SOUND_SPEED / 2;
    percentage_filled = ((init_ht - space_left) / init_ht) * 100;

    // Prints the distance in the Serial Monitor

    Serial.print("Space left(cm): ");
    Serial.println(space_left);
    ThingSpeak.setField(1, space_left);
    ThingSpeak.setField(2, percentage_filled);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(3000);
  }#include <WiFi.h>
#include "ThingSpeak.h"

const int trig = 4;
const int echo = 5;

const char* ssid = "BRAHMA";   // your network SSID (name)
const char* password = "brnpdvmr";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1567638;
const char * myWriteAPIKey = "EA2RYS0TP6E9B76O";


//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float space_left;
float percentage_filled;
float init_ht = 10;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  WiFi.mode(WIFI_STA);

  ThingSpeak.begin(client);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
    // Clears the trigPin
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echo, HIGH);

    // Calculate the distance
    space_left = duration * SOUND_SPEED / 2;
    percentage_filled = ((init_ht - space_left) / init_ht) * 100;

    // Prints the distance in the Serial Monitor

    Serial.print("Space left(cm): ");
    Serial.println(space_left);
    ThingSpeak.setField(1, space_left);
    ThingSpeak.setField(2, percentage_filled);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(3000);
  }#include <WiFi.h>
#include "ThingSpeak.h"

const int trig = 4;
const int echo = 5;

const char* ssid = "BRAHMA";   // your network SSID (name)
const char* password = "brnpdvmr";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1567638;
const char * myWriteAPIKey = "EA2RYS0TP6E9B76O";


//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float space_left;
float percentage_filled;
float init_ht = 10;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  WiFi.mode(WIFI_STA);

  ThingSpeak.begin(client);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
    // Clears the trigPin
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echo, HIGH);

    // Calculate the distance
    space_left = duration * SOUND_SPEED / 2;
    percentage_filled = ((init_ht - space_left) / init_ht) * 100;

    // Prints the distance in the Serial Monitor

    Serial.print("Space left(cm): ");
    Serial.println(space_left);
    ThingSpeak.setField(1, space_left);
    ThingSpeak.setField(2, percentage_filled);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(3000);
  }#include <WiFi.h>
#include "ThingSpeak.h"

const int trig = 4;
const int echo = 5;

const char* ssid = "BRAHMA";   // your network SSID (name)
const char* password = "brnpdvmr";   // your network password

WiFiClient  client;

unsigned long myChannelNumber = 1567638;
const char * myWriteAPIKey = "EA2RYS0TP6E9B76O";


//define sound speed in cm/uS
#define SOUND_SPEED 0.034
long duration;
float space_left;
float percentage_filled;
float init_ht = 10;


void setup() {
  Serial.begin(9600); // Starts the serial communication
  pinMode(trig, OUTPUT); // Sets the trigPin as an Output
  pinMode(echo, INPUT); // Sets the echoPin as an Input
  WiFi.mode(WIFI_STA);

  ThingSpeak.begin(client);
}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.print("Attempting to connect");
    while (WiFi.status() != WL_CONNECTED) {
      WiFi.begin(ssid, password);
      delay(5000);
    }
    Serial.println("\nConnected.");
  }
    // Clears the trigPin
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trig, LOW);

    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echo, HIGH);

    // Calculate the distance
    space_left = duration * SOUND_SPEED / 2;
    percentage_filled = ((init_ht - space_left) / init_ht) * 100;

    // Prints the distance in the Serial Monitor

    Serial.print("Space left(cm): ");
    Serial.println(space_left);
    ThingSpeak.setField(1, space_left);
    ThingSpeak.setField(2, percentage_filled);

    int x = ThingSpeak.writeFields(myChannelNumber, myWriteAPIKey);
    delay(3000);
  }