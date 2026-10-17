// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// FUNCTION: BF2 0x649690
/*
TinyXML 2.3.2, www.sourceforge.net/projects/tinyxml, original code by Lee Thomason
(tinystr: Yves Berquin). zlib license:

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any
damages arising from the use of this software.

Permission is granted to anyone to use this software for any
purpose, including commercial applications, and to alter it and
redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must
not claim that you wrote the original software. If you use this
software in a product, an acknowledgment in the product documentation
would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and
must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source
distribution.

Altered: declarations and one definition extracted into a single file.
*/
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <assert.h>
#line 1 "tinystr.h"



























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

#line 1 "tinyxml.h"

























#ifndef TINYXML_INCLUDED
#define TINYXML_INCLUDED

#ifdef _MSC_VER


#endif








#if defined( _DEBUG ) && !defined( DEBUG )
#define DEBUG
#endif

#if defined( DEBUG ) && defined( _MSC_VER )

#define TIXML_LOG OutputDebugString
#else
#define TIXML_LOG printf
#endif

#ifdef TIXML_USE_STL


	#define TIXML_STRING	std::string
	#define TIXML_ISTREAM	std::istream
	#define TIXML_OSTREAM	std::ostream
#else

	#define TIXML_STRING	TiXmlString
	#define TIXML_OSTREAM	TiXmlOutStream
#endif

class TiXmlDocument;
class TiXmlElement;
class TiXmlComment;
class TiXmlUnknown;
class TiXmlAttribute;
class TiXmlText;
class TiXmlDeclaration;
class TiXmlParsingData;

const int TIXML_MAJOR_VERSION = 2;
const int TIXML_MINOR_VERSION = 3;
const int TIXML_PATCH_VERSION = 2;




struct TiXmlCursor
{
	TiXmlCursor()		{ Clear(); }
	void Clear()		{ row = col = -1; }

	int row;
	int col;
};



enum
{
	TIXML_SUCCESS,
	TIXML_NO_ATTRIBUTE,
	TIXML_WRONG_TYPE
};



enum TiXmlEncoding
{
	TIXML_ENCODING_UNKNOWN,
	TIXML_ENCODING_UTF8,
	TIXML_ENCODING_LEGACY
};

const TiXmlEncoding TIXML_DEFAULT_ENCODING = TIXML_ENCODING_UNKNOWN;























class TiXmlBase
{
	friend class TiXmlNode;
	friend class TiXmlElement;
	friend class TiXmlDocument;

public:
	TiXmlBase()	:	userData(0) {}
	virtual ~TiXmlBase()					{}






	virtual void Print( FILE* cfile, int depth ) const = 0;







	static void SetCondenseWhiteSpace( bool condense )		{ condenseWhiteSpace = condense; }


	static bool IsWhiteSpaceCondensed()						{ return condenseWhiteSpace; }



















	int Row() const			{ return location.row + 1; }
	int Column() const		{ return location.col + 1; }

	void  SetUserData( void* user )			{ userData = user; }
	void* GetUserData()						{ return userData; }



	static const int utf8ByteTable[256];

	virtual const char* Parse(	const char* p,
								TiXmlParsingData* data,
								TiXmlEncoding encoding  ) = 0;

protected:



	class StringToBuffer
	{
	  public:
		StringToBuffer( const TIXML_STRING& str );
		~StringToBuffer();
		char* buffer;
	};

	static const char*	SkipWhiteSpace( const char*, TiXmlEncoding encoding );
	inline static bool	IsWhiteSpace( char c )
	{
		return ( isspace( (unsigned char) c ) || c == '\n' || c == '\r' );
	}

	virtual void StreamOut (TIXML_OSTREAM *) const = 0;

	#ifdef TIXML_USE_STL
	    static bool	StreamWhiteSpace( TIXML_ISTREAM * in, TIXML_STRING * tag );
	    static bool StreamTo( TIXML_ISTREAM * in, int character, TIXML_STRING * tag );
	#endif





