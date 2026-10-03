// FUNCTION: BF2 0x439a20
namespace dice { namespace hfe {
namespace world { enum TemplateMessage { TM_Fire = 6, TM_FireReleased = 7, TM_FireHeld = 8 }; }

class FireButtonState {
public:
    world::TemplateMessage translateMessage(world::TemplateMessage msg);
    int m_state;
};

world::TemplateMessage FireButtonState::translateMessage(world::TemplateMessage msg)
{
    if (msg != world::TM_Fire)
        return msg;
    int r = world::TM_FireReleased + (m_state > 0);
    m_state = 2;
    return (world::TemplateMessage)r;
}

} }
