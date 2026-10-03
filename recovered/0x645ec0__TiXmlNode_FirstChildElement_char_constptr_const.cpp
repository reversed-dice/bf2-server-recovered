// FUNCTION: BF2 0x645ec0
extern long TiXmlNode_FirstChild_char_constptr_const(long, long);
extern long TiXmlNode_NextSiblingElement_char_constptr_const(long, long);

long TiXmlNode_FirstChildElement_char_constptr_const(long param_1, long param_2) {
    long node = TiXmlNode_FirstChild_char_constptr_const(param_1, param_2);
    while (node != 0) {
        if (*(int*)(node + 0x20) == 1) return node;
        node = TiXmlNode_NextSiblingElement_char_constptr_const(node, param_2);
    }
    return 0;
}