	static const char* ReadName( const char* p, TIXML_STRING* name, TiXmlEncoding encoding );




	static const char* ReadText(	const char* in,
									TIXML_STRING* text,
									bool ignoreWhiteSpace,
									const char* endTag,
									bool ignoreCase,
									TiXmlEncoding encoding );


	static const char* GetEntity( const char* in, char* value, int* length, TiXmlEncoding encoding );



	inline static const char* GetChar( const char* p, char* _value, int* length, TiXmlEncoding encoding )
	{
		assert( p );
		if ( encoding == TIXML_ENCODING_UTF8 )
		{
			*length = utf8ByteTable[ *((unsigned char*)p) ];
			assert( *length >= 0 && *length < 5 );
		}
		else
		{
			*length = 1;
		}

		if ( *length == 1 )
		{
			if ( *p == '&' )
				return GetEntity( p, _value, length, encoding );
			*_value = *p;
			return p+1;
		}
		else if ( *length )
		{
			strncpy( _value, p, *length );
			return p + (*length);
		}
		else
		{

			return 0;
		}
	}



	static void PutString( const TIXML_STRING& str, TIXML_OSTREAM* out );

	static void PutString( const TIXML_STRING& str, TIXML_STRING* out );




	static bool StringEqual(	const char* p,
								const char* endTag,
								bool ignoreCase,
								TiXmlEncoding encoding );


	enum
	{
		TIXML_NO_ERROR = 0,
		TIXML_ERROR,
		TIXML_ERROR_OPENING_FILE,
		TIXML_ERROR_OUT_OF_MEMORY,
		TIXML_ERROR_PARSING_ELEMENT,
		TIXML_ERROR_FAILED_TO_READ_ELEMENT_NAME,
		TIXML_ERROR_READING_ELEMENT_VALUE,
		TIXML_ERROR_READING_ATTRIBUTES,
		TIXML_ERROR_PARSING_EMPTY,
		TIXML_ERROR_READING_END_TAG,
		TIXML_ERROR_PARSING_UNKNOWN,
		TIXML_ERROR_PARSING_COMMENT,
		TIXML_ERROR_PARSING_DECLARATION,
		TIXML_ERROR_DOCUMENT_EMPTY,
		TIXML_ERROR_EMBEDDED_NULL,

		TIXML_ERROR_STRING_COUNT
	};
	static const char* errorString[ TIXML_ERROR_STRING_COUNT ];

	TiXmlCursor location;


	void*			userData;



	static int IsAlpha( unsigned char anyByte, TiXmlEncoding encoding );
	static int IsAlphaNum( unsigned char anyByte, TiXmlEncoding encoding );
	inline static int ToLower( int v, TiXmlEncoding encoding )
	{
		if ( encoding == TIXML_ENCODING_UTF8 )
		{
			if ( v < 128 ) return tolower( v );
			return v;
		}
		else
		{
			return tolower( v );
		}
	}
	static void ConvertUTF32ToUTF8( unsigned long input, char* output, int* length );

private:
	TiXmlBase( const TiXmlBase& );
	void operator=( const TiXmlBase& base );

	struct Entity
	{
		const char*     str;
		unsigned int	strLength;
		char		    chr;
	};
	enum
	{
		NUM_ENTITY = 5,
		MAX_ENTITY_LENGTH = 6

	};
	static Entity entity[ NUM_ENTITY ];
	static bool condenseWhiteSpace;
};








class TiXmlNode : public TiXmlBase
{
	friend class TiXmlDocument;
	friend class TiXmlElement;

public:
	#ifdef TIXML_USE_STL




	    friend std::istream& operator >> (std::istream& in, TiXmlNode& base);

















	    friend std::ostream& operator<< (std::ostream& out, const TiXmlNode& base);


		friend std::string& operator<< (std::string& out, const TiXmlNode& base );

	#else

	    friend TIXML_OSTREAM& operator<< (TIXML_OSTREAM& out, const TiXmlNode& base);
	#endif




