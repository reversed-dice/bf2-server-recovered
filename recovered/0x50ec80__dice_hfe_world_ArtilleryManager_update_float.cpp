// FUNCTION: BF2 0x50ec80
namespace dice { namespace hfe { namespace world {
class ArtilleryHandler { public: void update(float dt); };
class ArtilleryManager {
public:
    void update(float dt);
    ArtilleryHandler* m_p0;   // +0x0
    ArtilleryHandler* m_p1;   // +0x8
};
void ArtilleryManager::update(float dt)
{
    if (m_p0) m_p0->update(dt);
    if (m_p1) m_p1->update(dt);
}
}}}
