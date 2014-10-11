#ifndef __CODEC__WAV_DEC
#define __CODEC__WAV_DEC


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../common/error.h"

#include "wav.h"
#include "sample.h"


int wav_dec(FILE *fp, t_sample *sample);

#endif//__CODEC__WAC_DEC