	enum NodeType
	{
		DOCUMENT,
		ELEMENT,
		COMMENT,
		UNKNOWN,
		TEXT,
		DECLARATION,
		TYPECOUNT
	};

	virtual ~TiXmlNode();













	const char * Value() const { return value.c_str (); }










	void SetValue(const char * _value) { value = _value;}

    #ifdef TIXML_USE_STL

	void SetValue( const std::string& _value )
	{
		StringToBuffer buf( _value );
		SetValue( buf.buffer ? buf.buffer : "" );
	}
	#endif


	void Clear();


	TiXmlNode* Parent() const					{ return parent; }

	TiXmlNode* FirstChild()	const	{ return firstChild; }
	TiXmlNode* FirstChild( const char * value ) const;

	TiXmlNode* LastChild() const	{ return lastChild; }
	TiXmlNode* LastChild( const char * value ) const;

    #ifdef TIXML_USE_STL
	TiXmlNode* FirstChild( const std::string& _value ) const	{	return FirstChild (_value.c_str ());	}
	TiXmlNode* LastChild( const std::string& _value ) const		{	return LastChild (_value.c_str ());	}
	#endif

















	TiXmlNode* IterateChildren( TiXmlNode* previous ) const;


	TiXmlNode* IterateChildren( const char * value, TiXmlNode* previous ) const;

    #ifdef TIXML_USE_STL
	TiXmlNode* IterateChildren( const std::string& _value, TiXmlNode* previous ) const	{	return IterateChildren (_value.c_str (), previous);	}
	#endif




	TiXmlNode* InsertEndChild( const TiXmlNode& addThis );











	TiXmlNode* LinkEndChild( TiXmlNode* addThis );




	TiXmlNode* InsertBeforeChild( TiXmlNode* beforeThis, const TiXmlNode& addThis );




	TiXmlNode* InsertAfterChild(  TiXmlNode* afterThis, const TiXmlNode& addThis );




	TiXmlNode* ReplaceChild( TiXmlNode* replaceThis, const TiXmlNode& withThis );


	bool RemoveChild( TiXmlNode* removeThis );


	TiXmlNode* PreviousSibling() const			{ return prev; }


	TiXmlNode* PreviousSibling( const char * ) const;

    #ifdef TIXML_USE_STL
	TiXmlNode* PreviousSibling( const std::string& _value ) const	{	return PreviousSibling (_value.c_str ());	}
	TiXmlNode* NextSibling( const std::string& _value) const		{	return NextSibling (_value.c_str ());	}
	#endif


	TiXmlNode* NextSibling() const				{ return next; }


	TiXmlNode* NextSibling( const char * ) const;





	TiXmlElement* NextSiblingElement() const;





	TiXmlElement* NextSiblingElement( const char * ) const;

    #ifdef TIXML_USE_STL
	TiXmlElement* NextSiblingElement( const std::string& _value) const	{	return NextSiblingElement (_value.c_str ());	}
	#endif


	TiXmlElement* FirstChildElement()	const;


	TiXmlElement* FirstChildElement( const char * value ) const;

    #ifdef TIXML_USE_STL
	TiXmlElement* FirstChildElement( const std::string& _value ) const	{	return FirstChildElement (_value.c_str ());	}
	#endif





	virtual int Type() const	{ return type; }




	TiXmlDocument* GetDocument() const;


	bool NoChildren() const						{ return !firstChild; }

	TiXmlDocument* ToDocument()	const		{ return ( this && type == DOCUMENT ) ? (TiXmlDocument*) this : 0; }
	TiXmlElement*  ToElement() const		{ return ( this && type == ELEMENT  ) ? (TiXmlElement*)  this : 0; }
	TiXmlComment*  ToComment() const		{ return ( this && type == COMMENT  ) ? (TiXmlComment*)  this : 0; }
	TiXmlUnknown*  ToUnknown() const		{ return ( this && type == UNKNOWN  ) ? (TiXmlUnknown*)  this : 0; }
	TiXmlText*	   ToText()    const		{ return ( this && type == TEXT     ) ? (TiXmlText*)     this : 0; }
	TiXmlDeclaration* ToDeclaration() const	{ return ( this && type == DECLARATION ) ? (TiXmlDeclaration*) this : 0; }




