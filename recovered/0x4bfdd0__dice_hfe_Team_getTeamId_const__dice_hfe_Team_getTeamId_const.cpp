// FUNCTION: BF2 0x4bfdd0
namespace dice { namespace hfe {

class Team {
public:
    int getTeamId() const;
};

int Team::getTeamId() const {
    return *(int*)((char*)this + 0x90);
}

} }
