// Generated by Haxe 3.3.0
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
#ifndef INCLUDED_Globals
#include <Globals.h>
#endif
#ifndef INCLUDED_Node
#include <Node.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Terrain
#include <Terrain.h>
#endif
#ifndef INCLUDED_Viewport
#include <Viewport.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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


void Player_obj::__construct( ::Globals g,::String user){
            	HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",10,0xa27fc9dd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(g,"g")
            	HX_STACK_ARG(user,"user")
HXLINE(  18)		this->cards = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  14)		this->color = HX_("r",72,00,00,00);
HXLINE(  12)		this->arrival = ::openfl::media::Sound_obj::fromFile((HX_("assets/",4c,2a,dc,36) + HX_("dests/arrival.ogg",dc,ab,95,64)));
HXLINE(  21)		::haxe::Log_obj::trace(HX_("new Player",41,33,ad,0e),hx::SourceInfo(HX_("Player.hx",dd,c9,7f,a2),21,HX_("Player",81,5f,4d,6c),HX_("new",60,d0,53,00)));
HXLINE(  22)		this->g = g;
HXLINE(  23)		this->user = user;
            	}

Dynamic Player_obj::__CreateEmpty() { return new Player_obj; }

hx::ObjectPtr< Player_obj > Player_obj::__new( ::Globals g,::String user)
{
	hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct(g,user);
	return _hx_result;
}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

::String Player_obj::getColor(){
            	HX_STACK_FRAME("Player","getColor",0x3ba9877a,"Player.getColor","Player.hx",29,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE(  29)		return this->color;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getColor,return )

void Player_obj::setColor(::String c){
            	HX_STACK_FRAME("Player","setColor",0xea06e0ee,"Player.setColor","Player.hx",32,0xa27fc9dd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(c,"c")
HXLINE(  33)		::haxe::Log_obj::trace((((HX_("",00,00,00,00) + this->user) + HX_(".color <- ",64,6b,4a,93)) + c),hx::SourceInfo(HX_("Player.hx",dd,c9,7f,a2),33,HX_("Player",81,5f,4d,6c),HX_("setColor",61,da,90,58)));
HXLINE(  34)		this->color = c;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,setColor,(void))

void Player_obj::setLoc(::String l){
            	HX_STACK_FRAME("Player","setLoc",0xda5d3b4b,"Player.setLoc","Player.hx",37,0xa27fc9dd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(l,"l")
HXLINE(  39)		Bool _hx_tmp;
HXDLIN(  39)		Bool _hx_tmp1 = this->isMe();
HXDLIN(  39)		if (_hx_tmp1) {
HXLINE(  39)			_hx_tmp = hx::IsNotNull( this->loc );
            		}
            		else {
HXLINE(  39)			_hx_tmp = false;
            		}
HXDLIN(  39)		if (_hx_tmp) {
HXLINE(  39)			this->g->t->map->get(this->loc).StaticCast<  ::Node >()->set_visible(false);
            		}
HXLINE(  40)		this->loc = l;
HXLINE(  41)		Bool _hx_tmp2 = this->isMe();
HXDLIN(  41)		if (_hx_tmp2) {
HXLINE(  41)			this->g->t->map->get(l).StaticCast<  ::Node >()->set_visible(true);
            		}
HXLINE(  43)		::haxe::Log_obj::trace((((HX_("",00,00,00,00) + this->user) + HX_(".loc <- ",81,98,bb,49)) + this->loc),hx::SourceInfo(HX_("Player.hx",dd,c9,7f,a2),43,HX_("Player",81,5f,4d,6c),HX_("setLoc",fe,e1,69,6f)));
HXLINE(  46)		Bool _hx_tmp3 = this->isMe();
HXDLIN(  46)		if (_hx_tmp3) {
HXLINE(  46)			this->g->v->animating = true;
            		}
HXLINE(  48)		::String _hx_switch_0 = this->color;
            		if (  (_hx_switch_0==HX_("b",62,00,00,00)) ){
HXLINE(  53)			this->g->v->aimBC(this->loc);
HXDLIN(  53)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("g",67,00,00,00)) ){
HXLINE(  52)			this->g->v->aimGC(this->loc);
HXDLIN(  52)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("i",69,00,00,00)) ){
HXLINE(  54)			this->g->v->aimIC(this->loc);
HXDLIN(  54)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("o",6f,00,00,00)) ){
HXLINE(  50)			this->g->v->aimOC(this->loc);
HXDLIN(  50)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("r",72,00,00,00)) ){
HXLINE(  49)			this->g->v->aimRC(this->loc);
HXDLIN(  49)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("v",76,00,00,00)) ){
HXLINE(  55)			this->g->v->aimVC(this->loc);
HXDLIN(  55)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("y",79,00,00,00)) ){
HXLINE(  51)			this->g->v->aimYC(this->loc);
HXDLIN(  51)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE(  58)		this->g->v->relocateCars();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,setLoc,(void))