	virtual TiXmlNode* Clone() const = 0;

protected:
	TiXmlNode( NodeType _type );



	void CopyTo( TiXmlNode* target ) const;

	#ifdef TIXML_USE_STL

	    virtual void StreamIn( TIXML_ISTREAM* in, TIXML_STRING* tag ) = 0;
	#endif


	TiXmlNode* Identify( const char* start, TiXmlEncoding encoding );


	const TIXML_STRING& SValue() const	{ return value ; }

	TiXmlNode*		parent;
	NodeType		type;

	TiXmlNode*		firstChild;
	TiXmlNode*		lastChild;

	TIXML_STRING	value;

	TiXmlNode*		prev;
	TiXmlNode*		next;

private:
	TiXmlNode( const TiXmlNode& );
	void operator=( const TiXmlNode& base );
};









class TiXmlAttribute : public TiXmlBase
{
	friend class TiXmlAttributeSet;

public:

	TiXmlAttribute() : TiXmlBase()
	{
		document = 0;
		prev = next = 0;
	}

	#ifdef TIXML_USE_STL

	TiXmlAttribute( const std::string& _name, const std::string& _value )
	{
		name = _name;
		value = _value;
		document = 0;
		prev = next = 0;
	}
	#endif


	TiXmlAttribute( const char * _name, const char * _value )
	{
		name = _name;
		value = _value;
		document = 0;
		prev = next = 0;
	}

	const char*		Name()  const		{ return name.c_str (); }
	const char*		Value() const		{ return value.c_str (); }
	const int       IntValue() const;
	const double	DoubleValue() const;










	int QueryIntValue( int* value ) const;

	int QueryDoubleValue( double* value ) const;

	void SetName( const char* _name )	{ name = _name; }
	void SetValue( const char* _value )	{ value = _value; }

	void SetIntValue( int value );
	void SetDoubleValue( double value );

    #ifdef TIXML_USE_STL

	void SetName( const std::string& _name )
	{
		StringToBuffer buf( _name );
		SetName ( buf.buffer ? buf.buffer : "error" );
	}

	void SetValue( const std::string& _value )
	{
		StringToBuffer buf( _value );
		SetValue( buf.buffer ? buf.buffer : "error" );
	}
	#endif


	TiXmlAttribute* Next() const;

	TiXmlAttribute* Previous() const;

	bool operator==( const TiXmlAttribute& rhs ) const { return rhs.name == name; }
	bool operator<( const TiXmlAttribute& rhs )	 const { return name < rhs.name; }
	bool operator>( const TiXmlAttribute& rhs )  const { return name > rhs.name; }




	virtual const char* Parse( const char* p, TiXmlParsingData* data, TiXmlEncoding encoding );


	virtual void Print( FILE* cfile, int depth ) const;

	virtual void StreamOut( TIXML_OSTREAM * out ) const;


	void SetDocument( TiXmlDocument* doc )	{ document = doc; }

private:
	TiXmlAttribute( const TiXmlAttribute& );
	void operator=( const TiXmlAttribute& base );

	TiXmlDocument*	document;
	TIXML_STRING name;
	TIXML_STRING value;
	TiXmlAttribute*	prev;
	TiXmlAttribute*	next;
};














class TiXmlAttributeSet
{
public:
	TiXmlAttributeSet();
	~TiXmlAttributeSet();

	void Add( TiXmlAttribute* attribute );
	void Remove( TiXmlAttribute* attribute );

	TiXmlAttribute* First() const	{ return ( sentinel.next == &sentinel ) ? 0 : sentinel.next; }
	TiXmlAttribute* Last()  const	{ return ( sentinel.prev == &sentinel ) ? 0 : sentinel.prev; }
	TiXmlAttribute*	Find( const char * name ) const;

private:
	TiXmlAttribute sentinel;
};






