// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime__macros_AssetsMacro
#include <lime/_macros/AssetsMacro.h>
#endif

namespace lime{
namespace _macros{

void AssetsMacro_obj::__construct() { }

Dynamic AssetsMacro_obj::__CreateEmpty() { return new AssetsMacro_obj; }

hx::ObjectPtr< AssetsMacro_obj > AssetsMacro_obj::__new()
{
	hx::ObjectPtr< AssetsMacro_obj > _hx_result = new AssetsMacro_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic AssetsMacro_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AssetsMacro_obj > _hx_result = new AssetsMacro_obj();
	_hx_result->__construct();
	return _hx_result;
}


AssetsMacro_obj::AssetsMacro_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *AssetsMacro_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *AssetsMacro_obj_sStaticStorageInfo = 0;
#endif

static void AssetsMacro_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetsMacro_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssetsMacro_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetsMacro_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetsMacro_obj::__mClass;

void AssetsMacro_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._macros.AssetsMacro","\xa8","\x18","\x58","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AssetsMacro_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AssetsMacro_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssetsMacro_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetsMacro_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetsMacro_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _macros
