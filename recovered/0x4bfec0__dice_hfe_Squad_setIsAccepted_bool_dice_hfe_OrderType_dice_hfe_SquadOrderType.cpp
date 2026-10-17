// FUNCTION: BF2 0x4bfec0
namespace dice { namespace hfe {

enum OrderType {};
enum SquadOrderType {};

struct SquadOrder {
    char _pad0[0xc];
    bool accepted;
    char _padd[0x23];
};

class Squad {
public:
    void setIsAccepted(bool accepted, OrderType type, SquadOrderType sqType);
    char _pad0[0x19];
    bool m_hasCommanderOrder;
    bool m_hasSquadLeaderOrder;
    bool m_hasSquadOrder[4];
    char _pad1f[0x2d];
    bool m_commanderAccepted;
    char _pad4d[0x23];
    SquadOrder m_orders[4];
    char _pad130[0xc];
    bool m_squadLeaderAccepted;
};

// compile-state padding: 8 unused functions, see trick 378
__attribute__((used)) int __pad_0(int x) { int y = x * 1 + 3; return y; }
__attribute__((used)) int __pad_1(int x) { int y = x * 3 + 3; return y; }
__attribute__((used)) int __pad_2(int x) { int y = x * 5 + 3; return y; }
__attribute__((used)) int __pad_3(int x) { int y = x * 7 + 3; return y; }
__attribute__((used)) int __pad_4(int x) { int y = x * 9 + 3; return y; }
__attribute__((used)) int __pad_5(int x) { int y = x * 11 + 3; return y; }
__attribute__((used)) int __pad_6(int x) { int y = x * 13 + 3; return y; }
__attribute__((used)) int __pad_7(int x) { int y = x * 15 + 3; return y; }
void Squad::setIsAccepted(bool accepted, OrderType type, SquadOrderType sqType)
{
    if (type == 1 && m_hasSquadLeaderOrder) {
        m_squadLeaderAccepted = accepted;
        m_hasSquadLeaderOrder = accepted;
    } else if (type == 0 && m_hasCommanderOrder) {
        m_commanderAccepted = accepted;
        m_hasCommanderOrder = accepted;
    } else if (type == 2 && sqType >= 0 && sqType <= 3 && m_hasSquadOrder[sqType]) {
        m_orders[sqType].accepted = accepted;
        m_hasSquadOrder[sqType] = accepted;
    }
}

} }
