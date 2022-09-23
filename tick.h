#include "global.h"

void tick() {
  delay(TICK_MILLIS - OFFSET_MILLIS);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(OFFSET_MILLIS);
  digitalWrite(LED_BUILTIN, LOW);
}