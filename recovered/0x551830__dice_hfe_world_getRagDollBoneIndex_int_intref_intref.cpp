// FUNCTION: BF2 0x551830
namespace dice { namespace hfe { namespace world {

void getRagDollBoneIndex(int bone, int& outA, int& outB) {
    outA = 6;
    outB = -1;
    if (bone == -1) return;
    switch (bone) {
    case 1:
        outA = 1;
        break;
    case 2:
    case 3:
        outA = 2;
        break;
    case 6:
        outA = 6;
        break;
    case 7:
    case 8:
        outA = 7;
        break;
    case 11:
    case 12:
        outA = 15;
        outB = 31;
        break;
    case 15:
        outA = 15;
        break;
    case 17:
        outA = 16;
        break;
    case 31:
        outA = 31;
        break;
    case 33:
        outA = 32;
        break;
    case 47:
        outA = 47;
        break;
    default:
        break;
    }
}

} } }
