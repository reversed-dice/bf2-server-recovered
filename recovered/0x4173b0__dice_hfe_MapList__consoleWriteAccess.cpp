// FUNCTION: BF2 0x4173b0
namespace dice { namespace hfe {

class MapList;

extern MapList* mapList;

class MapList {
public:
    unsigned int m_unk_0x1;
    int m_unk_0x8;
    unsigned char m_unk_0xC;
    unsigned char m_unk_0xE;
    void* m_unk_0x20;
    void* m_unk_0x28;
    void* m_unk_0x30;
    long* m_unk_0x38;
    void* m_unk_0x40;
    void* m_unk_0x48;
    void* m_unk_0x50;
    void* m_unk_0x58;
    unsigned char m_unk_0x60;
    unsigned char m_unk_0x61;
    unsigned int m_unk_0x64;
    void* m_unk_0x68;
    unsigned char m_unk_0x70;

    bool isModifiable() const;
    static MapList* consoleWriteAccess();
};

MapList* MapList::consoleWriteAccess() {
    if (mapList->isModifiable())
        return mapList;
    return 0;
}

} }
// REVERSED_FUNCTION: dice_hfe_MapList::consoleWriteAccess (0x4173b0)