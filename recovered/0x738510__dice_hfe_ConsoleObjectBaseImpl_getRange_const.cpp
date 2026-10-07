// FUNCTION: BF2 0x738510
namespace dice { namespace hfe {

struct Range {
    int* first;
    int* second;
};

class ConsoleObjectBaseImpl {
public:
    virtual void unk0();
    virtual void unk1();
    virtual void unk2();
    virtual void unk3();
    virtual void unk4();
    virtual void unk5();
    virtual void unk6();
    virtual void unk7();
    virtual void unk8();
    virtual void unk9();
    virtual void unk10();
    virtual void unk11();
    virtual void unk12();
    virtual void unk13();
    virtual Range getRange() const; // slot 14
    virtual void unk15();
    virtual void unk16();
    virtual void unk17();
    virtual void unk18();
    virtual void unk19();
    virtual void unk20();
    virtual void unk21();
    virtual void unk22();
    virtual void unk23();
    virtual void unk24();
    virtual void unk25();
    virtual void unk26();
    virtual void unk27();
    virtual Range getObjectRange() const; // slot 28 (0xe0)
};

Range ConsoleObjectBaseImpl::getRange() const {
    return getObjectRange();
}

} }
