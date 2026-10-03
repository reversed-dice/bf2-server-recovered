// FUNCTION: BF2 0x42eae0
typedef unsigned long long uint64_t;

namespace dice {
namespace hfe {

class RequestEvent {
public:
    uint64_t getType() const;
};

uint64_t RequestEvent::getType() const
{
    return 0x32;
}

} // namespace hfe
} // namespace dice