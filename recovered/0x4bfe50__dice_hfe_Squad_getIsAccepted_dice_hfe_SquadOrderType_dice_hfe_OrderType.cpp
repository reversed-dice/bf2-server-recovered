// FUNCTION: BF2 0x4bfe50
namespace dice { namespace hfe {

enum SquadOrderType {
    SOT_0 = 0,
    SOT_1 = 1,
    SOT_2 = 2,
    SOT_3 = 3
};

enum OrderType {
    OT_0 = 0,
    OT_1 = 1,
    OT_2 = 2
};

struct OrderData {
    bool m_accepted;
    char _pad[0x2f];
};

class Squad {
public:
    virtual ~Squad();
    virtual bool getIsAccepted(SquadOrderType orderType, OrderType type);

    char _pad[0x19 - 8];
    bool m_active0;          // 0x19
    bool m_active1;          // 0x1a
    bool m_active2[4];       // 0x1b..0x1e
    char _pad2[0x4c - 0x1f];
    bool m_accepted0;        // 0x4c
    char _pad3[0x7c - 0x4d];
    OrderData m_orders[4];   // 0x7c..
    char _pad4[0x13c - (0x7c + 4 * 0x30)];
    bool m_accepted1;        // 0x13c
};

bool Squad::getIsAccepted(SquadOrderType orderType, OrderType type)
{
    if (type == OT_1) {
        if (m_active1)
            return m_accepted1;
    } else if (type == OT_0) {
        if (m_active0)
            return m_accepted0;
    }

    if (type == OT_2 && orderType >= 0 && orderType <= 3) {
        if (m_active2[orderType])
            return m_orders[orderType].m_accepted;
    }

    return false;
}

} }
