// FUNCTION: BF2 0x644e60
// TiXmlNode_NextSiblingElement_const - force two RETs
// 11 ins, 0 calls, gcc34
extern "C" {

void *TiXmlNode_NextSiblingElement_const(long param_1)
{
    long node = *(long*)(param_1 + 0x50);
    if (node == 0) {
        return 0;
    }
    while (*(int*)(node + 0x20) != 1) {
        node = *(long*)(node + 0x50);
        if (node == 0) {
            return 0;
        }
    }
    return (void*)node;
}

}
