// FUNCTION: BF2 0x42bd00
namespace dice_hfe {
    class GameEvent {
    public:
        GameEvent();
        virtual ~GameEvent() {}
        virtual int addRef() { return 0; }
        virtual int getRef() { return 0; }
        virtual int release() { return 0; }
        virtual int queryInterface(unsigned int, const void*) { return 0; }
        long m_refCount;
    };

    class PlayerTearGassedEvent : public GameEvent {
    public:
        int field_0x10;
        float field_0x14;
        float field_0x18;
        float field_0x1c;

        PlayerTearGassedEvent(int a, float b, float c, float d);
        virtual ~PlayerTearGassedEvent() {}
    };
}

dice_hfe::PlayerTearGassedEvent::PlayerTearGassedEvent(int a, float b, float c, float d) {
    field_0x10 = a;
    field_0x14 = b;
    field_0x18 = c;
    field_0x1c = d;
}
// REVERSED_FUNCTION: dice_hfe_PlayerTearGassedEvent_PlayerTearGassedEvent_int_float_float_float (0x42bd00)