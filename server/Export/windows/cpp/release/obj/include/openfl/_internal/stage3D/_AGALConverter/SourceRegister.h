// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SourceRegister
#define INCLUDED_openfl__internal_stage3D__AGALConverter_SourceRegister

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <cpp/Int64.h>
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,ProgramType)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,SourceRegister)

namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{


class HXCPP_CLASS_ATTRIBUTES SourceRegister_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SourceRegister_obj OBJ_;
		SourceRegister_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.stage3D._AGALConverter.SourceRegister")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.stage3D._AGALConverter.SourceRegister"); }
		static hx::ObjectPtr< SourceRegister_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SourceRegister_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SourceRegister","\x7e","\x7a","\x8d","\x0c"); }

		static  ::openfl::_internal::stage3D::_AGALConverter::SourceRegister parse( ::cpp::Int64Struct v,::hx::EnumBase programType,Int sourceMask);
		static ::Dynamic parse_dyn();

		Int d;
		Int itype;
		Int n;
		Int o;
		::hx::EnumBase programType;
		Int q;
		Int s;
		Int sourceMask;
		Int type;
		::String toGLSL(hx::Null< Bool >  emitSwizzle,hx::Null< Int >  offset);
		::Dynamic toGLSL_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter

#endif /* INCLUDED_openfl__internal_stage3D__AGALConverter_SourceRegister */ 
