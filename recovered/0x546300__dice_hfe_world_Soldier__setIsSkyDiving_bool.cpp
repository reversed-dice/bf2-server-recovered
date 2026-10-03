// FUNCTION: BF2 0x546300
namespace dice { namespace hfe { namespace world {

class Soldier {
public:
    unsigned int m_unk_0x3CC;

    void setIsSkyDiving(bool param_2);
};

void Soldier::setIsSkyDiving(bool param_2) {
    unsigned char* field_4B0 = reinterpret_cast<unsigned char*>(this) + 0x4B0;

    if (*field_4B0 == param_2)
        return;

    *field_4B0 = param_2;

    if (*reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x358) == -1)
        return;

    *reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(this) + 0x3CC) = 0;

    typedef void (*Func)(Soldier*);
    void** vtable = *reinterpret_cast<void***>(this);
    union { void* v; Func f; } u;
    u.v = vtable[0x508 / sizeof(void*)];
    u.f(this);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_Soldier::setIsSkyDiving_bool (0x546300)