// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Button
#include <Button.h>
#endif
#ifndef INCLUDED_Globals
#include <Globals.h>
#endif
#ifndef INCLUDED_IButton
#include <IButton.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_Tile
#include <openfl/display/Tile.h>
#endif
#ifndef INCLUDED_openfl_display_Tilemap
#include <openfl/display/Tilemap.h>
#endif
#ifndef INCLUDED_openfl_display_Tileset
#include <openfl/display/Tileset.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_95476733ad03172e_10_new,"Button","new",0x9489e804,"Button.new","Button.hx",10,0xf1be03ec)
HX_DEFINE_STACK_FRAME(_hx_pos_95476733ad03172e_9_new,"Button","new",0x9489e804,"Button.new","Button.hx",9,0xf1be03ec)
HX_DEFINE_STACK_FRAME(_hx_pos_95476733ad03172e_24_new,"Button","new",0x9489e804,"Button.new","Button.hx",24,0xf1be03ec)
HX_DEFINE_STACK_FRAME(_hx_pos_95476733ad03172e_25_new,"Button","new",0x9489e804,"Button.new","Button.hx",25,0xf1be03ec)
HX_DEFINE_STACK_FRAME(_hx_pos_95476733ad03172e_26_new,"Button","new",0x9489e804,"Button.new","Button.hx",26,0xf1be03ec)
HX_DEFINE_STACK_FRAME(_hx_pos_95476733ad03172e_27_new,"Button","new",0x9489e804,"Button.new","Button.hx",27,0xf1be03ec)
HX_DEFINE_STACK_FRAME(_hx_pos_95476733ad03172e_8_new,"Button","new",0x9489e804,"Button.new","Button.hx",8,0xf1be03ec)
HX_LOCAL_STACK_FRAME(_hx_pos_95476733ad03172e_34_onPush,"Button","onPush",0xfec46175,"Button.onPush","Button.hx",34,0xf1be03ec)
HX_LOCAL_STACK_FRAME(_hx_pos_95476733ad03172e_35_onPop,"Button","onPop",0xd2133a56,"Button.onPop","Button.hx",35,0xf1be03ec)
HX_LOCAL_STACK_FRAME(_hx_pos_95476733ad03172e_37_pushIn,"Button","pushIn",0x8406433b,"Button.pushIn","Button.hx",37,0xf1be03ec)
HX_LOCAL_STACK_FRAME(_hx_pos_95476733ad03172e_51_reset,"Button","reset",0x866e9273,"Button.reset","Button.hx",51,0xf1be03ec)
HX_LOCAL_STACK_FRAME(_hx_pos_95476733ad03172e_63_popOut,"Button","popOut",0x0d905259,"Button.popOut","Button.hx",63,0xf1be03ec)

void Button_obj::__construct( ::Globals g, ::openfl::display::Sprite parent,::String dir){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_95476733ad03172e_10_new)
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_1) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_95476733ad03172e_9_new)
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_2, ::Button,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic _){
            			HX_GC_STACKFRAME(&_hx_pos_95476733ad03172e_24_new)
HXLINE(  24)			_gthis->pushIn();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_3, ::Button,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic _1){
            			HX_GC_STACKFRAME(&_hx_pos_95476733ad03172e_25_new)
HXLINE(  25)			_gthis->popOut();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_4, ::Button,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic _2){
            			HX_GC_STACKFRAME(&_hx_pos_95476733ad03172e_26_new)
HXLINE(  26)			_gthis->reset();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_5, ::Button,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic _3){
            			HX_GC_STACKFRAME(&_hx_pos_95476733ad03172e_27_new)
HXLINE(  27)			_gthis->reset();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_95476733ad03172e_8_new)
HXLINE(  13)		this->pushed = false;
HXLINE(  10)		this->popFn =  ::Dynamic(new _hx_Closure_0());
HXLINE(   9)		this->pushFn =  ::Dynamic(new _hx_Closure_1());
HXLINE(  16)		 ::Button _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  17)		super::__construct();
HXLINE(  19)		this->g = g;
HXLINE(  21)		int w = (int)-1;
HXDLIN(  21)		int h = (int)-1;
HXDLIN(  21)		 ::openfl::display::BitmapData png = ::openfl::Assets_obj::getBitmapData((HX_("assets/",4c,2a,dc,36) + ((HX_("",00,00,00,00) + dir) + HX_("_up.png",b5,6e,d6,d1))),null());
HXDLIN(  21)		 ::openfl::display::Tileset set =  ::openfl::display::Tileset_obj::__alloc( HX_CTX ,png,null());
HXDLIN(  21)		set->addRect(png->rect);
HXDLIN(  21)		 ::openfl::display::Tileset set1 = set;
HXDLIN(  21)		int map;
HXDLIN(  21)		if ((w < (int)0)) {
HXLINE(  21)			map = ::Std_obj::_hx_int(set1->getRect((int)0)->width);
            		}
            		else {
HXLINE(  21)			map = w;
            		}
