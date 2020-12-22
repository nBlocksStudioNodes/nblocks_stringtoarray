#ifndef __NB_STRINGTOARRAY
#define __NB_STRINGTOARRAY

#include "nworkbench.h"

class nBlock_StringToArray: public nBlockSimpleNode<1> {
public:
    nBlock_StringToArray();
    void triggerInput(nBlocks_Message message);
private:
    char _out_buffer[64];
};





#endif