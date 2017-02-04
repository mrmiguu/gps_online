// Generated by Haxe 3.3.0
#ifndef INCLUDED_haxe_io_Bytes
#define INCLUDED_haxe_io_Bytes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <cpp/Int64.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES Bytes_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Bytes_obj OBJ_;
		Bytes_obj();

	public:
		void __construct(Int length,::Array< unsigned char > b);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.io.Bytes")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.io.Bytes"); }
		static hx::ObjectPtr< Bytes_obj > __new(Int length,::Array< unsigned char > b);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bytes_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Bytes","\x4b","\x78","\xc5","\x50"); }

		static  ::haxe::io::Bytes alloc(Int length);
		static ::Dynamic alloc_dyn();

		static  ::haxe::io::Bytes ofString(::String s);
		static ::Dynamic ofString_dyn();

		static  ::haxe::io::Bytes ofData(::Array< unsigned char > b);
		static ::Dynamic ofData_dyn();

		static Int fastGet(::Array< unsigned char > b,Int pos);
		static ::Dynamic fastGet_dyn();

		Int length;
		::Array< unsigned char > b;
		Int get(Int pos);
		::Dynamic get_dyn();

		void set(Int pos,Int v);
		::Dynamic set_dyn();

		void blit(Int pos, ::haxe::io::Bytes src,Int srcpos,Int len);
		::Dynamic blit_dyn();

		void fill(Int pos,Int len,Int value);
		::Dynamic fill_dyn();

		 ::haxe::io::Bytes sub(Int pos,Int len);
		::Dynamic sub_dyn();

		Int compare( ::haxe::io::Bytes other);
		::Dynamic compare_dyn();

		Float getDouble(Int pos);
		::Dynamic getDouble_dyn();

		Float getFloat(Int pos);
		::Dynamic getFloat_dyn();

		void setDouble(Int pos,Float v);
		::Dynamic setDouble_dyn();

		void setFloat(Int pos,Float v);
		::Dynamic setFloat_dyn();

		Int getUInt16(Int pos);
		::Dynamic getUInt16_dyn();

		void setUInt16(Int pos,Int v);
		::Dynamic setUInt16_dyn();

		Int getInt32(Int pos);
		::Dynamic getInt32_dyn();

		 ::cpp::Int64Struct getInt64(Int pos);
		::Dynamic getInt64_dyn();

		void setInt32(Int pos,Int v);
		::Dynamic setInt32_dyn();

		void setInt64(Int pos, ::cpp::Int64Struct v);
		::Dynamic setInt64_dyn();

		::String getString(Int pos,Int len);
		::Dynamic getString_dyn();

		::String readString(Int pos,Int len);
		::Dynamic readString_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		::String toHex();
		::Dynamic toHex_dyn();

		::Array< unsigned char > getData();
		::Dynamic getData_dyn();

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_Bytes */ 
