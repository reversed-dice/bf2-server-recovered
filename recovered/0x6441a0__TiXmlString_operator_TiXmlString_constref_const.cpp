// FUNCTION: BF2 0x6441a0
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


    char& operator [] (unsigned index) const
    {
        assert( index < length ());
        return cstring [index];
    }


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



























void TiXmlString::operator = (const TiXmlString & copy)
{
    unsigned newlen;
    char * newstring;
    if (! copy . length ())
    {
        empty_it ();
    }
    else
    {
        newlen = copy . length () + 1;
        newstring = new char [newlen];
        memcpy (newstring, copy . c_str (), newlen);
        if (cstring)
            delete [] cstring;
        allocated = newlen;
        cstring = newstring;
        current_length = newlen - 1;
    }
}

void TiXmlString ::operator = (const char * content)
{
    unsigned newlen;
    char * newstring;
    if (! content)
    {
        empty_it ();
        return;
    }
    newlen = strlen (content) + 1;
    newstring = new char [newlen];
    memcpy (newstring, content, newlen);
    empty_it ();
    allocated = newlen;
    cstring = newstring;
    current_length = newlen - 1;
}


void TiXmlString::append( const char* str, int len )
{
	char * new_string;
	unsigned new_alloc, new_size, size_suffix;
	const char* p = str;
	size_suffix = 0;
	while ( *p != 0 && size_suffix < (unsigned)len )
	{
		++p;
		++size_suffix;
	}
	if ( !size_suffix )
		return;
	new_size = length () + size_suffix + 1;
	if (new_size > allocated)
	{
		new_alloc = assign_new_size (new_size);
		new_string = new char [new_alloc];
		new_string [0] = 0;
		if (allocated && cstring)
			memcpy (new_string, cstring, length ());
		memcpy (new_string + length (), str, size_suffix);
		if (allocated && cstring)
			delete [] cstring;
		cstring = new_string;
		allocated = new_alloc;
	}
	else
	{
		memcpy (cstring + length(), str, size_suffix);
	}
	current_length = new_size - 1;
	cstring [current_length] = 0;
}


void TiXmlString::append (const char * suffix )
{
    char * new_string;
    unsigned new_alloc, new_size;
    new_size = length () + (unsigned)strlen (suffix) + 1;
    if (new_size > allocated)
    {
        new_alloc = assign_new_size (new_size);
        new_string = new char [new_alloc];
        new_string [0] = 0;
        if (allocated && cstring)
            memcpy (new_string, cstring, 1 + length ());
        memcpy (new_string + length (), suffix, strlen (suffix) + 1);
        if (allocated && cstring)
            delete [] cstring;
        cstring = new_string;
        allocated = new_alloc;
    }
    else
    {
        memcpy (cstring + length(), suffix, strlen (suffix) + 1);
    }
    current_length = new_size - 1;
}


TiXmlString::TiXmlString (const TiXmlString& copy)
{
    unsigned newlen;
    char * newstring;
    if (&copy != this)
    {
        if (! copy . allocated)
        {
            allocated = 0;
            cstring = NULL;
            current_length = 0;
        }
        else
        {
            newlen = copy . length () + 1;
            newstring = new char [newlen];
            memcpy (newstring, copy . cstring, newlen);
            allocated = newlen;
            cstring = newstring;
            current_length = newlen - 1;
        }
    }
}

bool TiXmlString::operator == (const TiXmlString & compare) const
{
    if (allocated && compare . allocated)
    {
#line 267 "External/TinyXML/tinystr.cpp"
        assert (cstring);
        assert (compare.cstring);
        return ( strcmp (cstring, compare . cstring) == 0 );
    }
    return false;
}


bool TiXmlString::operator < (const TiXmlString & compare) const
{
    if (allocated && compare . allocated)
    {
#line 279 "External/TinyXML/tinystr.cpp"
        assert (cstring);
        assert (compare.cstring);
        return ( strcmp (cstring, compare . cstring) < 0 );
    }
    return false;
}


bool TiXmlString::operator > (const TiXmlString & compare) const
{
    if (allocated && compare . allocated)
    {
#line 291 "External/TinyXML/tinystr.cpp"
        assert (cstring);
        assert (compare.cstring);
        return ( strcmp (cstring, compare . cstring) > 0 );
    }
    return false;
}


TiXmlString::TiXmlString (const char* instring)
{
    unsigned newlen;
    char * newstring;
    if (!instring)
    {
        allocated = 0;
        cstring = NULL;
        current_length = 0;
        return;
    }
    newlen = strlen (instring) + 1;
    newstring = new char [newlen];
    memcpy (newstring, instring, newlen);
    allocated = newlen;
    cstring = newstring;
    current_length = newlen - 1;
}


unsigned TiXmlString::find (char tofind, unsigned offset) const
{
    char * lookup;
    if (offset >= length ())
        return (unsigned) notfound;
    for (lookup = cstring + offset; * lookup; lookup++)
        if (* lookup == tofind)
            return lookup - cstring;
    return (unsigned) notfound;
}


