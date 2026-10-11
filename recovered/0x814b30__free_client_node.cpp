// FUNCTION: BF2 0x814b30
extern int gsifree(void*);
extern void* fn_814b00(void*, void*);

struct Conn {
    char _pad0[0x58];
    void* m_58;
    void* m_60;
    char _pad68[0x10];
    void* m_78;
};

void fn_814b30(void* node)
{
    if (node == 0)
        return;
    Conn* c = *(Conn**)node;
    if (c != 0) {
        if (c->m_60 != 0)
            gsifree(c->m_60);
        if (c->m_58 != 0)
            gsifree(c->m_58);
        while (c->m_78 != 0) {
            void* e = fn_814b00(c->m_78, (char*)c + 0x70);
            gsifree(*(void**)e);
            gsifree(e);
        }
        gsifree(c);
    }
    gsifree(node);
}
