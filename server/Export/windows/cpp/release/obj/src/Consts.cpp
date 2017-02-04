// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Consts
#include <Consts.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
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
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
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
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif


void Consts_obj::__construct() { }

Dynamic Consts_obj::__CreateEmpty() { return new Consts_obj; }

hx::ObjectPtr< Consts_obj > Consts_obj::__new()
{
	hx::ObjectPtr< Consts_obj > _hx_result = new Consts_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Consts_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Consts_obj > _hx_result = new Consts_obj();
	_hx_result->__construct();
	return _hx_result;
}

Int Consts_obj::WIDTH;

Int Consts_obj::HEIGHT;

Int Consts_obj::FONT_COLOR;

 ::Dynamic Consts_obj::take(::Array< ::Dynamic> m){
            	HX_STACK_FRAME("Consts","take",0x0c0e23a5,"Consts.take","Consts.hx",34,0xf1f392ee)
            	HX_STACK_ARG(m,"m")
HXLINE(  34)		return m->shift();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Consts_obj,take,return )

void Consts_obj::addLetter(::Array< ::Dynamic> m, ::sys::net::Socket s,::cpp::VirtualArray t){
            	HX_STACK_FRAME("Consts","addLetter",0x4ddd81c9,"Consts.addLetter","Consts.hx",37,0xf1f392ee)
            	HX_STACK_ARG(m,"m")
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(t,"t")
HXLINE(  38)		HX_VARI(  ::haxe::Serializer,serial) =  ::haxe::Serializer_obj::__new();
HXLINE(  40)		{
HXLINE(  40)			HX_VARI( Int,_g) = (int)0;
HXDLIN(  40)			while((_g < t->get_length())){
HXLINE(  40)				HX_VARI(  ::Dynamic,token) = t->__get(_g);
HXDLIN(  40)				++_g;
HXLINE(  41)				serial->serialize(token);
            			}
            		}
HXLINE(  43)		::String _hx_tmp = serial->toString();
HXDLIN(  43)		m->push( ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("body",a2,7a,1b,41),_hx_tmp)
            			->setFixed(1,HX_("sender",b5,c7,84,6b),s)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Consts_obj,addLetter,(void))

 ::haxe::Unserializer Consts_obj::serial(::String packet){
            	HX_STACK_FRAME("Consts","serial",0xb27ce8d2,"Consts.serial","Consts.hx",47,0xf1f392ee)
            	HX_STACK_ARG(packet,"packet")
HXLINE(  47)		return  ::haxe::Unserializer_obj::__new(packet);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Consts_obj,serial,return )

 ::Dynamic Consts_obj::next( ::haxe::Unserializer serial){
            	HX_STACK_FRAME("Consts","next",0x0819f051,"Consts.next","Consts.hx",51,0xf1f392ee)
            	HX_STACK_ARG(serial,"serial")
HXLINE(  51)		return serial->unserialize();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Consts_obj,next,return )

