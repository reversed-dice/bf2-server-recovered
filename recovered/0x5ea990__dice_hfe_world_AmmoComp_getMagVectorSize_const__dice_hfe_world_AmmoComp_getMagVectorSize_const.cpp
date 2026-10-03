// FUNCTION: BF2 0x5ea990
namespace dice { namespace hfe { namespace world {

class AmmoComp {
    unsigned char __pad[0x28];
    char* m_magVector;        // offset 0x28
    char* m_magVectorEnd;     // offset 0x30

public:
    long getMagVectorSize() const;
};

long AmmoComp::getMagVectorSize() const {
    return (m_magVectorEnd - m_magVector) >> 2;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_AmmoComp_getMagVectorSize_const (0x5ea990)