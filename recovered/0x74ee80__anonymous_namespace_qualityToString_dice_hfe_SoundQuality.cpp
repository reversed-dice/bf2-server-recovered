// FUNCTION: BF2 0x74ee80
// Reversed from BF2 server at 0x74ee80

char const* qualityToString(int quality)
{
    switch (quality) {
    case 0:
        return "High";
    case 1:
        return "Medium";
    case 2:
        return "Low";
    default:
        return "Unknown";
    }
}
