#include "dsk6713_aic23.h"
Uint32 fs = DSK6713_AIC23_FREQ_8KHZ;

#define DSK6713_AIC23_INPUT_MIC 0x0015
Uint16 inputsource = DSK6713_AIC23_INPUT_MIC;
interrupt void c_int11(){
    int sample_data;
    sample_data = input_sample(); 
    output_sample(sample_data); 
    return;
}
void main() {
    comm_intr(); 
    while (1);
}

