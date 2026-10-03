// FUNCTION: BF2 0x513510
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    int getStartTeam() const;
};

int ControlPointTemplate::getStartTeam() const {
    return *(int*)((char*)this + 0x208);
}

} } }
