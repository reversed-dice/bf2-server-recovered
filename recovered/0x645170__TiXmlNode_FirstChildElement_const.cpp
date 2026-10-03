// FUNCTION: BF2 0x645170
// TiXmlNode_FirstChildElement_const
// 11 ins, 0 calls, gcc34 - same pattern as NextSiblingElement
extern "C" {

void *TiXmlNode_FirstChildElement_const(long param_1)
{
    long node = *(long*)(param_1 + 0x28);
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
