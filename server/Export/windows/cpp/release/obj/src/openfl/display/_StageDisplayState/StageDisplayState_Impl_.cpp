// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__StageDisplayState_StageDisplayState_Impl_
#include <openfl/display/_StageDisplayState/StageDisplayState_Impl_.h>
#endif

namespace openfl{
namespace display{
namespace _StageDisplayState{

void StageDisplayState_Impl__obj::__construct() { }

Dynamic StageDisplayState_Impl__obj::__CreateEmpty() { return new StageDisplayState_Impl__obj; }

hx::ObjectPtr< StageDisplayState_Impl__obj > StageDisplayState_Impl__obj::__new()
{
	hx::ObjectPtr< StageDisplayState_Impl__obj > _hx_result = new StageDisplayState_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic StageDisplayState_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StageDisplayState_Impl__obj > _hx_result = new StageDisplayState_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::Dynamic StageDisplayState_Impl__obj::FULL_SCREEN;

 ::Dynamic StageDisplayState_Impl__obj::FULL_SCREEN_INTERACTIVE;

 ::Dynamic StageDisplayState_Impl__obj::NORMAL;

 ::Dynamic StageDisplayState_Impl__obj::fromString(::String value){
            	HX_STACK_FRAME("openfl.display._StageDisplayState.StageDisplayState_Impl_","fromString",0xa44db312,"openfl.display._StageDisplayState.StageDisplayState_Impl_.fromString","openfl/display/StageDisplayState.hx",12,0x75a7a3fd)
            	HX_STACK_ARG(value,"value")
HXLINE(  12)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("fullScreen",5b,ae,48,2e)) ){
HXLINE(  12)			return (int)0;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("fullScreenInteractive",47,df,d1,02)) ){
HXLINE(  12)			return (int)1;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("normal",27,72,69,30)) ){
HXLINE(  12)			return (int)2;
HXDLIN(  12)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  12)			return null();
            		}
            		_hx_goto_0:;
HXDLIN(  12)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageDisplayState_Impl__obj,fromString,return )

::String StageDisplayState_Impl__obj::toString(Int value){
            	HX_STACK_FRAME("openfl.display._StageDisplayState.StageDisplayState_Impl_","toString",0x6b7dca23,"openfl.display._StageDisplayState.StageDisplayState_Impl_.toString","openfl/display/StageDisplayState.hx",25,0x75a7a3fd)
            	HX_STACK_ARG(value,"value")
HXLINE(  25)		switch((int)(value)){
            			case (int)0: {
HXLINE(  25)				return HX_("fullScreen",5b,ae,48,2e);
            			}
            			break;
            			case (int)1: {
HXLINE(  25)				return HX_("fullScreenInteractive",47,df,d1,02);
            			}
            			break;
            			case (int)2: {
HXLINE(  25)				return HX_("normal",27,72,69,30);
            			}
            			break;
            			default:{
HXLINE(  25)				return null();
            			}
            		}
HXDLIN(  25)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageDisplayState_Impl__obj,toString,return )


StageDisplayState_Impl__obj::StageDisplayState_Impl__obj()
{
}

bool StageDisplayState_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *StageDisplayState_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo StageDisplayState_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &StageDisplayState_Impl__obj::FULL_SCREEN,HX_HCSTRING("FULL_SCREEN","\x5c","\x27","\x87","\x18")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageDisplayState_Impl__obj::FULL_SCREEN_INTERACTIVE,HX_HCSTRING("FULL_SCREEN_INTERACTIVE","\x1f","\xb9","\xf1","\x23")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageDisplayState_Impl__obj::NORMAL,HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void StageDisplayState_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageDisplayState_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StageDisplayState_Impl__obj::FULL_SCREEN,"FULL_SCREEN");
	HX_MARK_MEMBER_NAME(StageDisplayState_Impl__obj::FULL_SCREEN_INTERACTIVE,"FULL_SCREEN_INTERACTIVE");
	HX_MARK_MEMBER_NAME(StageDisplayState_Impl__obj::NORMAL,"NORMAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StageDisplayState_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageDisplayState_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StageDisplayState_Impl__obj::FULL_SCREEN,"FULL_SCREEN");
	HX_VISIT_MEMBER_NAME(StageDisplayState_Impl__obj::FULL_SCREEN_INTERACTIVE,"FULL_SCREEN_INTERACTIVE");
	HX_VISIT_MEMBER_NAME(StageDisplayState_Impl__obj::NORMAL,"NORMAL");
};

#endif

hx::Class StageDisplayState_Impl__obj::__mClass;

static ::String StageDisplayState_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("FULL_SCREEN","\x5c","\x27","\x87","\x18"),
	HX_HCSTRING("FULL_SCREEN_INTERACTIVE","\x1f","\xb9","\xf1","\x23"),
	HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void StageDisplayState_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._StageDisplayState.StageDisplayState_Impl_","\xd7","\x71","\x06","\xc1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StageDisplayState_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StageDisplayState_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(StageDisplayState_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StageDisplayState_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StageDisplayState_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StageDisplayState_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StageDisplayState_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StageDisplayState_Impl__obj::__boot()
{
{
            	HX_STACK_FRAME("openfl.display._StageDisplayState.StageDisplayState_Impl_","boot",0xd144b629,"openfl.display._StageDisplayState.StageDisplayState_Impl_.boot","openfl/display/StageDisplayState.hx",6,0x75a7a3fd)
HXLINE(   6)		FULL_SCREEN = (int)0;
            	}
{
            	HX_STACK_FRAME("openfl.display._StageDisplayState.StageDisplayState_Impl_","boot",0xd144b629,"openfl.display._StageDisplayState.StageDisplayState_Impl_.boot","openfl/display/StageDisplayState.hx",7,0x75a7a3fd)
HXLINE(   7)		FULL_SCREEN_INTERACTIVE = (int)1;
            	}
{
            	HX_STACK_FRAME("openfl.display._StageDisplayState.StageDisplayState_Impl_","boot",0xd144b629,"openfl.display._StageDisplayState.StageDisplayState_Impl_.boot","openfl/display/StageDisplayState.hx",8,0x75a7a3fd)
HXLINE(   8)		NORMAL = (int)2;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _StageDisplayState
