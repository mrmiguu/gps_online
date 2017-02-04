// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif

namespace lime{
namespace utils{

void Log_obj::__construct() { }

Dynamic Log_obj::__CreateEmpty() { return new Log_obj; }

hx::ObjectPtr< Log_obj > Log_obj::__new()
{
	hx::ObjectPtr< Log_obj > _hx_result = new Log_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Log_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Log_obj > _hx_result = new Log_obj();
	_hx_result->__construct();
	return _hx_result;
}

void Log_obj::__init__(){
            	HX_STACK_FRAME("::lime::utils::Log_obj","__init__",0xc6d9689e,"::lime::utils::Log_obj.__init__","lime/utils/Log.hx",103,0x300eb2b2)
HXLINE( 111)		HX_VARI( ::Array< ::String >,args) = ::Sys_obj::args();
HXLINE( 112)		Bool _hx_tmp;
HXDLIN( 112)		Int _hx_tmp1 = args->indexOf(HX_("-v",a9,27,00,00),null());
HXDLIN( 112)		if (!((_hx_tmp1 > (int)-1))) {
HXLINE( 112)			Int _hx_tmp2 = args->indexOf(HX_("-verbose",f5,e6,97,7f),null());
HXDLIN( 112)			_hx_tmp = (_hx_tmp2 > (int)-1);
            		}
            		else {
HXLINE( 112)			_hx_tmp = true;
            		}
HXDLIN( 112)		if (_hx_tmp) {
HXLINE( 113)			::lime::utils::Log_obj::level = (int)5;
            		}
            		else {
HXLINE( 120)			::lime::utils::Log_obj::level = (int)3;
            		}
            	}


Int Log_obj::level;

void Log_obj::debug(::String message, ::Dynamic info){
            	HX_STACK_FRAME("lime.utils.Log","debug",0x08fb4af3,"lime.utils.Log.debug","lime/utils/Log.hx",20,0x300eb2b2)
            	HX_STACK_ARG(message,"message")
            	HX_STACK_ARG(info,"info")
HXLINE(  20)		Bool _hx_tmp = (::lime::utils::Log_obj::level >= (int)4);
HXDLIN(  20)		if (_hx_tmp) {
HXLINE(  22)			::Sys_obj::println((((HX_("[",5b,00,00,00) + ( (::String)(info->__Field(HX_("className",a3,92,3d,dc),hx::paccDynamic)) )) + HX_("] ",23,51,00,00)) + message));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,debug,(void))

void Log_obj::error(::String message, ::Dynamic info){
            	HX_STACK_FRAME("lime.utils.Log","error",0xa505c468,"lime.utils.Log.error","lime/utils/Log.hx",31,0x300eb2b2)
            	HX_STACK_ARG(message,"message")
            	HX_STACK_ARG(info,"info")
HXLINE(  31)		Bool _hx_tmp = (::lime::utils::Log_obj::level >= (int)1);
HXDLIN(  31)		if (_hx_tmp) {
HXLINE(  33)			::Sys_obj::println((((HX_("[",5b,00,00,00) + ( (::String)(info->__Field(HX_("className",a3,92,3d,dc),hx::paccDynamic)) )) + HX_("] ERROR: ",8b,d9,df,31)) + message));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,error,(void))

void Log_obj::info(::String message, ::Dynamic info){
            	HX_STACK_FRAME("lime.utils.Log","info",0xefdb33ce,"lime.utils.Log.info","lime/utils/Log.hx",42,0x300eb2b2)
            	HX_STACK_ARG(message,"message")
            	HX_STACK_ARG(info,"info")
HXLINE(  42)		Bool _hx_tmp = (::lime::utils::Log_obj::level >= (int)3);
HXDLIN(  42)		if (_hx_tmp) {
HXLINE(  44)			::Sys_obj::println((((HX_("[",5b,00,00,00) + ( (::String)(info->__Field(HX_("className",a3,92,3d,dc),hx::paccDynamic)) )) + HX_("] ",23,51,00,00)) + message));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,info,(void))

void Log_obj::print(::String message){
            	HX_STACK_FRAME("lime.utils.Log","print",0xfa6750cd,"lime.utils.Log.print","lime/utils/Log.hx",54,0x300eb2b2)
            	HX_STACK_ARG(message,"message")
HXLINE(  54)		::Sys_obj::print(message);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Log_obj,print,(void))

void Log_obj::println(::String message){
            	HX_STACK_FRAME("lime.utils.Log","println",0xdf773c8f,"lime.utils.Log.println","lime/utils/Log.hx",69,0x300eb2b2)
            	HX_STACK_ARG(message,"message")
HXLINE(  69)		::Sys_obj::println(message);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Log_obj,println,(void))

void Log_obj::verbose(::String message, ::Dynamic info){
            	HX_STACK_FRAME("lime.utils.Log","verbose",0xccfd3822,"lime.utils.Log.verbose","lime/utils/Log.hx",83,0x300eb2b2)
            	HX_STACK_ARG(message,"message")
            	HX_STACK_ARG(info,"info")
HXLINE(  83)		Bool _hx_tmp = (::lime::utils::Log_obj::level >= (int)5);
HXDLIN(  83)		if (_hx_tmp) {
HXLINE(  85)			::Sys_obj::println((((HX_("[",5b,00,00,00) + ( (::String)(info->__Field(HX_("className",a3,92,3d,dc),hx::paccDynamic)) )) + HX_("] ",23,51,00,00)) + message));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,verbose,(void))

void Log_obj::warn(::String message, ::Dynamic info){
            	HX_STACK_FRAME("lime.utils.Log","warn",0xf9125da6,"lime.utils.Log.warn","lime/utils/Log.hx",94,0x300eb2b2)
            	HX_STACK_ARG(message,"message")
            	HX_STACK_ARG(info,"info")
HXLINE(  94)		Bool _hx_tmp = (::lime::utils::Log_obj::level >= (int)2);
HXDLIN(  94)		if (_hx_tmp) {
HXLINE(  96)			::Sys_obj::println((((HX_("[",5b,00,00,00) + ( (::String)(info->__Field(HX_("className",a3,92,3d,dc),hx::paccDynamic)) )) + HX_("] WARNING: ",5f,da,b0,cd)) + message));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Log_obj,warn,(void))


Log_obj::Log_obj()
{
}

bool Log_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { outValue = info_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"warn") ) { outValue = warn_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { outValue = level; return true; }
		if (HX_FIELD_EQ(inName,"debug") ) { outValue = debug_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"error") ) { outValue = error_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"println") ) { outValue = println_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"verbose") ) { outValue = verbose_dyn(); return true; }
	}
	return false;
}

bool Log_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=ioValue.Cast< Int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Log_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Log_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Log_obj::level,HX_HCSTRING("level","\x84","\x15","\x63","\x72")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Log_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Log_obj::level,"level");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Log_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Log_obj::level,"level");
};

#endif

hx::Class Log_obj::__mClass;

static ::String Log_obj_sStaticFields[] = {
	HX_HCSTRING("level","\x84","\x15","\x63","\x72"),
	HX_HCSTRING("debug","\x53","\x52","\x1f","\xd7"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"),
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("println","\xef","\xdb","\x33","\x84"),
	HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71"),
	HX_HCSTRING("warn","\x46","\x62","\xf2","\x4e"),
	::String(null())
};

void Log_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.Log","\x0e","\x21","\x76","\x06");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Log_obj::__GetStatic;
	__mClass->mSetStaticField = &Log_obj::__SetStatic;
	__mClass->mMarkFunc = Log_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Log_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Log_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Log_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Log_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Log_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Log_obj::__boot()
{
}

} // end namespace lime
} // end namespace utils
