#include <Arduino.h>
#include "MedianSample.h"


int n = 0;

int test[] = {5, 10, 7, 1, 3, 11, 13, 100, 100, 100, 1, 1, 1, 1, 1, 1};
MedianSample sample(16);

void setup() {
    Serial.begin(9600);
}

void loop() {
    if (sample.requiresMoreSamples()) {
        sample.addSample(test[n++]);
        Serial.println(sample.getMedian());
    }
    delay(1000);
}