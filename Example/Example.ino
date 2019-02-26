/********************************************************************/
// Hearbeat for WatchDog
#include <HeartBeat.h>


#define hbPin 2
int hwHeartbeat = HIGH;
HeartBeat hbTimer = HeartBeat(1000 * 3); // 3 second heartbeat

void hbTimerFunc() {
  if (hbTimer.update() == 1) {
    if (hwHeartbeat == HIGH) {
      digitalWrite(hbPin, LOW);
      hwHeartbeat = LOW;
    } else {
      digitalWrite(hbPin, HIGH);
      hwHeartbeat = HIGH;
    }
    hbTimer.reset();
  }
}

void setup() {
  pinMode(hbPin, OUTPUT);
}

void loop() {
  hbTimerFunc();
}
