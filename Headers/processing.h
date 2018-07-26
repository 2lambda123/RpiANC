//
// Created by pitersk on 07.06.18.
//

#ifndef RPIANC_PROCESSING_H
#define RPIANC_PROCESSING_H

#include <Fir1fixed.h>
#include "common.h"


void processing(sample_type *samples_buffer, long unsigned int buffer_length, Fir1fixed &fir_left, Fir1fixed &fir_right);

sample_type firFilt(sample_type new_sample, sample_type *filter_coefficients);

#endif //RPIANC_PROCESSING_H