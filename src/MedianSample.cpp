#include "MedianSample.h"

MedianSample::MedianSample(int _targetSampleCount) {
    count = 0;
    targetSampleCount = _targetSampleCount;
    samples = new int[targetSampleCount];
}

void MedianSample::clear() {
    count = 0;
}

void MedianSample::addSample(int sample) {
    if (!requiresMoreSamples())
        return;
    int pos = count++;
    while (pos > 0 && samples[pos - 1] > sample) {
        samples[pos] = samples[pos - 1];
        pos--;
    }
    samples[pos] = sample;
}

bool MedianSample::requiresMoreSamples() {
    return count < targetSampleCount;
}

int MedianSample::getMedian() {
    return samples[count / 2];
}