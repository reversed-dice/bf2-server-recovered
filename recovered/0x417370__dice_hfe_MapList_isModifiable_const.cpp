// FUNCTION: BF2 0x417370
namespace dice { namespace hfe {

typedef long (*QueryInterfaceFn)(long*, unsigned int);

extern long* dice_hfe_game;
extern unsigned int dice_hfe_IID_IGameServer;

class MapList {
public:
    unsigned char pad[0x70];
    unsigned char m_unk_0x70;
    bool isModifiable() const;
};

bool MapList::isModifiable() const {
    if (__builtin_expect(dice_hfe_game != 0, 1)) {
        if (__builtin_expect(
            reinterpret_cast<QueryInterfaceFn>(
                reinterpret_cast<unsigned long long*>(*dice_hfe_game)[3]
            )(dice_hfe_game, dice_hfe_IID_IGameServer), 1)) {
            return true;
        }
    }
    if (m_unk_0x70)
        return true;
    return false;
}

} }
// REVERSED_FUNCTION: dice_hfe_MapList_isModifiable_const (0x417370)