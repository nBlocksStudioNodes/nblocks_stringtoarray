#include "stringtoarray.h"


nBlock_StringToArray::nBlock_StringToArray() {
    outputType[0] = OUTPUT_TYPE_ARRAY;
}

void nBlock_StringToArray::triggerInput(nBlocks_Message message) {
    if (message.dataType == OUTPUT_TYPE_STRING) {

        for (uint32_t i=0; i<message.dataLength; i++) {
            _out_buffer[i] = message.stringValue[i];
        }
        output[0] = (uint32_t)(&_out_buffer);
        available[0] = message.dataLength;
    }
}