// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Animatible
#include <Animatible.h>
#endif
#ifndef INCLUDED_Animation
#include <Animation.h>
#endif
#ifndef INCLUDED_Card
#include <Card.h>
#endif
#ifndef INCLUDED_Die
#include <Die.h>
#endif
#ifndef INCLUDED_Globals
#include <Globals.h>
#endif
#ifndef INCLUDED_Paperdoll
#include <Paperdoll.h>
#endif
#ifndef INCLUDED_SpriteSheet
#include <SpriteSheet.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3372c1ddc4e7feae_30_new,"Die","new",0x4d60a612,"Die.new","Die.hx",30,0xe83d419e)
HX_DEFINE_STACK_FRAME(_hx_pos_3372c1ddc4e7feae_14_new,"Die","new",0x4d60a612,"Die.new","Die.hx",14,0xe83d419e)
HX_LOCAL_STACK_FRAME(_hx_pos_3372c1ddc4e7feae_37_roll,"Die","roll",0x69dd118b,"Die.roll","Die.hx",37,0xe83d419e)
HX_LOCAL_STACK_FRAME(_hx_pos_3372c1ddc4e7feae_44_begin,"Die","begin",0xfa89105b,"Die.begin","Die.hx",44,0xe83d419e)
HX_LOCAL_STACK_FRAME(_hx_pos_3372c1ddc4e7feae_52_end,"Die","end",0x4d59d98d,"Die.end","Die.hx",52,0xe83d419e)

void Die_obj::__construct( ::Globals g, ::Card card){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::Die,_gthis, ::Globals,g) HXARGC(1)
            		void _hx_run( ::Dynamic e){
            			HX_GC_STACKFRAME(&_hx_pos_3372c1ddc4e7feae_30_new)
HXLINE(  30)			if (!(_gthis->rollSent)) {
HXLINE(  31)				{
HXLINE(  31)					::Array< ::String > m = g->outbox;
HXDLIN(  31)					::cpp::VirtualArray t = ::cpp::VirtualArray_obj::__new(1)->init(0,HX_("roll",7d,eb,ae,4b));
HXDLIN(  31)					 ::haxe::Serializer serial =  ::haxe::Serializer_obj::__alloc( HX_CTX );
HXDLIN(  31)					{
HXLINE(  31)						int _g3 = (int)0;
HXDLIN(  31)						while((_g3 < t->get_length())){
HXLINE(  31)							 ::Dynamic token = t->__get(_g3);
HXDLIN(  31)							_g3 = (_g3 + (int)1);
HXDLIN(  31)							serial->serialize(token);
            						}
            					}
HXDLIN(  31)					m->push(serial->toString());
            				}
HXLINE(  32)				_gthis->rollSent = true;
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_3372c1ddc4e7feae_14_new)
HXLINE(  18)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  18)		{
HXLINE(  18)			int _g1 = (int)0;
HXDLIN(  18)			while((_g1 < (int)3)){
HXLINE(  18)				_g1 = (_g1 + (int)1);
HXDLIN(  18)				int n = (_g1 - (int)1);
HXDLIN(  18)				_g->push(::openfl::media::Sound_obj::fromFile((HX_("assets/",4c,2a,dc,36) + ((HX_("die/land",5a,04,90,1f) + n) + HX_(".ogg",e1,64,bc,1e)))));
            			}
            		}
HXDLIN(  18)		this->lands = _g;
HXLINE(  17)		::Array< ::Dynamic> _g2 = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  17)		{
HXLINE(  17)			int _g11 = (int)0;
HXDLIN(  17)			while((_g11 < (int)3)){
HXLINE(  17)				_g11 = (_g11 + (int)1);
HXDLIN(  17)				int n1 = (_g11 - (int)1);
HXDLIN(  17)				_g2->push(::openfl::media::Sound_obj::fromFile((HX_("assets/",4c,2a,dc,36) + ((HX_("die/lift",7a,0f,96,1f) + n1) + HX_(".ogg",e1,64,bc,1e)))));
            			}
            		}
HXDLIN(  17)		this->lifts = _g2;
HXLINE(  23)		 ::Die _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  24)		super::__construct(HX_("die/dice.png",11,28,41,63),(int)6,(int)6,((Float)0.025));
HXLINE(  26)		g->roll = this->roll_dyn();
HXLINE(  27)		this->card = card;
HXLINE(  29)		this->addEventListener(HX_("click",48,7c,5e,48), ::Dynamic(new _hx_Closure_0(_gthis,g)),null(),null(),null());
            	}

Dynamic Die_obj::__CreateEmpty() { return new Die_obj; }

void *Die_obj::_hx_vtable = 0;

