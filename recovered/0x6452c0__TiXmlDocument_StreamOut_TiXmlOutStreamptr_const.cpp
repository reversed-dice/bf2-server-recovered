// FUNCTION: BF2 0x6452c0
// BF2_FLAGS: -fno-tree-dominator-opts
// TiXmlDocument::StreamOut - iterate children and stream them
class TiXmlNode {
public:
    long* vtable;       // 0x00
    char _pad[0x18];    // 0x08-0x1f
    int m_type;         // 0x20
    char _pad2[0x28];   // 0x24-0x4f
    TiXmlNode* next;    // 0x50
};

void TiXmlDocument_StreamOut(TiXmlNode* self, long stream) {
    TiXmlNode* child = *(TiXmlNode**)((char*)self + 0x28);
    if (child == 0) return;
    do {
        typedef void (*StreamOutFn)(TiXmlNode*, long);
        StreamOutFn fn = (StreamOutFn)child->vtable[4];
        fn(child, stream);
        if (child == 0) break;
        if (child->m_type == 1) break;
        child = child->next;
    } while (child != 0);
}
