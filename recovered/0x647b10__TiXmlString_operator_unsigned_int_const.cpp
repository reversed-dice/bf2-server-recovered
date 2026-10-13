// FUNCTION: BF2 0x647b10
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <assert.h>



























#ifndef TIXML_USE_STL

#ifndef TIXML_STRING_INCLUDED
#define TIXML_STRING_INCLUDED

#ifdef _MSC_VER

#endif










class TiXmlString
{
  public :

    TiXmlString (const char * instring);


    TiXmlString ()
    {
        allocated = 0;
        cstring = NULL;
        current_length = 0;
    }


    TiXmlString (const TiXmlString& copy);


    ~ TiXmlString ()
    {
        empty_it ();
    }


    const char * c_str () const
    {
        if (allocated)
            return cstring;
        return "";
    }


    unsigned length () const
	{
		return ( allocated ) ? current_length : 0;
	}


    void operator = (const char * content);


    void operator = (const TiXmlString & copy);


    TiXmlString& operator += (const char * suffix)
    {
        append (suffix);
		return *this;
    }


    TiXmlString& operator += (char single)
    {
        append (single);
		return *this;
    }


    TiXmlString& operator += (TiXmlString & suffix)
    {
        append (suffix);
		return *this;
    }
    bool operator == (const TiXmlString & compare) const;
    bool operator < (const TiXmlString & compare) const;
    bool operator > (const TiXmlString & compare) const;


    bool empty () const
    {
        return length () ? false : true;
    }


    const char& at (unsigned index) const
    {
        assert( index < length ());
        return cstring [index];
    }


    unsigned find (char lookup) const
    {
        return find (lookup, 0);
    }


    unsigned find (char tofind, unsigned offset) const;




    void reserve (unsigned size)
    {
        empty_it ();
        if (size)
        {
            allocated = size;
            cstring = new char [size];
            cstring [0] = 0;
            current_length = 0;
        }
    }


    char& operator [] (unsigned index) const;
    char& padA (unsigned index) const;
    char& padB (unsigned index) const;
    char& padC (unsigned index) const;
    char& padD (unsigned index) const;
    char& padE (unsigned index) const;
    char& padF (unsigned index) const;
    char& padG (unsigned index) const;
    char& padH (unsigned index) const;
    char& padI (unsigned index) const;
    char& padJ (unsigned index) const;


    enum {	notfound = 0xffffffff,
            npos = notfound };

    void append (const char *str, int len );

  protected :


    char * cstring;

    unsigned allocated;

    unsigned current_length;



    unsigned assign_new_size (unsigned minimum_to_allocate)
    {
        return minimum_to_allocate * 2;
    }


    void empty_it ()
    {
        if (cstring)
            delete [] cstring;
        cstring = NULL;
        allocated = 0;
        current_length = 0;
    }

    void append (const char *suffix );


    void append (const TiXmlString & suffix)
    {
        append (suffix . c_str ());
    }


    void append (char single)
    {
        if ( cstring && current_length < (allocated-1) )
		{
			cstring[ current_length ] = single;
			++current_length;
			cstring[ current_length ] = 0;
		}
		else
		{
			char smallstr [2];
			smallstr [0] = single;
			smallstr [1] = 0;
			append (smallstr);
		}
    }

} ;





class TiXmlOutStream : public TiXmlString
{
public :
    TiXmlOutStream () : TiXmlString () {}


    TiXmlOutStream & operator << (const char * in)
    {
        append (in);
        return (* this);
    }


    TiXmlOutStream & operator << (const TiXmlString & in)
    {
        append (in . c_str ());
        return (* this);
    }
} ;

#endif
#endif

char& TiXmlString::operator [] (unsigned index) const
{
#line 123 "External/TinyXML/tinystr.h"
    assert( index < length ());
    return cstring [index];
}

char& TiXmlString::padA (unsigned index) const
{
    assert( index < length ());
    return cstring [index];
}

char& TiXmlString::padB (unsigned index) const
{
    assert( index < length ());
    return cstring [index];
}

char& TiXmlString::padC (unsigned index) const
{
    assert( index < length ());
    return cstring [index];
}

char& TiXmlString::padD (unsigned index) const
{
    assert( index < length ());
    return cstring [index];
}

char& TiXmlString::padE (unsigned index) const
{
    assert( index < length ());
    return cstring [index];
}

char& TiXmlString::padF (unsigned index) const
{
    assert( index < length ());
    return cstring [index];
}

