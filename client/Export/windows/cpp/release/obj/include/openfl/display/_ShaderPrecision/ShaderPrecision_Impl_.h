// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl_display__ShaderPrecision_ShaderPrecision_Impl_
#define INCLUDED_openfl_display__ShaderPrecision_ShaderPrecision_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_ShaderPrecision,ShaderPrecision_Impl_)

namespace openfl{
namespace display{
namespace _ShaderPrecision{


class HXCPP_CLASS_ATTRIBUTES ShaderPrecision_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ShaderPrecision_Impl__obj OBJ_;
		ShaderPrecision_Impl__obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._ShaderPrecision.ShaderPrecision_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.display._ShaderPrecision.ShaderPrecision_Impl_"); }
		static hx::ObjectPtr< ShaderPrecision_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderPrecision_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ShaderPrecision_Impl_","\x99","\xde","\x34","\x15"); }

		static void __boot();
		static  ::Dynamic FAST;
		static  ::Dynamic FULL;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString(Int value);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _ShaderPrecision

#endif /* INCLUDED_openfl_display__ShaderPrecision_ShaderPrecision_Impl_ */ 
