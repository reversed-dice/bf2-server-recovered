// FUNCTION: BF2 0x427720
namespace dice { namespace hfe {

class GameEvent {
public:
  virtual ~GameEvent() {}
  unsigned int m_unk_0x1;
  int m_unk_0x8;
  unsigned int m_unk_0xC;
};

class GrapplingHookContainerUpdateEvent : public GameEvent {
public:
  ~GrapplingHookContainerUpdateEvent();
  unsigned int m_unk_0x10;
  unsigned int m_unk_0x14;
  unsigned int m_unk_0x18;
  unsigned int m_unk_0x1C;
};

GrapplingHookContainerUpdateEvent::~GrapplingHookContainerUpdateEvent() {}

} }
// REVERSED_FUNCTION: dice_hfe_GrapplingHookContainerUpdateEvent_dtor_GrapplingHookContainerUpdateEvent (0x427720)