::String Player_obj::getLoc(){
            	HX_STACK_FRAME("Player","getLoc",0x0e14e6d7,"Player.getLoc","Player.hx",62,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE(  62)		return this->loc;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getLoc,return )

void Player_obj::setDest(::String d){
            	HX_STACK_FRAME("Player","setDest",0x31e56937,"Player.setDest","Player.hx",65,0xa27fc9dd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(d,"d")
HXLINE(  67)		this->dest = d;
HXLINE(  69)		::haxe::Log_obj::trace((((HX_("",00,00,00,00) + this->user) + HX_(".dest <- ",ff,97,e7,81)) + this->dest),hx::SourceInfo(HX_("Player.hx",dd,c9,7f,a2),69,HX_("Player",81,5f,4d,6c),HX_("setDest",24,9f,ea,07)));
HXLINE(  71)		::String _hx_switch_0 = this->color;
            		if (  (_hx_switch_0==HX_("b",62,00,00,00)) ){
HXLINE(  76)			this->g->v->aimBD(this->dest);
HXDLIN(  76)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("g",67,00,00,00)) ){
HXLINE(  75)			this->g->v->aimGD(this->dest);
HXDLIN(  75)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("i",69,00,00,00)) ){
HXLINE(  77)			this->g->v->aimID(this->dest);
HXDLIN(  77)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("o",6f,00,00,00)) ){
HXLINE(  73)			this->g->v->aimOD(this->dest);
HXDLIN(  73)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("r",72,00,00,00)) ){
HXLINE(  72)			this->g->v->aimRD(this->dest);
HXDLIN(  72)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("v",76,00,00,00)) ){
HXLINE(  78)			this->g->v->aimVD(this->dest);
HXDLIN(  78)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("y",79,00,00,00)) ){
HXLINE(  74)			this->g->v->aimYD(this->dest);
HXDLIN(  74)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
HXLINE(  81)		this->g->v->relocateDests();
HXLINE(  83)		Bool _hx_tmp = this->isMe();
HXDLIN(  83)		if (_hx_tmp) {
HXLINE(  83)			this->g->t->reset();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,setDest,(void))

Bool Player_obj::isMe(){
            	HX_STACK_FRAME("Player","isMe",0x1a1169ef,"Player.isMe","Player.hx",87,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE(  87)		return (this->user == this->g->user);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,isMe,return )

::String Player_obj::getDest(){
            	HX_STACK_FRAME("Player","getDest",0x3ee3d82b,"Player.getDest","Player.hx",91,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE(  91)		return this->dest;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getDest,return )

Bool Player_obj::onGoal(){
            	HX_STACK_FRAME("Player","onGoal",0x51e6eb1f,"Player.onGoal","Player.hx",94,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE(  94)		return (this->loc == this->dest);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,onGoal,return )

void Player_obj::arrived(){
            	HX_STACK_FRAME("Player","arrived",0x69bb5680,"Player.arrived","Player.hx",97,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE(  97)		this->arrival->play(null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,arrived,(void))


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(arrival,"arrival");
	HX_MARK_MEMBER_NAME(user,"user");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(loc,"loc");
	HX_MARK_MEMBER_NAME(dest,"dest");
	HX_MARK_MEMBER_NAME(card,"card");
	HX_MARK_MEMBER_NAME(cards,"cards");
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(arrival,"arrival");
	HX_VISIT_MEMBER_NAME(user,"user");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(loc,"loc");
	HX_VISIT_MEMBER_NAME(dest,"dest");
	HX_VISIT_MEMBER_NAME(card,"card");
	HX_VISIT_MEMBER_NAME(cards,"cards");
}

hx::Val Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { return hx::Val( g); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"loc") ) { return hx::Val( loc); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"user") ) { return hx::Val( user); }
		if (HX_FIELD_EQ(inName,"dest") ) { return hx::Val( dest); }
		if (HX_FIELD_EQ(inName,"card") ) { return hx::Val( card); }
		if (HX_FIELD_EQ(inName,"isMe") ) { return hx::Val( isMe_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color); }
		if (HX_FIELD_EQ(inName,"cards") ) { return hx::Val( cards); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setLoc") ) { return hx::Val( setLoc_dyn()); }
		if (HX_FIELD_EQ(inName,"getLoc") ) { return hx::Val( getLoc_dyn()); }
		if (HX_FIELD_EQ(inName,"onGoal") ) { return hx::Val( onGoal_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arrival") ) { return hx::Val( arrival); }
		if (HX_FIELD_EQ(inName,"setDest") ) { return hx::Val( setDest_dyn()); }
		if (HX_FIELD_EQ(inName,"getDest") ) { return hx::Val( getDest_dyn()); }
		if (HX_FIELD_EQ(inName,"arrived") ) { return hx::Val( arrived_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getColor") ) { return hx::Val( getColor_dyn()); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return hx::Val( setColor_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Player_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast<  ::Globals >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"loc") ) { loc=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"user") ) { user=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dest") ) { dest=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"card") ) { card=inValue.Cast<  ::Card >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cards") ) { cards=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arrival") ) { arrival=inValue.Cast<  ::openfl::media::Sound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("arrival","\xf9","\x88","\xc0","\x3f"));
	outFields->push(HX_HCSTRING("user","\x4b","\x92","\xad","\x4d"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("loc","\x80","\x54","\x52","\x00"));
	outFields->push(HX_HCSTRING("dest","\x62","\x5e","\x66","\x42"));
	outFields->push(HX_HCSTRING("card","\xd0","\x1d","\xba","\x41"));
	outFields->push(HX_HCSTRING("cards","\xa3","\xf8","\x1f","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Player_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::Globals*/ ,(int)offsetof(Player_obj,g),HX_HCSTRING("g","\x67","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::media::Sound*/ ,(int)offsetof(Player_obj,arrival),HX_HCSTRING("arrival","\xf9","\x88","\xc0","\x3f")},
	{hx::fsString,(int)offsetof(Player_obj,user),HX_HCSTRING("user","\x4b","\x92","\xad","\x4d")},
	{hx::fsString,(int)offsetof(Player_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsString,(int)offsetof(Player_obj,loc),HX_HCSTRING("loc","\x80","\x54","\x52","\x00")},
	{hx::fsString,(int)offsetof(Player_obj,dest),HX_HCSTRING("dest","\x62","\x5e","\x66","\x42")},
	{hx::fsObject /*::Card*/ ,(int)offsetof(Player_obj,card),HX_HCSTRING("card","\xd0","\x1d","\xba","\x41")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Player_obj,cards),HX_HCSTRING("cards","\xa3","\xf8","\x1f","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Player_obj_sStaticStorageInfo = 0;
#endif

static ::String Player_obj_sMemberFields[] = {
	HX_HCSTRING("g","\x67","\x00","\x00","\x00"),
	HX_HCSTRING("arrival","\xf9","\x88","\xc0","\x3f"),
	HX_HCSTRING("user","\x4b","\x92","\xad","\x4d"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("loc","\x80","\x54","\x52","\x00"),
	HX_HCSTRING("dest","\x62","\x5e","\x66","\x42"),
	HX_HCSTRING("card","\xd0","\x1d","\xba","\x41"),
	HX_HCSTRING("cards","\xa3","\xf8","\x1f","\x41"),
	HX_HCSTRING("getColor","\xed","\x80","\x33","\xaa"),
	HX_HCSTRING("setColor","\x61","\xda","\x90","\x58"),
	HX_HCSTRING("setLoc","\xfe","\xe1","\x69","\x6f"),
	HX_HCSTRING("getLoc","\x8a","\x8d","\x21","\xa3"),
	HX_HCSTRING("setDest","\x24","\x9f","\xea","\x07"),
	HX_HCSTRING("isMe","\xe2","\xed","\xbe","\x45"),
	HX_HCSTRING("getDest","\x18","\x0e","\xe9","\x14"),
	HX_HCSTRING("onGoal","\xd2","\x91","\xf3","\xe6"),
	HX_HCSTRING("arrived","\x6d","\x8c","\xc0","\x3f"),
	::String(null()) };

static void Player_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Player_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Player_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Player_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Player_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Player_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Player_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

