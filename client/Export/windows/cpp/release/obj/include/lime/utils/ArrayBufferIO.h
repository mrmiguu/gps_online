// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_utils_ArrayBufferIO
#define INCLUDED_lime_utils_ArrayBufferIO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferIO)

namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES ArrayBufferIO_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ArrayBufferIO_obj OBJ_;
		ArrayBufferIO_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.utils.ArrayBufferIO")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.utils.ArrayBufferIO"); }
		static hx::ObjectPtr< ArrayBufferIO_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArrayBufferIO_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ArrayBufferIO","\x7f","\x77","\x2c","\x77"); }

		static Int getInt16( ::haxe::io::Bytes buffer,Int byteOffset);
		static ::Dynamic getInt16_dyn();

		static Int getInt16_BE( ::haxe::io::Bytes buffer,Int byteOffset);
		static ::Dynamic getInt16_BE_dyn();

		static void setInt16( ::haxe::io::Bytes buffer,Int byteOffset,Int value);
		static ::Dynamic setInt16_dyn();

		static void setInt16_BE( ::haxe::io::Bytes buffer,Int byteOffset,Int value);
		static ::Dynamic setInt16_BE_dyn();

};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_ArrayBufferIO */ 
