// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_GraphicsFillType
#include <openfl/display/GraphicsFillType.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsFill
#include <openfl/display/IGraphicsFill.h>
#endif

namespace openfl{
namespace display{


static ::String IGraphicsFill_obj_sMemberFields[] = {
	HX_HCSTRING("__graphicsFillType","\xe8","\x75","\xeb","\x27"),
	::String(null()) };

static void IGraphicsFill_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IGraphicsFill_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IGraphicsFill_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IGraphicsFill_obj::__mClass,"__mClass");
};

#endif

hx::Class IGraphicsFill_obj::__mClass;

void IGraphicsFill_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.IGraphicsFill","\x4d","\x8c","\x83","\xba");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IGraphicsFill_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IGraphicsFill_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0xc2d06665 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IGraphicsFill_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
