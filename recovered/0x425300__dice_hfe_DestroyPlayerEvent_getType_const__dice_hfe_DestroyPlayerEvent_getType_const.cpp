// FUNCTION: BF2 0x425300
namespace dice {
namespace hfe {

class DestroyPlayerEvent
{
public:
    unsigned long long getType() const;
};

__attribute__((noinline))
unsigned long long DestroyPlayerEvent::getType() const
{
    return 8ULL;
}

} // namespace hfe
} // namespace dice