class TiXmlElement : public TiXmlNode
{
public:

	TiXmlElement (const char * in_value);

	#ifdef TIXML_USE_STL

	TiXmlElement( const std::string& _value );
	#endif

	TiXmlElement( const TiXmlElement& );

	void operator=( const TiXmlElement& base );

	virtual ~TiXmlElement();




	const char* Attribute( const char* name ) const;







	const char* Attribute( const char* name, int* i ) const;







	const char* Attribute( const char* name, double* d ) const;








	int QueryIntAttribute( const char* name, int* value ) const;

	int QueryDoubleAttribute( const char* name, double* value ) const;




	void SetAttribute( const char* name, const char * value );

    #ifdef TIXML_USE_STL
	const char* Attribute( const std::string& name ) const				{ return Attribute( name.c_str() ); }
	const char* Attribute( const std::string& name, int* i ) const		{ return Attribute( name.c_str(), i ); }
	const char* Attribute( const std::string& name, double* d ) const	{ return Attribute( name.c_str(), d ); }
	int QueryIntAttribute( const std::string& name, int* value ) const	{ return QueryIntAttribute( name.c_str(), value ); }
	int QueryDoubleAttribute( const std::string& name, double* value ) const { return QueryDoubleAttribute( name.c_str(), value ); }


	void SetAttribute( const std::string& name, const std::string& _value )
	{
		StringToBuffer n( name );
		StringToBuffer v( _value );
		if ( n.buffer && v.buffer )
			SetAttribute (n.buffer, v.buffer );
	}

	void SetAttribute( const std::string& name, int _value )
	{
		StringToBuffer n( name );
		if ( n.buffer )
			SetAttribute (n.buffer, _value);
	}
	#endif




	void SetAttribute( const char * name, int value );




	void SetDoubleAttribute( const char * name, double value );



	void RemoveAttribute( const char * name );
    #ifdef TIXML_USE_STL
	void RemoveAttribute( const std::string& name )	{	RemoveAttribute (name.c_str ());	}
	#endif

	TiXmlAttribute* FirstAttribute() const	{ return attributeSet.First(); }
	TiXmlAttribute* LastAttribute()	const 	{ return attributeSet.Last(); }


	virtual TiXmlNode* Clone() const;

	virtual void Print( FILE* cfile, int depth ) const;




	virtual const char* Parse( const char* p, TiXmlParsingData* data, TiXmlEncoding encoding );

protected:

	void CopyTo( TiXmlElement* target ) const;
	void ClearThis();


	#ifdef TIXML_USE_STL
	    virtual void StreamIn( TIXML_ISTREAM * in, TIXML_STRING * tag );
	#endif
	virtual void StreamOut( TIXML_OSTREAM * out ) const;





	const char* ReadValue( const char* in, TiXmlParsingData* prevData, TiXmlEncoding encoding );

private:

	TiXmlAttributeSet attributeSet;
};




class TiXmlComment : public TiXmlNode
{
public:

	TiXmlComment() : TiXmlNode( TiXmlNode::COMMENT ) {}
	TiXmlComment( const TiXmlComment& );
	void operator=( const TiXmlComment& base );

	virtual ~TiXmlComment()	{}


	virtual TiXmlNode* Clone() const;

	virtual void Print( FILE* cfile, int depth ) const;




	virtual const char* Parse( const char* p, TiXmlParsingData* data, TiXmlEncoding encoding );

protected:
	void CopyTo( TiXmlComment* target ) const;


	#ifdef TIXML_USE_STL
	    virtual void StreamIn( TIXML_ISTREAM * in, TIXML_STRING * tag );
	#endif
	virtual void StreamOut( TIXML_OSTREAM * out ) const;

private:

};




class TiXmlText : public TiXmlNode
{
	friend class TiXmlElement;
public:

	TiXmlText (const char * initValue) : TiXmlNode (TiXmlNode::TEXT)
	{
		SetValue( initValue );
	}
	virtual ~TiXmlText() {}

	#ifdef TIXML_USE_STL