HXDLIN(  21)		int map1;
HXDLIN(  21)		if ((h < (int)0)) {
HXLINE(  21)			map1 = ::Std_obj::_hx_int(set1->getRect((int)0)->height);
            		}
            		else {
HXLINE(  21)			map1 = h;
            		}
HXDLIN(  21)		 ::openfl::display::Tilemap map2 =  ::openfl::display::Tilemap_obj::__alloc( HX_CTX ,map,map1,set1,null());
HXDLIN(  21)		map2->addTile( ::openfl::display::Tile_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null()));
HXDLIN(  21)		 ::openfl::display::Sprite sprite =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXDLIN(  21)		sprite->addChild(map2);
HXDLIN(  21)		 ::openfl::display::Sprite sprite1 = sprite;
HXDLIN(  21)		sprite1->set_x((int)0);
HXDLIN(  21)		sprite1->set_y((int)0);
HXDLIN(  21)		this->up = sprite1;
HXLINE(  22)		int w1 = (int)-1;
HXDLIN(  22)		int h1 = (int)-1;
HXDLIN(  22)		 ::openfl::display::BitmapData png1 = ::openfl::Assets_obj::getBitmapData((HX_("assets/",4c,2a,dc,36) + ((HX_("",00,00,00,00) + dir) + HX_("_down.png",fc,f5,61,b0))),null());
HXDLIN(  22)		 ::openfl::display::Tileset set2 =  ::openfl::display::Tileset_obj::__alloc( HX_CTX ,png1,null());
HXDLIN(  22)		set2->addRect(png1->rect);
HXDLIN(  22)		 ::openfl::display::Tileset set3 = set2;
HXDLIN(  22)		int map3;
HXDLIN(  22)		if ((w1 < (int)0)) {
HXLINE(  22)			map3 = ::Std_obj::_hx_int(set3->getRect((int)0)->width);
            		}
            		else {
HXLINE(  22)			map3 = w1;
            		}
HXDLIN(  22)		int map4;
HXDLIN(  22)		if ((h1 < (int)0)) {
HXLINE(  22)			map4 = ::Std_obj::_hx_int(set3->getRect((int)0)->height);
            		}
            		else {
HXLINE(  22)			map4 = h1;
            		}
HXDLIN(  22)		 ::openfl::display::Tilemap map5 =  ::openfl::display::Tilemap_obj::__alloc( HX_CTX ,map3,map4,set3,null());
HXDLIN(  22)		map5->addTile( ::openfl::display::Tile_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null()));
HXDLIN(  22)		 ::openfl::display::Sprite sprite2 =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXDLIN(  22)		sprite2->addChild(map5);
HXDLIN(  22)		 ::openfl::display::Sprite sprite3 = sprite2;
HXDLIN(  22)		sprite3->set_x((int)0);
HXDLIN(  22)		sprite3->set_y((int)0);
HXDLIN(  22)		this->down = sprite3;
HXLINE(  24)		this->addEventListener(HX_("mouseDown",27,b1,c2,ee), ::Dynamic(new _hx_Closure_2(_gthis)),null(),null(),null());
HXLINE(  25)		this->addEventListener(HX_("mouseUp",e0,f3,72,c0), ::Dynamic(new _hx_Closure_3(_gthis)),null(),null(),null());
HXLINE(  26)		parent->addEventListener(HX_("mouseUp",e0,f3,72,c0), ::Dynamic(new _hx_Closure_4(_gthis)),null(),null(),null());
HXLINE(  27)		parent->addEventListener(HX_("rollOut",11,f9,11,5d), ::Dynamic(new _hx_Closure_5(_gthis)),null(),null(),null());
HXLINE(  29)		this->addChild(this->up);
HXLINE(  30)		this->addChild(this->down);
HXLINE(  31)		this->reset();
            	}

Dynamic Button_obj::__CreateEmpty() { return new Button_obj; }

void *Button_obj::_hx_vtable = 0;

