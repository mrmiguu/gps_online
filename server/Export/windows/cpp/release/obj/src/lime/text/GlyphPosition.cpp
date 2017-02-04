// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_text_GlyphPosition
#include <lime/text/GlyphPosition.h>
#endif

namespace lime{
namespace text{

void GlyphPosition_obj::__construct(Int glyph, ::lime::math::Vector2 advance, ::lime::math::Vector2 offset){
            	HX_STACK_FRAME("lime.text.GlyphPosition","new",0x7d4dcbff,"lime.text.GlyphPosition.new","lime/text/GlyphPosition.hx",20,0x63f214b1)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(glyph,"glyph")
            	HX_STACK_ARG(advance,"advance")
            	HX_STACK_ARG(offset,"offset")
HXLINE(  22)		this->glyph = glyph;
HXLINE(  23)		this->advance = advance;
HXLINE(  25)		Bool _hx_tmp = hx::IsNotNull( offset );
HXDLIN(  25)		if (_hx_tmp) {
HXLINE(  27)			this->offset = offset;
            		}
            		else {
HXLINE(  31)			this->offset =  ::lime::math::Vector2_obj::__new(null(),null());
            		}
            	}

Dynamic GlyphPosition_obj::__CreateEmpty() { return new GlyphPosition_obj; }

hx::ObjectPtr< GlyphPosition_obj > GlyphPosition_obj::__new(Int glyph, ::lime::math::Vector2 advance, ::lime::math::Vector2 offset)
{
	hx::ObjectPtr< GlyphPosition_obj > _hx_result = new GlyphPosition_obj();
	_hx_result->__construct(glyph,advance,offset);
	return _hx_result;
}

Dynamic GlyphPosition_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GlyphPosition_obj > _hx_result = new GlyphPosition_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}


GlyphPosition_obj::GlyphPosition_obj()
{
}

void GlyphPosition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GlyphPosition);
	HX_MARK_MEMBER_NAME(advance,"advance");
	HX_MARK_MEMBER_NAME(glyph,"glyph");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_END_CLASS();
}

void GlyphPosition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(advance,"advance");
	HX_VISIT_MEMBER_NAME(glyph,"glyph");
	HX_VISIT_MEMBER_NAME(offset,"offset");
}

hx::Val GlyphPosition_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"glyph") ) { return hx::Val( glyph); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { return hx::Val( offset); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"advance") ) { return hx::Val( advance); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GlyphPosition_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"glyph") ) { glyph=inValue.Cast< Int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::lime::math::Vector2 >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"advance") ) { advance=inValue.Cast<  ::lime::math::Vector2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GlyphPosition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("advance","\x82","\x08","\x0c","\xef"));
	outFields->push(HX_HCSTRING("glyph","\xac","\xfd","\x04","\x96"));
	outFields->push(HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GlyphPosition_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::math::Vector2*/ ,(int)offsetof(GlyphPosition_obj,advance),HX_HCSTRING("advance","\x82","\x08","\x0c","\xef")},
	{hx::fsInt,(int)offsetof(GlyphPosition_obj,glyph),HX_HCSTRING("glyph","\xac","\xfd","\x04","\x96")},
	{hx::fsObject /*::lime::math::Vector2*/ ,(int)offsetof(GlyphPosition_obj,offset),HX_HCSTRING("offset","\x93","\x97","\x3f","\x60")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GlyphPosition_obj_sStaticStorageInfo = 0;
#endif

static ::String GlyphPosition_obj_sMemberFields[] = {
	HX_HCSTRING("advance","\x82","\x08","\x0c","\xef"),
	HX_HCSTRING("glyph","\xac","\xfd","\x04","\x96"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	::String(null()) };

static void GlyphPosition_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlyphPosition_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GlyphPosition_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlyphPosition_obj::__mClass,"__mClass");
};

#endif

hx::Class GlyphPosition_obj::__mClass;

void GlyphPosition_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text.GlyphPosition","\x8d","\x60","\x62","\xde");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GlyphPosition_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GlyphPosition_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GlyphPosition_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GlyphPosition_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlyphPosition_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlyphPosition_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
