#ifndef __CODEC__SAMPLE
#define __CODEC__SAMPLE


#include "../codec/codec.h"
#include "../codec/wav.h"


#define MAX_CHANNELS    (1)


typedef struct {
    union {
        t_codec     generic;
        t_codec_wav wav;
        // Add new codec types here..
    } codec;
    uint64_t  nbr_samples;
    void      *samples[MAX_CHANNELS];
} t_sample;



#endif//__CODEC__SAMPLE