Dynamic Button_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Button_obj > _hx_result = new Button_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Button_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17120186) {
		if (inClassId<=(int)0x0e74d612) {
			if (inClassId<=(int)0x0ddfced7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0ddfced7;
			} else {
				return inClassId==(int)0x0e74d612;
			}
		} else {
			return inClassId==(int)0x17120186;
		}
	} else {
		if (inClassId<=(int)0x1b123bf8) {
			return inClassId==(int)0x19c29573 || inClassId==(int)0x1b123bf8;
		} else {
			return inClassId==(int)0x3f2b00af;
		}
	}
}

static ::IButton_obj _hx_Button__hx_IButton= {
	( void (hx::Object::*)())&::Button_obj::pushIn,
	( void (hx::Object::*)())&::Button_obj::popOut,
};

void *Button_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xea13b31b: return &_hx_Button__hx_IButton;
	}
	return super::_hx_getInterface(inHash);
}

void Button_obj::onPush( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_95476733ad03172e_34_onPush)
HXLINE(  34)		this->pushFn = f;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,onPush,(void))

void Button_obj::onPop( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_95476733ad03172e_35_onPop)
HXLINE(  35)		this->popFn = f;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,onPop,(void))

void Button_obj::pushIn(){
            	HX_STACKFRAME(&_hx_pos_95476733ad03172e_37_pushIn)
HXLINE(  38)		{
HXLINE(  38)			int _g1 = (int)0;
HXDLIN(  38)			int _g = this->get_numChildren();
HXDLIN(  38)			while((_g1 < _g)){
HXLINE(  38)				_g1 = (_g1 + (int)1);
HXDLIN(  38)				int i = (_g1 - (int)1);
HXLINE(  39)				 ::openfl::display::DisplayObject child = this->getChildAt(i);
HXLINE(  40)				bool _hx_tmp;
HXDLIN(  40)				if (hx::IsNotEq( child,this->up )) {
HXLINE(  40)					_hx_tmp = hx::IsNotEq( child,this->down );
            				}
            				else {
HXLINE(  40)					_hx_tmp = false;
            				}
HXDLIN(  40)				if (_hx_tmp) {
HXLINE(  41)					 ::openfl::display::DisplayObject _g2 = child;
HXDLIN(  41)					_g2->set_y((_g2->get_y() + (int)3));
            				}
            			}
            		}
HXLINE(  44)		this->pushed = true;
HXLINE(  45)		this->g->pushSfx();
HXLINE(  46)		this->up->set_visible(false);
HXLINE(  47)		this->down->set_visible(true);
HXLINE(  48)		this->pushFn();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,pushIn,(void))

void Button_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_95476733ad03172e_51_reset)
HXLINE(  52)		if (this->pushed) {
HXLINE(  52)			int _g1 = (int)0;
HXDLIN(  52)			int _g = this->get_numChildren();
HXDLIN(  52)			while((_g1 < _g)){
HXLINE(  52)				_g1 = (_g1 + (int)1);
HXDLIN(  52)				int i = (_g1 - (int)1);
HXLINE(  53)				 ::openfl::display::DisplayObject child = this->getChildAt(i);
HXLINE(  54)				bool _hx_tmp;
HXDLIN(  54)				if (hx::IsNotEq( child,this->up )) {
HXLINE(  54)					_hx_tmp = hx::IsNotEq( child,this->down );
            				}
            				else {
HXLINE(  54)					_hx_tmp = false;
            				}
HXDLIN(  54)				if (_hx_tmp) {
HXLINE(  55)					 ::openfl::display::DisplayObject _g2 = child;
HXDLIN(  55)					_g2->set_y((_g2->get_y() - (int)3));
            				}
            			}
            		}
HXLINE(  58)		this->down->set_visible(false);
HXLINE(  59)		this->up->set_visible(true);
HXLINE(  60)		this->pushed = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,reset,(void))

void Button_obj::popOut(){
            	HX_STACKFRAME(&_hx_pos_95476733ad03172e_63_popOut)
HXLINE(  64)		if (!(this->pushed)) {
HXLINE(  64)			return;
            		}
HXLINE(  65)		this->g->popSfx();
HXLINE(  66)		this->reset();
HXLINE(  67)		this->popFn();
HXLINE(  68)		this->pushed = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,popOut,(void))


hx::ObjectPtr< Button_obj > Button_obj::__new( ::Globals g, ::openfl::display::Sprite parent,::String dir) {
	hx::ObjectPtr< Button_obj > __this = new Button_obj();
	__this->__construct(g,parent,dir);
	return __this;
}

