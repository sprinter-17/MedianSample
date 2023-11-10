#ifndef MEDIAN_SAMPLE_H
#define MEDIAN_SAMPLE_H

class MedianSample {
    private:
        int count = 0;
        int targetSampleCount;
        int* samples;

    public:
        MedianSample(int _targetSampleCount);
        void clear();
        void addSample(int sample);
        bool requiresMoreSamples();
        int getMedian();
};

#endif