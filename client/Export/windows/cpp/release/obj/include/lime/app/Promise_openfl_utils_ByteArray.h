// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_app_Promise_openfl_utils_ByteArray
#define INCLUDED_lime_app_Promise_openfl_utils_ByteArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,app,Promise_openfl_utils_ByteArray)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES Promise_openfl_utils_ByteArray_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Promise_openfl_utils_ByteArray_obj OBJ_;
		Promise_openfl_utils_ByteArray_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.app.Promise_openfl_utils_ByteArray")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.app.Promise_openfl_utils_ByteArray"); }
		static hx::ObjectPtr< Promise_openfl_utils_ByteArray_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Promise_openfl_utils_ByteArray_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Promise_openfl_utils_ByteArray","\x18","\xee","\xce","\xe3"); }

		 ::lime::app::Future future;
		Bool isComplete;
		Bool isError;
		 ::lime::app::Promise_openfl_utils_ByteArray complete( ::openfl::utils::ByteArrayData data);
		::Dynamic complete_dyn();

		 ::lime::app::Promise_openfl_utils_ByteArray completeWith( ::lime::app::Future future);
		::Dynamic completeWith_dyn();

		 ::lime::app::Promise_openfl_utils_ByteArray error( ::Dynamic msg);
		::Dynamic error_dyn();

		 ::lime::app::Promise_openfl_utils_ByteArray progress(Int progress,Int total);
		::Dynamic progress_dyn();

		Bool get_isComplete();
		::Dynamic get_isComplete_dyn();

		Bool get_isError();
		::Dynamic get_isError_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Promise_openfl_utils_ByteArray */ 
