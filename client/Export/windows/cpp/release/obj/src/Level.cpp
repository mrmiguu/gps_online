// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Animatible
#include <Animatible.h>
#endif
#ifndef INCLUDED_Level
#include <Level.h>
#endif
#ifndef INCLUDED_SpriteSheet
#include <SpriteSheet.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ac17baf8e1623e9e_10_new,"Level","new",0x0b84a856,"Level.new","Level.hx",10,0x000d33da)
HX_LOCAL_STACK_FRAME(_hx_pos_ac17baf8e1623e9e_38_begin,"Level","begin",0x8b652b9f,"Level.begin","Level.hx",38,0x000d33da)
HX_LOCAL_STACK_FRAME(_hx_pos_ac17baf8e1623e9e_43_end,"Level","end",0x0b7ddbd1,"Level.end","Level.hx",43,0x000d33da)
HX_LOCAL_STACK_FRAME(_hx_pos_ac17baf8e1623e9e_52_updateBar,"Level","updateBar",0x8e63c3c0,"Level.updateBar","Level.hx",52,0x000d33da)
HX_LOCAL_STACK_FRAME(_hx_pos_ac17baf8e1623e9e_55_set,"Level","set",0x0b887398,"Level.set","Level.hx",55,0x000d33da)
HX_LOCAL_STACK_FRAME(_hx_pos_ac17baf8e1623e9e_67_increaseLevel,"Level","increaseLevel",0xd77c11d8,"Level.increaseLevel","Level.hx",67,0x000d33da)
HX_LOCAL_STACK_FRAME(_hx_pos_ac17baf8e1623e9e_75_updateText,"Level","updateText",0x14d06a20,"Level.updateText","Level.hx",75,0x000d33da)

void Level_obj::__construct( ::openfl::display::Sprite gps, ::openfl::display::Sprite bar){
            	HX_GC_STACKFRAME(&_hx_pos_ac17baf8e1623e9e_10_new)
HXLINE(  17)		this->sound = ::openfl::media::Sound_obj::fromFile((HX_("assets/",4c,2a,dc,36) + HX_("lvl/up.ogg",c9,7f,c8,81)));
HXLINE(  14)		this->lv = (int)1;
HXLINE(  22)		super::__construct(HX_("lvl/fireworks.png",da,f1,53,27),(int)5,(int)8,((Float)0.025));
HXLINE(  24)		this->bar = bar;
HXLINE(  26)		Float _hx_tmp = gps->get_x();
HXDLIN(  26)		this->set_x((_hx_tmp + ((int)220 - ((Float)this->get_width() / (Float)(int)2))));
HXLINE(  27)		Float _hx_tmp1 = gps->get_y();
HXDLIN(  27)		this->set_y((_hx_tmp1 + ((int)228 - ((Float)this->get_height() / (Float)(int)2))));
HXLINE(  28)		this->mouseEnabled = false;
HXLINE(  30)		Float x = (gps->get_x() + (int)220);
HXDLIN(  30)		Float y = (gps->get_y() + (int)217);
HXDLIN(  30)		 ::openfl::text::TextField t =  ::openfl::text::TextField_obj::__alloc( HX_CTX );
HXDLIN(  30)		t->set_embedFonts(true);
HXDLIN(  30)		t->set_x((x - ((Float)t->get_width() / (Float)(int)2)));
HXDLIN(  30)		t->set_y(y);
HXDLIN(  30)		t->set_autoSize((int)0);
HXDLIN(  30)		t->set_selectable(false);
HXDLIN(  30)		t->setTextFormat( ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,::openfl::Assets_obj::getFont(HX_("assets/etc/lucon.ttf",8a,7b,49,6b),null())->name,(int)22,(int)8323072,true,null(),null(),null(),null(),null(),null(),null(),null(),null()),null(),null());
HXDLIN(  30)		t->set_text(HX_("",00,00,00,00));
HXDLIN(  30)		this->text = t;
HXLINE(  32)		this->updateText();
HXLINE(  33)		this->updateBar();
            	}

Dynamic Level_obj::__CreateEmpty() { return new Level_obj; }

void *Level_obj::_hx_vtable = 0;

Dynamic Level_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Level_obj > _hx_result = new Level_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Level_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19c29573) {
		if (inClassId<=(int)0x0ddfced7) {
			if (inClassId<=(int)0x05908564) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x05908564;
			} else {
				return inClassId==(int)0x0ddfced7;
			}
		} else {
			return inClassId==(int)0x17120186 || inClassId==(int)0x19c29573;
		}
	} else {
		if (inClassId<=(int)0x3f2b00af) {
			return inClassId==(int)0x1b123bf8 || inClassId==(int)0x3f2b00af;
		} else {
			return inClassId==(int)0x45bc2e56;
		}
	}
}

void Level_obj::begin(){
            	HX_STACKFRAME(&_hx_pos_ac17baf8e1623e9e_38_begin)
HXLINE(  38)		this->state = hx::Mod((this->state + (int)1),this->states);
            	}


void Level_obj::end(){
            	HX_STACKFRAME(&_hx_pos_ac17baf8e1623e9e_43_end)
HXLINE(  43)		int _hx_tmp = this->state;
HXDLIN(  43)		if ((_hx_tmp == (this->states - (int)1))) {
HXLINE(  45)			this->animating = false;
HXLINE(  46)			this->updateText();
            		}
            	}