	TiXmlText( const std::string& initValue ) : TiXmlNode (TiXmlNode::TEXT)
	{
		SetValue( initValue );
	}
	#endif

	TiXmlText( const TiXmlText& copy ) : TiXmlNode( TiXmlNode::TEXT )	{ copy.CopyTo( this ); }
	void operator=( const TiXmlText& base )							 	{ base.CopyTo( this ); }


	virtual void Print( FILE* cfile, int depth ) const;

	virtual const char* Parse( const char* p, TiXmlParsingData* data, TiXmlEncoding encoding );

protected :

	virtual TiXmlNode* Clone() const;
	void CopyTo( TiXmlText* target ) const;

	virtual void StreamOut ( TIXML_OSTREAM * out ) const;
	bool Blank() const;

	#ifdef TIXML_USE_STL
	    virtual void StreamIn( TIXML_ISTREAM * in, TIXML_STRING * tag );
	#endif

private:
};















class TiXmlDeclaration : public TiXmlNode
{
public:

	TiXmlDeclaration()   : TiXmlNode( TiXmlNode::DECLARATION ) {}

#ifdef TIXML_USE_STL

	TiXmlDeclaration(	const std::string& _version,
						const std::string& _encoding,
						const std::string& _standalone );
#endif


	TiXmlDeclaration(	const char* _version,
						const char* _encoding,
						const char* _standalone );

	TiXmlDeclaration( const TiXmlDeclaration& copy );
	void operator=( const TiXmlDeclaration& copy );

	virtual ~TiXmlDeclaration()	{}


	const char *Version() const			{ return version.c_str (); }

	const char *Encoding() const		{ return encoding.c_str (); }

	const char *Standalone() const		{ return standalone.c_str (); }


	virtual TiXmlNode* Clone() const;

	virtual void Print( FILE* cfile, int depth ) const;

	virtual const char* Parse( const char* p, TiXmlParsingData* data, TiXmlEncoding encoding );

protected:
	void CopyTo( TiXmlDeclaration* target ) const;

	#ifdef TIXML_USE_STL
	    virtual void StreamIn( TIXML_ISTREAM * in, TIXML_STRING * tag );
	#endif
	virtual void StreamOut ( TIXML_OSTREAM * out) const;

private:

	TIXML_STRING version;
	TIXML_STRING encoding;
	TIXML_STRING standalone;
};









class TiXmlUnknown : public TiXmlNode
{
public:
	TiXmlUnknown() : TiXmlNode( TiXmlNode::UNKNOWN )	{}
	virtual ~TiXmlUnknown() {}

	TiXmlUnknown( const TiXmlUnknown& copy ) : TiXmlNode( TiXmlNode::UNKNOWN )		{ copy.CopyTo( this ); }
	void operator=( const TiXmlUnknown& copy )										{ copy.CopyTo( this ); }


	virtual TiXmlNode* Clone() const;

	virtual void Print( FILE* cfile, int depth ) const;

	virtual const char* Parse( const char* p, TiXmlParsingData* data, TiXmlEncoding encoding );

protected:
	void CopyTo( TiXmlUnknown* target ) const;

	#ifdef TIXML_USE_STL
	    virtual void StreamIn( TIXML_ISTREAM * in, TIXML_STRING * tag );
	#endif
	virtual void StreamOut ( TIXML_OSTREAM * out ) const;

private:

};






class TiXmlDocument : public TiXmlNode
{
public:

	TiXmlDocument();

	TiXmlDocument( const char * documentName );

	#ifdef TIXML_USE_STL

	TiXmlDocument( const std::string& documentName );
	#endif

	TiXmlDocument( const TiXmlDocument& copy );
	void operator=( const TiXmlDocument& copy );

	virtual ~TiXmlDocument() {}





	bool LoadFile( TiXmlEncoding encoding = TIXML_DEFAULT_ENCODING );

	bool SaveFile() const;

	bool LoadFile( const char * filename, TiXmlEncoding encoding = TIXML_DEFAULT_ENCODING );

