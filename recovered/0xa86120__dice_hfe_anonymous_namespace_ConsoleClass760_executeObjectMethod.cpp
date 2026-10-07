// FUNCTION: BF2 0xa86120
namespace dice { namespace hfe {

class MapList {
public:
    static MapList* consoleWriteAccess();
    bool removeEntry(int, bool);
};

class ConsoleClass760 {
public:
    void* executeObjectMethod();
private:
    char m_pad0[0x30];
    int m_argc;
    char m_pad1[0x4];
    int* m_args;
    char m_pad2[0xc8];
    char m_active;
    int m_result;
};

void* ConsoleClass760::executeObjectMethod()
{
    if (m_argc != 1)
        return 0;
    int a = *m_args;
    m_active = 1;
    bool r = MapList::consoleWriteAccess()->removeEntry(a, false);
    m_result = r;
    return &m_result;
}

} }
