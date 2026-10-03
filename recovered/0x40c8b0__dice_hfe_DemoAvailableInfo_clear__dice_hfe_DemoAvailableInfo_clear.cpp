// FUNCTION: BF2 0x40c8b0
#include <string>

namespace dice {
namespace hfe {

extern const std::string& getEmptyString();

struct DemoAvailableInfo_clear {
    std::string field_00;  // offset 0x00
    std::string field_08;  // offset 0x08
};

std::string& DemoAvailableInfo_clear(DemoAvailableInfo_clear* self)
{
    return self->field_00.assign(self->field_08.assign(getEmptyString()));
}

} // namespace hfe
} // namespace dice

// REVERSED_FUNCTION: dice_hfe_DemoAvailableInfo_clear::dice_hfe_DemoAvailableInfo_clear (0x40c8b0)