Dynamic Die_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Die_obj > _hx_result = new Die_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Die_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19c29573) {
		if (inClassId<=(int)0x0ddfced7) {
			if (inClassId<=(int)0x0033f520) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0033f520;
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

void Die_obj::roll(int side){
            	HX_STACKFRAME(&_hx_pos_3372c1ddc4e7feae_37_roll)
HXLINE(  38)		this->state = side;
HXLINE(  39)		this->animating = true;
HXLINE(  40)		if (hx::IsNotNull( this->paperdoll )) {
HXLINE(  40)			this->paperdoll->animating = true;
            		}
HXLINE(  41)		this->rollSent = false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Die_obj,roll,(void))

void Die_obj::begin(){
            	HX_STACKFRAME(&_hx_pos_3372c1ddc4e7feae_44_begin)
HXLINE(  45)		if (!(this->card->animating)) {
HXLINE(  45)			this->card->target = this->state;
            		}
HXLINE(  46)		if (hx::IsNotNull( this->paperdoll )) {
HXLINE(  46)			this->paperdoll->state = this->state;
            		}
HXLINE(  48)		this->card->animating = true;
HXLINE(  49)		::Array< ::Dynamic> _hx_tmp = this->lifts;
HXDLIN(  49)		_hx_tmp->__get(::Std_obj::random(this->lifts->length)).StaticCast<  ::openfl::media::Sound >()->play(null(),null(),null());
            	}


void Die_obj::end(){
            	HX_STACKFRAME(&_hx_pos_3372c1ddc4e7feae_52_end)
HXLINE(  54)		this->animating = false;
HXLINE(  55)		::Array< ::Dynamic> _hx_tmp = this->lands;
HXDLIN(  55)		_hx_tmp->__get(::Std_obj::random(this->lands->length)).StaticCast<  ::openfl::media::Sound >()->play(null(),null(),null());
            	}



hx::ObjectPtr< Die_obj > Die_obj::__new( ::Globals g, ::Card card) {
	hx::ObjectPtr< Die_obj > __this = new Die_obj();
	__this->__construct(g,card);
	return __this;
}

hx::ObjectPtr< Die_obj > Die_obj::__alloc(hx::Ctx *_hx_ctx, ::Globals g, ::Card card) {
	Die_obj *__this = (Die_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Die_obj), true, "Die"));
	*(void **)__this = Die_obj::_hx_vtable;
	__this->__construct(g,card);
	return __this;
}

Die_obj::Die_obj()
{
}

void Die_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Die);
	HX_MARK_MEMBER_NAME(paperdoll,"paperdoll");
	HX_MARK_MEMBER_NAME(lifts,"lifts");
	HX_MARK_MEMBER_NAME(lands,"lands");
	HX_MARK_MEMBER_NAME(card,"card");
	HX_MARK_MEMBER_NAME(rollSent,"rollSent");
	 ::SpriteSheet_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Die_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(paperdoll,"paperdoll");
	HX_VISIT_MEMBER_NAME(lifts,"lifts");
	HX_VISIT_MEMBER_NAME(lands,"lands");
	HX_VISIT_MEMBER_NAME(card,"card");
	HX_VISIT_MEMBER_NAME(rollSent,"rollSent");
	 ::SpriteSheet_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Die_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return hx::Val( end_dyn()); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"card") ) { return hx::Val( card); }
		if (HX_FIELD_EQ(inName,"roll") ) { return hx::Val( roll_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lifts") ) { return hx::Val( lifts); }
		if (HX_FIELD_EQ(inName,"lands") ) { return hx::Val( lands); }
		if (HX_FIELD_EQ(inName,"begin") ) { return hx::Val( begin_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rollSent") ) { return hx::Val( rollSent); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"paperdoll") ) { return hx::Val( paperdoll); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Die_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"card") ) { card=inValue.Cast<  ::Card >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lifts") ) { lifts=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lands") ) { lands=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rollSent") ) { rollSent=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"paperdoll") ) { paperdoll=inValue.Cast<  ::Paperdoll >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Die_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("paperdoll","\x57","\xa4","\x46","\x6f"));
	outFields->push(HX_HCSTRING("lifts","\x08","\xd9","\xfb","\x74"));
	outFields->push(HX_HCSTRING("lands","\x28","\x28","\xb8","\x6f"));
	outFields->push(HX_HCSTRING("card","\xd0","\x1d","\xba","\x41"));
	outFields->push(HX_HCSTRING("rollSent","\x75","\xa7","\x40","\x15"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Die_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::Paperdoll*/ ,(int)offsetof(Die_obj,paperdoll),HX_HCSTRING("paperdoll","\x57","\xa4","\x46","\x6f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Die_obj,lifts),HX_HCSTRING("lifts","\x08","\xd9","\xfb","\x74")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Die_obj,lands),HX_HCSTRING("lands","\x28","\x28","\xb8","\x6f")},
	{hx::fsObject /*::Card*/ ,(int)offsetof(Die_obj,card),HX_HCSTRING("card","\xd0","\x1d","\xba","\x41")},
	{hx::fsBool,(int)offsetof(Die_obj,rollSent),HX_HCSTRING("rollSent","\x75","\xa7","\x40","\x15")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Die_obj_sStaticStorageInfo = 0;
#endif

static ::String Die_obj_sMemberFields[] = {
	HX_HCSTRING("paperdoll","\x57","\xa4","\x46","\x6f"),
	HX_HCSTRING("lifts","\x08","\xd9","\xfb","\x74"),
	HX_HCSTRING("lands","\x28","\x28","\xb8","\x6f"),
	HX_HCSTRING("card","\xd0","\x1d","\xba","\x41"),
	HX_HCSTRING("rollSent","\x75","\xa7","\x40","\x15"),
	HX_HCSTRING("roll","\x7d","\xeb","\xae","\x4b"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	::String(null()) };

static void Die_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Die_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Die_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Die_obj::__mClass,"__mClass");
};

#endif

hx::Class Die_obj::__mClass;

void Die_obj::__register()
{
	hx::Object *dummy = new Die_obj;
	Die_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Die","\x20","\xf5","\x33","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Die_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Die_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Die_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Die_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Die_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Die_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