void Level_obj::updateBar(){
            	HX_STACKFRAME(&_hx_pos_ac17baf8e1623e9e_52_updateBar)
HXLINE(  52)		 ::openfl::display::Sprite _hx_tmp = this->bar;
HXDLIN(  52)		int _hx_tmp1 = ((int)480 * this->exp);
HXDLIN(  52)		_hx_tmp->set_width(((Float)_hx_tmp1 / (Float)(this->req - (int)1)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,updateBar,(void))

void Level_obj::set(int req,int exp,int lv){
            	HX_STACKFRAME(&_hx_pos_ac17baf8e1623e9e_55_set)
HXLINE(  57)		this->req = req;
HXLINE(  58)		this->exp = exp;
HXLINE(  59)		this->updateBar();
HXLINE(  62)		if ((lv > this->lv)) {
HXLINE(  62)			this->increaseLevel();
            		}
HXLINE(  64)		this->lv = lv;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Level_obj,set,(void))

void Level_obj::increaseLevel(){
            	HX_STACKFRAME(&_hx_pos_ac17baf8e1623e9e_67_increaseLevel)
HXLINE(  69)		this->animating = true;
HXLINE(  70)		this->sound->play(null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,increaseLevel,(void))

void Level_obj::updateText(){
            	HX_STACKFRAME(&_hx_pos_ac17baf8e1623e9e_75_updateText)
HXLINE(  75)		 ::openfl::text::TextField _hx_tmp = this->text;
HXDLIN(  75)		_hx_tmp->set_text((HX_("",00,00,00,00) + this->lv));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Level_obj,updateText,(void))


hx::ObjectPtr< Level_obj > Level_obj::__new( ::openfl::display::Sprite gps, ::openfl::display::Sprite bar) {
	hx::ObjectPtr< Level_obj > __this = new Level_obj();
	__this->__construct(gps,bar);
	return __this;
}

hx::ObjectPtr< Level_obj > Level_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display::Sprite gps, ::openfl::display::Sprite bar) {
	Level_obj *__this = (Level_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Level_obj), true, "Level"));
	*(void **)__this = Level_obj::_hx_vtable;
	__this->__construct(gps,bar);
	return __this;
}

Level_obj::Level_obj()
{
}

void Level_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Level);
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(lv,"lv");
	HX_MARK_MEMBER_NAME(req,"req");
	HX_MARK_MEMBER_NAME(exp,"exp");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(bar,"bar");
	 ::SpriteSheet_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Level_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(lv,"lv");
	HX_VISIT_MEMBER_NAME(req,"req");
	HX_VISIT_MEMBER_NAME(exp,"exp");
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(bar,"bar");
	 ::SpriteSheet_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Level_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lv") ) { return hx::Val( lv); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"req") ) { return hx::Val( req); }
		if (HX_FIELD_EQ(inName,"exp") ) { return hx::Val( exp); }
		if (HX_FIELD_EQ(inName,"bar") ) { return hx::Val( bar); }
		if (HX_FIELD_EQ(inName,"end") ) { return hx::Val( end_dyn()); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn()); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return hx::Val( text); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return hx::Val( sound); }
		if (HX_FIELD_EQ(inName,"begin") ) { return hx::Val( begin_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateBar") ) { return hx::Val( updateBar_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateText") ) { return hx::Val( updateText_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"increaseLevel") ) { return hx::Val( increaseLevel_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Level_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"lv") ) { lv=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"req") ) { req=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exp") ) { exp=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bar") ) { bar=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast<  ::openfl::media::Sound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Level_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("lv","\x8a","\x5e","\x00","\x00"));
	outFields->push(HX_HCSTRING("req","\x5e","\xd9","\x56","\x00"));
	outFields->push(HX_HCSTRING("exp","\x9d","\x0c","\x4d","\x00"));
	outFields->push(HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"));
	outFields->push(HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Level_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Level_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsInt,(int)offsetof(Level_obj,lv),HX_HCSTRING("lv","\x8a","\x5e","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Level_obj,req),HX_HCSTRING("req","\x5e","\xd9","\x56","\x00")},
	{hx::fsInt,(int)offsetof(Level_obj,exp),HX_HCSTRING("exp","\x9d","\x0c","\x4d","\x00")},
	{hx::fsObject /*::openfl::media::Sound*/ ,(int)offsetof(Level_obj,sound),HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Level_obj,bar),HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Level_obj_sStaticStorageInfo = 0;
#endif

static ::String Level_obj_sMemberFields[] = {
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("lv","\x8a","\x5e","\x00","\x00"),
	HX_HCSTRING("req","\x5e","\xd9","\x56","\x00"),
	HX_HCSTRING("exp","\x9d","\x0c","\x4d","\x00"),
	HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"),
	HX_HCSTRING("bar","\xd3","\xb1","\x4a","\x00"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("updateBar","\x4a","\x8f","\xd7","\x82"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("increaseLevel","\x62","\x6a","\x7d","\x4e"),
	HX_HCSTRING("updateText","\x56","\xb7","\xae","\x05"),
	::String(null()) };

static void Level_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Level_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Level_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Level_obj::__mClass,"__mClass");
};

#endif

hx::Class Level_obj::__mClass;

void Level_obj::__register()
{
	hx::Object *dummy = new Level_obj;
	Level_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Level","\x64","\x85","\x90","\x05");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Level_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Level_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Level_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Level_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Level_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Level_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
