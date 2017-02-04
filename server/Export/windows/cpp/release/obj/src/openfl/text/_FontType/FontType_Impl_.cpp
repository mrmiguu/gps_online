// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_text__FontType_FontType_Impl_
#include <openfl/text/_FontType/FontType_Impl_.h>
#endif

namespace openfl{
namespace text{
namespace _FontType{

void FontType_Impl__obj::__construct() { }

Dynamic FontType_Impl__obj::__CreateEmpty() { return new FontType_Impl__obj; }

hx::ObjectPtr< FontType_Impl__obj > FontType_Impl__obj::__new()
{
	hx::ObjectPtr< FontType_Impl__obj > _hx_result = new FontType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic FontType_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FontType_Impl__obj > _hx_result = new FontType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::Dynamic FontType_Impl__obj::DEVICE;

 ::Dynamic FontType_Impl__obj::EMBEDDED;

 ::Dynamic FontType_Impl__obj::EMBEDDED_CFF;

 ::Dynamic FontType_Impl__obj::fromString(::String value){
            	HX_STACK_FRAME("openfl.text._FontType.FontType_Impl_","fromString",0x1af62497,"openfl.text._FontType.FontType_Impl_.fromString","openfl/text/FontType.hx",12,0xc9ae6f12)
            	HX_STACK_ARG(value,"value")
HXLINE(  12)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("device",96,dc,77,71)) ){
HXLINE(  12)			return (int)0;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("embedded",8a,19,62,de)) ){
HXLINE(  12)			return (int)1;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("embeddedCFF",f9,0c,9e,ac)) ){
HXLINE(  12)			return (int)2;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  12)			return null();
            		}
            		_hx_goto_0:;
HXDLIN(  12)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontType_Impl__obj,fromString,return )

::String FontType_Impl__obj::toString(Int value){
            	HX_STACK_FRAME("openfl.text._FontType.FontType_Impl_","toString",0xa3a06068,"openfl.text._FontType.FontType_Impl_.toString","openfl/text/FontType.hx",25,0xc9ae6f12)
            	HX_STACK_ARG(value,"value")
HXLINE(  25)		switch((int)(value)){
            			case (int)0: {
HXLINE(  25)				return HX_("device",96,dc,77,71);
            			}
            			break;
            			case (int)1: {
HXLINE(  25)				return HX_("embedded",8a,19,62,de);
            			}
            			break;
            			case (int)2: {
HXLINE(  25)				return HX_("embeddedCFF",f9,0c,9e,ac);
            			}
            			break;
            			default:{
HXLINE(  25)				return null();
            			}
            		}
HXDLIN(  25)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontType_Impl__obj,toString,return )


FontType_Impl__obj::FontType_Impl__obj()
{
}

bool FontType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FontType_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo FontType_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &FontType_Impl__obj::DEVICE,HX_HCSTRING("DEVICE","\x96","\x88","\xfa","\x23")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FontType_Impl__obj::EMBEDDED,HX_HCSTRING("EMBEDDED","\x8a","\xa9","\xe7","\x37")},
	{hx::fsObject /*Dynamic*/ ,(void *) &FontType_Impl__obj::EMBEDDED_CFF,HX_HCSTRING("EMBEDDED_CFF","\xce","\x8f","\xba","\x23")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void FontType_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FontType_Impl__obj::DEVICE,"DEVICE");
	HX_MARK_MEMBER_NAME(FontType_Impl__obj::EMBEDDED,"EMBEDDED");
	HX_MARK_MEMBER_NAME(FontType_Impl__obj::EMBEDDED_CFF,"EMBEDDED_CFF");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FontType_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FontType_Impl__obj::DEVICE,"DEVICE");
	HX_VISIT_MEMBER_NAME(FontType_Impl__obj::EMBEDDED,"EMBEDDED");
	HX_VISIT_MEMBER_NAME(FontType_Impl__obj::EMBEDDED_CFF,"EMBEDDED_CFF");
};

#endif

hx::Class FontType_Impl__obj::__mClass;

static ::String FontType_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("DEVICE","\x96","\x88","\xfa","\x23"),
	HX_HCSTRING("EMBEDDED","\x8a","\xa9","\xe7","\x37"),
	HX_HCSTRING("EMBEDDED_CFF","\xce","\x8f","\xba","\x23"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void FontType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.text._FontType.FontType_Impl_","\x32","\xb8","\x83","\xe8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FontType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FontType_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FontType_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FontType_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FontType_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FontType_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FontType_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FontType_Impl__obj::__boot()
{
{
            	HX_STACK_FRAME("openfl.text._FontType.FontType_Impl_","boot",0xc26385ee,"openfl.text._FontType.FontType_Impl_.boot","openfl/text/FontType.hx",6,0xc9ae6f12)
HXLINE(   6)		DEVICE = (int)0;
            	}
{
            	HX_STACK_FRAME("openfl.text._FontType.FontType_Impl_","boot",0xc26385ee,"openfl.text._FontType.FontType_Impl_.boot","openfl/text/FontType.hx",7,0xc9ae6f12)
HXLINE(   7)		EMBEDDED = (int)1;
            	}
{
            	HX_STACK_FRAME("openfl.text._FontType.FontType_Impl_","boot",0xc26385ee,"openfl.text._FontType.FontType_Impl_.boot","openfl/text/FontType.hx",8,0xc9ae6f12)
HXLINE(   8)		EMBEDDED_CFF = (int)2;
            	}
}

} // end namespace openfl
} // end namespace text
} // end namespace _FontType