::String Consts_obj::nextString( ::haxe::Unserializer serial){
            	HX_STACK_FRAME("Consts","nextString",0x2e3d2002,"Consts.nextString","Consts.hx",55,0xf1f392ee)
            	HX_STACK_ARG(serial,"serial")
HXLINE(  55)		 ::Dynamic _hx_tmp = serial->unserialize();
HXDLIN(  55)		return ::Std_obj::string(_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Consts_obj,nextString,return )

 ::openfl::text::TextField Consts_obj::text(::String s,Float x,Float y,Int pt,hx::Null< Int >  __o_c){
Int c = __o_c.Default(8323072);
            	HX_STACK_FRAME("Consts","text",0x0c11380b,"Consts.text","Consts.hx",58,0xf1f392ee)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(pt,"pt")
            	HX_STACK_ARG(c,"c")
HXLINE(  59)		HX_VARI(  ::openfl::text::TextField,t) =  ::openfl::text::TextField_obj::__new();
HXLINE(  60)		t->set_text(s);
HXLINE(  61)		Float _hx_tmp = t->get_width();
HXDLIN(  61)		t->set_x((x - ((Float)_hx_tmp / (Float)(int)2)));
HXLINE(  62)		t->set_y(y);
HXLINE(  63)		t->set_autoSize((int)0);
HXLINE(  64)		t->set_selectable(false);
HXLINE(  67)		 ::openfl::text::Font _this = ::openfl::Assets_obj::getFont(HX_("assets/etc/lucon.ttf",8a,7b,49,6b),null());
HXLINE(  66)		t->setTextFormat( ::openfl::text::TextFormat_obj::__new(_this->name,pt,c,true,null(),null(),null(),null(),null(),null(),null(),null(),null()),null(),null());
HXLINE(  73)		t->set_embedFonts(true);
HXLINE(  75)		return t;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Consts_obj,text,return )

 ::openfl::text::TextField Consts_obj::textBox(::String s,Float x,Float y,Int pt){
            	HX_STACK_FRAME("Consts","textBox",0x1ff996c0,"Consts.textBox","Consts.hx",78,0xf1f392ee)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(pt,"pt")
HXLINE(  79)		HX_VARI(  ::openfl::text::TextField,t) =  ::openfl::text::TextField_obj::__new();
HXLINE(  80)		t->set_embedFonts(true);
HXLINE(  82)		 ::openfl::text::Font _this = ::openfl::Assets_obj::getFont(HX_("assets/etc/lucon.ttf",8a,7b,49,6b),null());
HXLINE(  81)		t->setTextFormat( ::openfl::text::TextFormat_obj::__new(_this->name,pt,(int)8323072,true,null(),null(),null(),null(),null(),null(),null(),null(),null()),null(),null());
HXLINE(  87)		t->set_multiline(false);
HXLINE(  88)		t->set_wordWrap(false);
HXLINE(  89)		t->set_text(s);
HXLINE(  90)		t->set_x(x);
HXLINE(  91)		t->set_y(y);
HXLINE(  92)		t->set_type((int)1);
HXLINE(  93)		t->set_border(true);
HXLINE(  94)		t->set_borderColor((int)8323072);
HXLINE(  95)		Float _hx_tmp = t->get_width();
HXDLIN(  95)		Int _hx_tmp1 = ::Std_obj::_hx_int(((Float)_hx_tmp / (Float)pt));
HXDLIN(  95)		t->set_maxChars(_hx_tmp1);
HXLINE(  96)		t->set_restrict(HX_("A-Z a-z 0-9",b8,e4,9c,e8));
HXLINE(  98)		return t;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Consts_obj,textBox,return )

Float Consts_obj::diff(Float a,Float b){
            	HX_STACK_FRAME("Consts","diff",0x0180c763,"Consts.diff","Consts.hx",105,0xf1f392ee)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 105)		return ::Math_obj::abs((a - b));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Consts_obj,diff,return )

