// FUNCTION: BF2 0x5af050
namespace dice { namespace hfe { namespace world {

extern const float FLOAT_0x00b2d910;

class ObjectSpawnerData {
public:
    char __pad_0x000[0x1bc];
    float m_useButtonDistance; // offset 0x1bc
};

class ObjectSpawner {
public:
    bool getHasUseButton() const;

private:
    char __pad_0x00[0x10];
    ObjectSpawnerData* m_data; // offset 0x10
};

bool ObjectSpawner::getHasUseButton() const {
    return m_data->m_useButtonDistance > FLOAT_0x00b2d910;
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_ObjectSpawner_getHasUseButton (0x52e860)