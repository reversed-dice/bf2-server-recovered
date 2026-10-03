// FUNCTION: BF2 0x630c60
namespace dice { namespace hfe { namespace world {

class EngineBase {
public:
    float mapInputToWantedAngle(float input, float maxAngle, float minAngle);
};

float EngineBase::mapInputToWantedAngle(float input, float maxAngle, float minAngle)
{
    if (input < -1.0f)
        input = -1.0f;
    else if (input > 1.0f)
        input = 1.0f;
    return (minAngle + input * (maxAngle - minAngle)) * 2.0f * 3.14159265f / 360.0f;
}

} } }