Float Consts_obj::dist(Int ax,Int ay,Int bx,Int by){
            	HX_STACK_FRAME("Consts","dist",0x0180d2c4,"Consts.dist","Consts.hx",112,0xf1f392ee)
            	HX_STACK_ARG(ax,"ax")
            	HX_STACK_ARG(ay,"ay")
            	HX_STACK_ARG(bx,"bx")
            	HX_STACK_ARG(by,"by")
HXLINE( 112)		Float _hx_tmp = ::Math_obj::pow((bx - ax),(int)2);
HXDLIN( 112)		Float _hx_tmp1 = ::Math_obj::pow((by - ay),(int)2);
HXDLIN( 112)		return ::Math_obj::sqrt((_hx_tmp + _hx_tmp1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Consts_obj,dist,return )

Float Consts_obj::scale(Int w,Int h){
            	HX_STACK_FRAME("Consts","scale",0xee35556c,"Consts.scale","Consts.hx",119,0xf1f392ee)
            	HX_STACK_ARG(w,"w")
            	HX_STACK_ARG(h,"h")
HXLINE( 119)		return ::Math_obj::min(((Float)w / (Float)(int)800),((Float)h / (Float)(int)480));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Consts_obj,scale,return )

 ::openfl::media::Sound Consts_obj::sound(::String dir){
            	HX_STACK_FRAME("Consts","sound",0xf63313b1,"Consts.sound","Consts.hx",126,0xf1f392ee)
            	HX_STACK_ARG(dir,"dir")
HXLINE( 126)		return ::openfl::media::Sound_obj::fromFile((HX_("assets/",4c,2a,dc,36) + dir));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Consts_obj,sound,return )

 ::openfl::display::BitmapData Consts_obj::bmp(::String dir){
            	HX_STACK_FRAME("Consts","bmp",0xc32866a7,"Consts.bmp","Consts.hx",133,0xf1f392ee)
            	HX_STACK_ARG(dir,"dir")
HXLINE( 133)		return ::openfl::Assets_obj::getBitmapData((HX_("assets/",4c,2a,dc,36) + dir),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Consts_obj,bmp,return )

 ::openfl::display::Tileset Consts_obj::tileset(::String dir){
            	HX_STACK_FRAME("Consts","tileset",0xc6d30496,"Consts.tileset","Consts.hx",139,0xf1f392ee)
            	HX_STACK_ARG(dir,"dir")
HXLINE( 140)		HX_VARI(  ::openfl::display::BitmapData,png) = ::openfl::Assets_obj::getBitmapData((HX_("assets/",4c,2a,dc,36) + dir),null());
HXLINE( 141)		HX_VARI(  ::openfl::display::Tileset,set) =  ::openfl::display::Tileset_obj::__new(png,null());
HXLINE( 142)		set->addRect(png->rect);
HXLINE( 143)		return set;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Consts_obj,tileset,return )

 ::openfl::display::Tile Consts_obj::tile(::String dir){
            	HX_STACK_FRAME("Consts","tile",0x0c14368c,"Consts.tile","Consts.hx",149,0xf1f392ee)
            	HX_STACK_ARG(dir,"dir")
HXLINE( 150)		HX_VARI(  ::openfl::display::Tile,tile) =  ::openfl::display::Tile_obj::__new(null(),null(),null(),null(),null(),null());
HXLINE( 151)		HX_VARI(  ::openfl::display::BitmapData,png) = ::openfl::Assets_obj::getBitmapData((HX_("assets/",4c,2a,dc,36) + dir),null());
HXDLIN( 151)		HX_VARI(  ::openfl::display::Tileset,set) =  ::openfl::display::Tileset_obj::__new(png,null());
HXDLIN( 151)		set->addRect(png->rect);
HXDLIN( 151)		tile->set_tileset(set);
HXLINE( 152)		return tile;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Consts_obj,tile,return )

 ::openfl::display::Tilemap Consts_obj::tilemap(::String dir,hx::Null< Int >  __o_w,hx::Null< Int >  __o_h){
Int w = __o_w.Default(-1);
Int h = __o_h.Default(-1);
            	HX_STACK_FRAME("Consts","tilemap",0xc6ce7390,"Consts.tilemap","Consts.hx",158,0xf1f392ee)
            	HX_STACK_ARG(dir,"dir")
            	HX_STACK_ARG(w,"w")
            	HX_STACK_ARG(h,"h")
HXLINE( 159)		HX_VARI(  ::openfl::display::BitmapData,png) = ::openfl::Assets_obj::getBitmapData((HX_("assets/",4c,2a,dc,36) + dir),null());
HXDLIN( 159)		HX_VARI(  ::openfl::display::Tileset,set) =  ::openfl::display::Tileset_obj::__new(png,null());
HXDLIN( 159)		set->addRect(png->rect);
HXLINE( 162)		Int _hx_tmp;
HXDLIN( 162)		if ((w < (int)0)) {
HXLINE( 162)			_hx_tmp = ::Std_obj::_hx_int(set->getRect((int)0)->width);
            		}
            		else {
HXLINE( 162)			_hx_tmp = w;
            		}
HXLINE( 163)		Int _hx_tmp1;
HXDLIN( 163)		if ((h < (int)0)) {
HXLINE( 163)			_hx_tmp1 = ::Std_obj::_hx_int(set->getRect((int)0)->height);
            		}
            		else {
HXLINE( 163)			_hx_tmp1 = h;
            		}
HXLINE( 161)		HX_VARI(  ::openfl::display::Tilemap,map) =  ::openfl::display::Tilemap_obj::__new(_hx_tmp,_hx_tmp1,set,null());
HXLINE( 167)		map->addTile( ::openfl::display::Tile_obj::__new(null(),null(),null(),null(),null(),null()));
HXLINE( 169)		return map;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Consts_obj,tilemap,return )

 ::openfl::display::Sprite Consts_obj::mapToSprite( ::openfl::display::Tilemap map){
            	HX_STACK_FRAME("Consts","mapToSprite",0x411122fe,"Consts.mapToSprite","Consts.hx",175,0xf1f392ee)
            	HX_STACK_ARG(map,"map")
HXLINE( 176)		HX_VARI(  ::openfl::display::Sprite,sprite) =  ::openfl::display::Sprite_obj::__new();
HXLINE( 177)		sprite->addChild(map);
HXLINE( 179)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Consts_obj,mapToSprite,return )

 ::openfl::display::Sprite Consts_obj::sprite(::String dir,hx::Null< Int >  __o_x,hx::Null< Int >  __o_y){
Int x = __o_x.Default(0);
Int y = __o_y.Default(0);
            	HX_STACK_FRAME("Consts","sprite",0x07e55ae3,"Consts.sprite","Consts.hx",185,0xf1f392ee)
            	HX_STACK_ARG(dir,"dir")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE( 186)		HX_VARI(  ::openfl::display::BitmapData,png) = ::openfl::Assets_obj::getBitmapData((HX_("assets/",4c,2a,dc,36) + dir),null());
HXDLIN( 186)		HX_VARI(  ::openfl::display::Tileset,set) =  ::openfl::display::Tileset_obj::__new(png,null());
HXDLIN( 186)		set->addRect(png->rect);
HXDLIN( 186)		Int _hx_tmp;
HXDLIN( 186)		_hx_tmp = ::Std_obj::_hx_int(set->getRect((int)0)->width);
HXDLIN( 186)		Int _hx_tmp1;
HXDLIN( 186)		_hx_tmp1 = ::Std_obj::_hx_int(set->getRect((int)0)->height);
HXDLIN( 186)		HX_VARI(  ::openfl::display::Tilemap,map) =  ::openfl::display::Tilemap_obj::__new(_hx_tmp,_hx_tmp1,set,null());
HXDLIN( 186)		map->addTile( ::openfl::display::Tile_obj::__new(null(),null(),null(),null(),null(),null()));
HXDLIN( 186)		HX_VARI(  ::openfl::display::Sprite,sprite) =  ::openfl::display::Sprite_obj::__new();
HXDLIN( 186)		sprite->addChild(map);
HXLINE( 187)		sprite->set_x(x);
HXLINE( 188)		sprite->set_y(y);
HXLINE( 190)		return sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Consts_obj,sprite,return )

Float Consts_obj::center(Float line,Float point){
            	HX_STACK_FRAME("Consts","center",0x4a2aa4b3,"Consts.center","Consts.hx",197,0xf1f392ee)
            	HX_STACK_ARG(line,"line")
            	HX_STACK_ARG(point,"point")
HXLINE( 197)		return (point - ((Float)line / (Float)(int)2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Consts_obj,center,return )

::Array< ::Dynamic> Consts_obj::locations( ::openfl::display::BitmapData image){
            	HX_STACK_FRAME("Consts","locations",0xab0aa080,"Consts.locations","Consts.hx",203,0xf1f392ee)
            	HX_STACK_ARG(image,"image")
HXLINE( 204)		HX_VARI( ::Array< ::Dynamic>,points) = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 207)		::Std_obj::_hx_int(((Float)6.5));
HXLINE( 210)		{
HXLINE( 210)			HX_VARI( Int,_g1) = (int)0;
HXDLIN( 210)			HX_VARI( Int,_g) = image->height;
HXDLIN( 210)			while((_g1 < _g)){
HXLINE( 210)				HX_VARI( Int,j) = _g1++;
HXLINE( 211)				{
HXLINE( 211)					HX_VARI( Int,_g3) = (int)0;
HXDLIN( 211)					HX_VARI( Int,_g2) = image->width;
HXDLIN( 211)					while((_g3 < _g2)){
HXLINE( 211)						HX_VARI( Int,i) = _g3++;
HXLINE( 212)						HX_VARI( Bool,newLoc) = true;
HXLINE( 214)						Int _hx_tmp = image->getPixel(i,j);
HXDLIN( 214)						if ((_hx_tmp == (int)16711680)) {
HXLINE( 215)							Bool _hx_tmp1 = (points->length > (int)0);
HXDLIN( 215)							if (_hx_tmp1) {
HXLINE( 216)								{
HXLINE( 216)									HX_VARI( Int,_g4) = (int)0;
HXDLIN( 216)									while((_g4 < points->length)){
HXLINE( 216)										HX_VARI(  ::Dynamic,p) = points->__get(_g4);
HXDLIN( 216)										++_g4;
HXDLIN( 216)										Bool _hx_tmp2;
HXDLIN( 216)										Int _hx_tmp3 = (( (Int)(p->__Field(HX_("x",78,00,00,00),hx::paccDynamic)) ) - i);
HXDLIN( 216)										Float _hx_tmp4 = ::Math_obj::abs(_hx_tmp3);
HXDLIN( 216)										if ((_hx_tmp4 <= (int)12)) {
HXLINE( 216)											Int _hx_tmp5 = (( (Int)(p->__Field(HX_("y",79,00,00,00),hx::paccDynamic)) ) - j);
HXDLIN( 216)											Float _hx_tmp6 = ::Math_obj::abs(_hx_tmp5);
HXDLIN( 216)											_hx_tmp2 = (_hx_tmp6 <= (int)13);
            										}
            										else {
HXLINE( 216)											_hx_tmp2 = false;
            										}
HXDLIN( 216)										if (_hx_tmp2) {
HXLINE( 217)											newLoc = false;
            										}
            									}
            								}
HXLINE( 218)								if (newLoc) {
HXLINE( 218)									points->push( ::Dynamic(hx::Anon_obj::Create(2)
            										->setFixed(0,HX_("x",78,00,00,00),(i + (int)1))
            										->setFixed(1,HX_("y",79,00,00,00),(j + (int)6))));
            								}
            							}
            							else {
HXLINE( 219)								points->push( ::Dynamic(hx::Anon_obj::Create(2)
            									->setFixed(0,HX_("x",78,00,00,00),(i + (int)1))
            									->setFixed(1,HX_("y",79,00,00,00),(j + (int)6))));
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 222)		return points;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Consts_obj,locations,return )

Int Consts_obj::nameToIndex(::String name,::Array< ::String > names){
            	HX_STACK_FRAME("Consts","nameToIndex",0x6d6628ee,"Consts.nameToIndex","Consts.hx",228,0xf1f392ee)
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(names,"names")
HXLINE( 229)		HX_VARI( Int,index) = (int)0;
HXLINE( 230)		{
HXLINE( 230)			HX_VARI( Int,_g1) = (int)0;
HXDLIN( 230)			HX_VARI( Int,_g) = names->length;
HXDLIN( 230)			while((_g1 < _g)){
HXLINE( 230)				HX_VARI( Int,i) = _g1++;
HXDLIN( 230)				if ((name == names->__get(i))) {
HXLINE( 230)					index = i;
            				}
            			}
            		}
HXLINE( 231)		return index;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Consts_obj,nameToIndex,return )


Consts_obj::Consts_obj()
{
}

bool Consts_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bmp") ) { outValue = bmp_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"take") ) { outValue = take_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"next") ) { outValue = next_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"text") ) { outValue = text_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"diff") ) { outValue = diff_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"dist") ) { outValue = dist_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"tile") ) { outValue = tile_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { outValue = scale_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sound") ) { outValue = sound_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"serial") ) { outValue = serial_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sprite") ) { outValue = sprite_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"center") ) { outValue = center_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"textBox") ) { outValue = textBox_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"tileset") ) { outValue = tileset_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"tilemap") ) { outValue = tilemap_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addLetter") ) { outValue = addLetter_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"locations") ) { outValue = locations_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nextString") ) { outValue = nextString_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mapToSprite") ) { outValue = mapToSprite_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"nameToIndex") ) { outValue = nameToIndex_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Consts_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Consts_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Consts_obj::WIDTH,HX_HCSTRING("WIDTH","\xe6","\xed","\x50","\x48")},
	{hx::fsInt,(void *) &Consts_obj::HEIGHT,HX_HCSTRING("HEIGHT","\xe7","\xb3","\xce","\xb4")},
	{hx::fsInt,(void *) &Consts_obj::FONT_COLOR,HX_HCSTRING("FONT_COLOR","\x93","\xdb","\x77","\x83")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Consts_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Consts_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Consts_obj::WIDTH,"WIDTH");
	HX_MARK_MEMBER_NAME(Consts_obj::HEIGHT,"HEIGHT");
	HX_MARK_MEMBER_NAME(Consts_obj::FONT_COLOR,"FONT_COLOR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Consts_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Consts_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Consts_obj::WIDTH,"WIDTH");
	HX_VISIT_MEMBER_NAME(Consts_obj::HEIGHT,"HEIGHT");
	HX_VISIT_MEMBER_NAME(Consts_obj::FONT_COLOR,"FONT_COLOR");
};

#endif

hx::Class Consts_obj::__mClass;

static ::String Consts_obj_sStaticFields[] = {
	HX_HCSTRING("WIDTH","\xe6","\xed","\x50","\x48"),
	HX_HCSTRING("HEIGHT","\xe7","\xb3","\xce","\xb4"),
	HX_HCSTRING("FONT_COLOR","\x93","\xdb","\x77","\x83"),
	HX_HCSTRING("take","\x47","\xb8","\xf6","\x4c"),
	HX_HCSTRING("addLetter","\xe7","\xe1","\x2c","\x5b"),
	HX_HCSTRING("serial","\xf4","\x69","\x2d","\x6e"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("nextString","\x24","\xda","\x61","\xc6"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("textBox","\x5e","\x13","\xba","\x9e"),
	HX_HCSTRING("diff","\x05","\x5c","\x69","\x42"),
	HX_HCSTRING("dist","\x66","\x67","\x69","\x42"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"),
	HX_HCSTRING("bmp","\x45","\xbc","\x4a","\x00"),
	HX_HCSTRING("tileset","\x34","\x81","\x93","\x45"),
	HX_HCSTRING("tile","\x2e","\xcb","\xfc","\x4c"),
	HX_HCSTRING("tilemap","\x2e","\xf0","\x8e","\x45"),
	HX_HCSTRING("mapToSprite","\x9c","\x46","\x0f","\xc9"),
	HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"),
	HX_HCSTRING("center","\xd5","\x25","\xdb","\x05"),
	HX_HCSTRING("locations","\x9e","\x00","\x5a","\xb8"),
	HX_HCSTRING("nameToIndex","\x8c","\x4c","\x64","\xf5"),
	::String(null())
};

void Consts_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Consts","\xd0","\xb1","\x70","\xfc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Consts_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Consts_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Consts_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Consts_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Consts_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Consts_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Consts_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Consts_obj::__boot()
{
{
            	HX_STACK_FRAME("Consts","boot",0x0032ef90,"Consts.boot","Consts.hx",29,0xf1f392ee)
HXLINE(  29)		WIDTH = (int)800;
            	}
{
            	HX_STACK_FRAME("Consts","boot",0x0032ef90,"Consts.boot","Consts.hx",30,0xf1f392ee)
HXLINE(  30)		HEIGHT = (int)480;
            	}
{
            	HX_STACK_FRAME("Consts","boot",0x0032ef90,"Consts.boot","Consts.hx",31,0xf1f392ee)
HXLINE(  31)		FONT_COLOR = (int)8323072;
            	}
}

