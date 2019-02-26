// Class "HeartBeat" -- monitors a time instance and returns 1 if it is passed or 0 otherwise
// It requires a time interval in milliseconds

class HeartBeat
{
//Class variables initialized at startup
unsigned long HeartBeatDuration; // How long is this timer for?

// Runtime variables
unsigned long startMillis; // When did it start?

// Constructor
public:
HeartBeat(unsigned long HeartBeat) {
HeartBeatDuration = HeartBeat;
startMillis = millis();
}

int update(void) {
if (millis() - startMillis >= HeartBeatDuration) {
return 1;
} else {
return 0;
}
}

void reset(void) {
startMillis = millis();
}

};
