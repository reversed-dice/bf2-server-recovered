// FUNCTION: BF2 0x80e230
typedef int CHATBool;
typedef void * CHAT;
extern "C" CHATBool ciCheckFiltersForID(CHAT chat, int ID);
extern "C" CHATBool ciCheckCallbacksForID(CHAT chat, int ID);

CHATBool ciCheckForID(CHAT chat, int ID)
{
	return (CHATBool)(ciCheckFiltersForID(chat, ID) || ciCheckCallbacksForID(chat, ID));
}
