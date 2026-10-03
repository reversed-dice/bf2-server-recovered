// FUNCTION: BF2 0x464fa0
namespace dice { namespace hfe { namespace {

struct StringMessageChannelData {
    unsigned char _pad[0x34];
    unsigned int channel;
};

class StringMessageEW {
    unsigned long long _pad0;
    StringMessageChannelData* m_data;
public:
    unsigned int getChannel() const;
};

unsigned int StringMessageEW::getChannel() const {
    return m_data->channel;
}

} } }
// REVERSED_FUNCTION: dice_hfe_anonymous_namespace_StringMessageEW_getChannel (0x464fa0)