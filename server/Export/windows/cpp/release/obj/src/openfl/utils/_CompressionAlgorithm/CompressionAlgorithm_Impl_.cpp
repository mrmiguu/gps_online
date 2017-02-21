// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_utils__CompressionAlgorithm_CompressionAlgorithm_Impl_
#include <openfl/utils/_CompressionAlgorithm/CompressionAlgorithm_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3ba8846bc8ed3135_13_fromString,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_","fromString",0x5224159f,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_.fromString","openfl/utils/CompressionAlgorithm.hx",13,0x4617ecf8)
HX_LOCAL_STACK_FRAME(_hx_pos_3ba8846bc8ed3135_26_toString,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_","toString",0x36c27f70,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_.toString","openfl/utils/CompressionAlgorithm.hx",26,0x4617ecf8)
HX_LOCAL_STACK_FRAME(_hx_pos_3ba8846bc8ed3135_6_boot,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_","boot",0xc13780f6,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_.boot","openfl/utils/CompressionAlgorithm.hx",6,0x4617ecf8)
HX_LOCAL_STACK_FRAME(_hx_pos_3ba8846bc8ed3135_8_boot,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_","boot",0xc13780f6,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_.boot","openfl/utils/CompressionAlgorithm.hx",8,0x4617ecf8)
HX_LOCAL_STACK_FRAME(_hx_pos_3ba8846bc8ed3135_9_boot,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_","boot",0xc13780f6,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_.boot","openfl/utils/CompressionAlgorithm.hx",9,0x4617ecf8)
namespace openfl{
namespace utils{
namespace _CompressionAlgorithm{

void CompressionAlgorithm_Impl__obj::__construct() { }

Dynamic CompressionAlgorithm_Impl__obj::__CreateEmpty() { return new CompressionAlgorithm_Impl__obj; }

void *CompressionAlgorithm_Impl__obj::_hx_vtable = 0;

Dynamic CompressionAlgorithm_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CompressionAlgorithm_Impl__obj > _hx_result = new CompressionAlgorithm_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CompressionAlgorithm_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x648bae90;
}

 ::Dynamic CompressionAlgorithm_Impl__obj::DEFLATE;

 ::Dynamic CompressionAlgorithm_Impl__obj::LZMA;

 ::Dynamic CompressionAlgorithm_Impl__obj::ZLIB;

 ::Dynamic CompressionAlgorithm_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_3ba8846bc8ed3135_13_fromString)
HXLINE(  13)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("deflate",6b,0b,fa,a2)) ){
HXLINE(  13)			return (int)0;
HXDLIN(  13)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("lzma",62,fd,bf,47)) ){
HXLINE(  13)			return (int)1;
HXDLIN(  13)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("zlib",0b,57,f6,50)) ){
HXLINE(  13)			return (int)2;
HXDLIN(  13)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  13)			return null();
            		}
            		_hx_goto_0:;
HXDLIN(  13)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CompressionAlgorithm_Impl__obj,fromString,return )

::String CompressionAlgorithm_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_3ba8846bc8ed3135_26_toString)
HXLINE(  26)		switch((int)(value)){
            			case (int)0: {
HXLINE(  26)				return HX_("deflate",6b,0b,fa,a2);
            			}
            			break;
            			case (int)1: {
HXLINE(  26)				return HX_("lzma",62,fd,bf,47);
            			}
            			break;
            			case (int)2: {
HXLINE(  26)				return HX_("zlib",0b,57,f6,50);
            			}
            			break;
            			default:{
HXLINE(  26)				return null();
            			}
            		}
HXDLIN(  26)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CompressionAlgorithm_Impl__obj,toString,return )


CompressionAlgorithm_Impl__obj::CompressionAlgorithm_Impl__obj()
{
}

bool CompressionAlgorithm_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *CompressionAlgorithm_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo CompressionAlgorithm_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &CompressionAlgorithm_Impl__obj::DEFLATE,HX_HCSTRING("DEFLATE","\x4b","\xdf","\xcd","\x22")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CompressionAlgorithm_Impl__obj::LZMA,HX_HCSTRING("LZMA","\x62","\xc5","\x80","\x32")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CompressionAlgorithm_Impl__obj::ZLIB,HX_HCSTRING("ZLIB","\x0b","\x1f","\xb7","\x3b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void CompressionAlgorithm_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_Impl__obj::DEFLATE,"DEFLATE");
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_Impl__obj::LZMA,"LZMA");
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_Impl__obj::ZLIB,"ZLIB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CompressionAlgorithm_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_Impl__obj::DEFLATE,"DEFLATE");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_Impl__obj::LZMA,"LZMA");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_Impl__obj::ZLIB,"ZLIB");
};

#endif

hx::Class CompressionAlgorithm_Impl__obj::__mClass;

static ::String CompressionAlgorithm_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("DEFLATE","\x4b","\xdf","\xcd","\x22"),
	HX_HCSTRING("LZMA","\x62","\xc5","\x80","\x32"),
	HX_HCSTRING("ZLIB","\x0b","\x1f","\xb7","\x3b"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void CompressionAlgorithm_Impl__obj::__register()
{
	hx::Object *dummy = new CompressionAlgorithm_Impl__obj;
	CompressionAlgorithm_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_","\x2a","\x9a","\x41","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CompressionAlgorithm_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CompressionAlgorithm_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CompressionAlgorithm_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CompressionAlgorithm_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CompressionAlgorithm_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CompressionAlgorithm_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CompressionAlgorithm_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CompressionAlgorithm_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3ba8846bc8ed3135_6_boot)
HXLINE(   6)		DEFLATE = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3ba8846bc8ed3135_8_boot)
HXLINE(   8)		LZMA = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3ba8846bc8ed3135_9_boot)
HXLINE(   9)		ZLIB = (int)2;
            	}
}

} // end namespace openfl
} // end namespace utils
} // end namespace _CompressionAlgorithm