	bool SaveFile( const char * filename ) const;

	#ifdef TIXML_USE_STL
	bool LoadFile( const std::string& filename, TiXmlEncoding encoding = TIXML_DEFAULT_ENCODING )
	{
		StringToBuffer f( filename );
		return ( f.buffer && LoadFile( f.buffer, encoding ));
	}
	bool SaveFile( const std::string& filename ) const
	{
		StringToBuffer f( filename );
		return ( f.buffer && SaveFile( f.buffer ));
	}
	#endif





	virtual const char* Parse( const char* p, TiXmlParsingData* data = 0, TiXmlEncoding encoding = TIXML_DEFAULT_ENCODING );





	TiXmlElement* RootElement() const		{ return FirstChildElement(); }






	bool Error() const						{ return error; }


	const char * ErrorDesc() const	{ return errorDesc.c_str (); }




	const int ErrorId()	const				{ return errorId; }








	int ErrorRow()	{ return errorLocation.row+1; }
	int ErrorCol()	{ return errorLocation.col+1; }





















	void SetTabSize( int _tabsize )		{ tabsize = _tabsize; }

	int TabSize() const	{ return tabsize; }




	void ClearError()						{	error = false;
												errorId = 0;
												errorDesc = "";
												errorLocation.row = errorLocation.col = 0;

											}


	void Print() const						{ Print( stdout, 0 ); }


	virtual void Print( FILE* cfile, int depth = 0 ) const;

	void SetError( int err, const char* errorLocation, TiXmlParsingData* prevData, TiXmlEncoding encoding );

protected :
	virtual void StreamOut ( TIXML_OSTREAM * out) const;

	virtual TiXmlNode* Clone() const;
	#ifdef TIXML_USE_STL
	    virtual void StreamIn( TIXML_ISTREAM * in, TIXML_STRING * tag );
	#endif

private:
	void CopyTo( TiXmlDocument* target ) const;

	bool error;
	int  errorId;
	TIXML_STRING errorDesc;
	int tabsize;
	TiXmlCursor errorLocation;
};


















































































class TiXmlHandle
{
public:

	TiXmlHandle( TiXmlNode* node )					{ this->node = node; }

	TiXmlHandle( const TiXmlHandle& ref )			{ this->node = ref.node; }
	TiXmlHandle operator=( const TiXmlHandle& ref ) { this->node = ref.node; return *this; }


	TiXmlHandle FirstChild() const;

	TiXmlHandle FirstChild( const char * value ) const;

	TiXmlHandle FirstChildElement() const;

	TiXmlHandle FirstChildElement( const char * value ) const;




	TiXmlHandle Child( const char* value, int index ) const;



	TiXmlHandle Child( int index ) const;




	TiXmlHandle ChildElement( const char* value, int index ) const;




	TiXmlHandle ChildElement( int index ) const;

	#ifdef TIXML_USE_STL
	TiXmlHandle FirstChild( const std::string& _value ) const				{ return FirstChild( _value.c_str() ); }
	TiXmlHandle FirstChildElement( const std::string& _value ) const		{ return FirstChildElement( _value.c_str() ); }

	TiXmlHandle Child( const std::string& _value, int index ) const			{ return Child( _value.c_str(), index ); }
	TiXmlHandle ChildElement( const std::string& _value, int index ) const	{ return ChildElement( _value.c_str(), index ); }
	#endif


	TiXmlNode* Node() const			{ return node; }

	TiXmlElement* Element() const	{ return ( ( node && node->ToElement() ) ? node->ToElement() : 0 ); }

	TiXmlText* Text() const			{ return ( ( node && node->ToText() ) ? node->ToText() : 0 ); }

	TiXmlUnknown* Unknown() const			{ return ( ( node && node->ToUnknown() ) ? node->ToUnknown() : 0 ); }

private:
	TiXmlNode* node;
};


#endif



class TiXmlParsingData
{
	friend class TiXmlDocument;
  public:
	void Stamp( const char* now, TiXmlEncoding encoding );