hx::ObjectPtr< Button_obj > Button_obj::__alloc(hx::Ctx *_hx_ctx, ::Globals g, ::openfl::display::Sprite parent,::String dir) {
	Button_obj *__this = (Button_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Button_obj), true, "Button"));
	*(void **)__this = Button_obj::_hx_vtable;
	__this->__construct(g,parent,dir);
	return __this;
}

Button_obj::Button_obj()
{
}

void Button_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Button);
	HX_MARK_MEMBER_NAME(pushFn,"pushFn");
	HX_MARK_MEMBER_NAME(popFn,"popFn");
	HX_MARK_MEMBER_NAME(up,"up");
	HX_MARK_MEMBER_NAME(down,"down");
	HX_MARK_MEMBER_NAME(pushed,"pushed");
	HX_MARK_MEMBER_NAME(g,"g");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Button_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pushFn,"pushFn");
	HX_VISIT_MEMBER_NAME(popFn,"popFn");
	HX_VISIT_MEMBER_NAME(up,"up");
	HX_VISIT_MEMBER_NAME(down,"down");
	HX_VISIT_MEMBER_NAME(pushed,"pushed");
	HX_VISIT_MEMBER_NAME(g,"g");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Button_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { return hx::Val( g); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { return hx::Val( up); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"down") ) { return hx::Val( down); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"popFn") ) { return hx::Val( popFn); }
		if (HX_FIELD_EQ(inName,"onPop") ) { return hx::Val( onPop_dyn()); }
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pushFn") ) { return hx::Val( pushFn); }
		if (HX_FIELD_EQ(inName,"pushed") ) { return hx::Val( pushed); }
		if (HX_FIELD_EQ(inName,"onPush") ) { return hx::Val( onPush_dyn()); }
		if (HX_FIELD_EQ(inName,"pushIn") ) { return hx::Val( pushIn_dyn()); }
		if (HX_FIELD_EQ(inName,"popOut") ) { return hx::Val( popOut_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Button_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast<  ::Globals >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"up") ) { up=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"down") ) { down=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"popFn") ) { popFn=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"pushFn") ) { pushFn=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pushed") ) { pushed=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Button_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("up","\x5b","\x66","\x00","\x00"));
	outFields->push(HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"));
	outFields->push(HX_HCSTRING("pushed","\xb9","\x14","\x2d","\x72"));
	outFields->push(HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Button_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Button_obj,pushFn),HX_HCSTRING("pushFn","\xc2","\xf9","\x2c","\x72")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Button_obj,popFn),HX_HCSTRING("popFn","\x39","\xe1","\x94","\xc6")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Button_obj,up),HX_HCSTRING("up","\x5b","\x66","\x00","\x00")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Button_obj,down),HX_HCSTRING("down","\x62","\xf8","\x6d","\x42")},
	{hx::fsBool,(int)offsetof(Button_obj,pushed),HX_HCSTRING("pushed","\xb9","\x14","\x2d","\x72")},
	{hx::fsObject /*::Globals*/ ,(int)offsetof(Button_obj,g),HX_HCSTRING("g","\x67","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Button_obj_sStaticStorageInfo = 0;
#endif

static ::String Button_obj_sMemberFields[] = {
	HX_HCSTRING("pushFn","\xc2","\xf9","\x2c","\x72"),
	HX_HCSTRING("popFn","\x39","\xe1","\x94","\xc6"),
	HX_HCSTRING("up","\x5b","\x66","\x00","\x00"),
	HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"),
	HX_HCSTRING("pushed","\xb9","\x14","\x2d","\x72"),
	HX_HCSTRING("g","\x67","\x00","\x00","\x00"),
	HX_HCSTRING("onPush","\x99","\x1a","\xeb","\xec"),
	HX_HCSTRING("onPop","\xb2","\xf1","\x6c","\x32"),
	HX_HCSTRING("pushIn","\x5f","\xfc","\x2c","\x72"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("popOut","\x7d","\x0b","\xb7","\xfb"),
	::String(null()) };

static void Button_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Button_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Button_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Button_obj::__mClass,"__mClass");
};

#endif

hx::Class Button_obj::__mClass;

void Button_obj::__register()
{
	hx::Object *dummy = new Button_obj;
	Button_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Button","\x12","\xd6","\x74","\x0e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Button_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Button_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Button_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Button_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Button_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Button_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