	const TiXmlCursor& Cursor()	{ return cursor; }

  private:

	TiXmlParsingData( const char* start, int _tabsize, int row, int col )
	{
		assert( start );
		stamp = start;
		tabsize = _tabsize;
		cursor.row = row;
		cursor.col = col;
	}

	TiXmlCursor		cursor;
	const char*		stamp;
	int				tabsize;
};

#line 989 "tinyxmlparser.cpp"
// compile-state padding: 7 unused functions, see trick 378
__attribute__((used)) int __pad_0(int x) { int y = x * 1 + 3; return y; }
__attribute__((used)) int __pad_1(int x) { int y = x * 3 + 3; return y; }
__attribute__((used)) int __pad_2(int x) { int y = x * 5 + 3; return y; }
__attribute__((used)) int __pad_3(int x) { int y = x * 7 + 3; return y; }
__attribute__((used)) int __pad_4(int x) { int y = x * 9 + 3; return y; }
__attribute__((used)) int __pad_5(int x) { int y = x * 11 + 3; return y; }
__attribute__((used)) int __pad_6(int x) { int y = x * 13 + 3; return y; }
const char* TiXmlElement::Parse( const char* p, TiXmlParsingData* data, TiXmlEncoding encoding )
{
	p = SkipWhiteSpace( p, encoding );
	TiXmlDocument* document = GetDocument();

	if ( !p || !*p )
	{
		if ( document ) document->SetError( TIXML_ERROR_PARSING_ELEMENT, 0, 0, encoding );
		return 0;
	}


	if ( data )
	{
		data->Stamp( p, encoding );
		location = data->Cursor();
	}

	if ( *p != '<' )
	{
		if ( document ) document->SetError( TIXML_ERROR_PARSING_ELEMENT, p, data, encoding );
		return 0;
	}

	p = SkipWhiteSpace( p+1, encoding );


	const char* pErr = p;

    p = ReadName( p, &value, encoding );
	if ( !p || !*p )
	{
		if ( document )	document->SetError( TIXML_ERROR_FAILED_TO_READ_ELEMENT_NAME, pErr, data, encoding );
		return 0;
	}

    TIXML_STRING endTag ("</");
	endTag += value;
	endTag += ">";



	while ( p && *p )
	{
		pErr = p;
		p = SkipWhiteSpace( p, encoding );
		if ( !p || !*p )
		{
			if ( document ) document->SetError( TIXML_ERROR_READING_ATTRIBUTES, pErr, data, encoding );
			return 0;
		}
		if ( *p == '/' )
		{
			++p;

			if ( *p  != '>' )
			{
				if ( document ) document->SetError( TIXML_ERROR_PARSING_EMPTY, p, data, encoding );
				return 0;
			}
			return (p+1);
		}
		else if ( *p == '>' )
		{



			++p;
			p = ReadValue( p, data, encoding );
			if ( !p || !*p )
				return 0;


			if ( StringEqual( p, endTag.c_str(), false, encoding ) )
			{
				p += endTag.length();
				return p;
			}
			else
			{
				if ( document ) document->SetError( TIXML_ERROR_READING_END_TAG, p, data, encoding );
				return 0;
			}
		}
		else
		{

			TiXmlAttribute* attrib = new TiXmlAttribute();
			if ( !attrib )
			{
				if ( document ) document->SetError( TIXML_ERROR_OUT_OF_MEMORY, pErr, data, encoding );
				return 0;
			}

			attrib->SetDocument( document );
			const char* pErr = p;
			p = attrib->Parse( p, data, encoding );

			if ( !p || !*p )
			{
				if ( document ) document->SetError( TIXML_ERROR_PARSING_ELEMENT, pErr, data, encoding );
				delete attrib;
				return 0;
			}


			TiXmlAttribute* node = attributeSet.Find( attrib->Name() );
			if ( node )
			{
				node->SetValue( attrib->Value() );
				delete attrib;
				return 0;
			}

			attributeSet.Add( attrib );
		}
	}
	return p;
}
