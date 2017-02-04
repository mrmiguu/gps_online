// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_AStar
#include <AStar.h>
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
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Terrain
#include <Terrain.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif


void Player_obj::__construct( ::Globals g,::String user,::String pass, ::sys::net::Socket s){
            	HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",11,0xa27fc9dd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(g,"g")
            	HX_STACK_ARG(user,"user")
            	HX_STACK_ARG(pass,"pass")
            	HX_STACK_ARG(s,"s")
HXLINE(  28)		this->roygbiv = HX_("roygbiv",e4,d2,07,d6);
HXLINE(  20)		this->level = (int)1;
HXLINE(  19)		this->cards = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  31)		::haxe::Log_obj::trace(HX_("new Player",41,33,ad,0e),hx::SourceInfo(HX_("Player.hx",dd,c9,7f,a2),31,HX_("Player",81,5f,4d,6c),HX_("new",60,d0,53,00)));
HXLINE(  32)		this->g = g;
HXLINE(  33)		this->user = user;
HXLINE(  34)		this->pass = pass;
HXLINE(  35)		this->socket = s;
HXLINE(  37)		::sys::FileSystem_obj::createDirectory(HX_("accounts",26,1b,63,8d));
HXLINE(  38)		this->save();
            	}

Dynamic Player_obj::__CreateEmpty() { return new Player_obj; }

hx::ObjectPtr< Player_obj > Player_obj::__new( ::Globals g,::String user,::String pass, ::sys::net::Socket s)
{
	hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct(g,user,pass,s);
	return _hx_result;
}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

Bool Player_obj::onGoal(){
            	HX_STACK_FRAME("Player","onGoal",0x51e6eb1f,"Player.onGoal","Player.hx",41,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE(  41)		return (this->cur == (this->path->length - (int)1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,onGoal,return )

void Player_obj::addCard( ::Card c){
            	HX_STACK_FRAME("Player","addCard",0xa7f22aa4,"Player.addCard","Player.hx",43,0xa27fc9dd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(c,"c")
HXLINE(  44)		::haxe::Log_obj::trace(HX_("addCard",91,60,f7,7d),hx::SourceInfo(HX_("Player.hx",dd,c9,7f,a2),44,HX_("Player",81,5f,4d,6c),HX_("addCard",91,60,f7,7d)));
HXLINE(  46)		Bool _hx_tmp = (this->cards->length == (int)0);
HXDLIN(  46)		if (_hx_tmp) {
HXLINE(  46)			this->card = c;
            		}
HXLINE(  47)		this->cards->push(c);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,addCard,(void))

void Player_obj::equipCard( ::Card c){
            	HX_STACK_FRAME("Player","equipCard",0xd48eed73,"Player.equipCard","Player.hx",51,0xa27fc9dd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(c,"c")
HXLINE(  51)		Int _hx_tmp = this->cards->indexOf(c,null());
HXDLIN(  51)		if ((_hx_tmp != (int)-1)) {
HXLINE(  51)			this->card = c;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,equipCard,(void))

void Player_obj::save(){
            	HX_STACK_FRAME("Player","save",0x20a0074a,"Player.save","Player.hx",55,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE(  55)		::sys::io::File_obj::saveContent((HX_("accounts/",49,a6,54,29) + this->user),(HX_("\r\n            ",dd,ca,03,fe) + this->pass));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,save,(void))

void Player_obj::init(){
            	HX_STACK_FRAME("Player","init",0x1a0db71d,"Player.init","Player.hx",60,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE(  61)		::haxe::Log_obj::trace(HX_("init",10,3b,bb,45),hx::SourceInfo(HX_("Player.hx",dd,c9,7f,a2),61,HX_("Player",81,5f,4d,6c),HX_("init",10,3b,bb,45)));
HXLINE(  62)		Int _hx_tmp = hx::Mod(this->user.length,(int)7);
HXDLIN(  62)		::String _hx_tmp1 = this->roygbiv.charAt(_hx_tmp);
HXDLIN(  62)		this->setColor(_hx_tmp1);
HXLINE(  63)		this->reset();
HXLINE(  64)		{
HXLINE(  64)			HX_VARI( ::cpp::VirtualArray,t) = ::cpp::VirtualArray_obj::__new(1)->init(0,HX_("init",10,3b,bb,45));
HXDLIN(  64)			HX_VARI(  ::haxe::Serializer,serial) =  ::haxe::Serializer_obj::__new();
HXDLIN(  64)			{
HXLINE(  64)				HX_VARI( Int,_g) = (int)0;
HXDLIN(  64)				while((_g < t->get_length())){
HXLINE(  64)					HX_VARI(  ::Dynamic,token) = t->__get(_g);
HXDLIN(  64)					++_g;
HXDLIN(  64)					serial->serialize(token);
            				}
            			}
HXDLIN(  64)			::String _hx_tmp2 = serial->toString();
HXDLIN(  64)			this->g->out->push( ::Dynamic(hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("body",a2,7a,1b,41),_hx_tmp2)
            				->setFixed(1,HX_("sender",b5,c7,84,6b),this->socket)));
            		}
HXLINE(  65)		::haxe::Log_obj::trace(HX_("addLetter(socket,['init'])",3f,ec,cb,9a),hx::SourceInfo(HX_("Player.hx",dd,c9,7f,a2),65,HX_("Player",81,5f,4d,6c),HX_("init",10,3b,bb,45)));
HXLINE(  68)		this->informColors();
HXLINE(  69)		this->informLocs();
HXLINE(  70)		this->informDests();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,init,(void))

void Player_obj::reset(){
            	HX_STACK_FRAME("Player","reset",0xdaa25922,"Player.reset","Player.hx",73,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE(  74)		::haxe::Log_obj::trace(HX_("reset",cf,49,c8,e6),hx::SourceInfo(HX_("Player.hx",dd,c9,7f,a2),74,HX_("Player",81,5f,4d,6c),HX_("reset",cf,49,c8,e6)));
HXLINE(  79)		HX_VARI( Int,i) = ::Std_obj::random(this->g->t->pairs->length);
HXLINE(  82)		HX_VARI( Int,s) = ::Std_obj::random((int)2);
HXLINE(  86)		 ::Node _hx_tmp = this->g->t->pairs->__get(i).StaticCast< ::Array< ::Dynamic> >()->__get(s).StaticCast<  ::Node >();
HXDLIN(  86)		 ::Node _hx_tmp1 = this->g->t->pairs->__get(i).StaticCast< ::Array< ::Dynamic> >()->__get(hx::Mod((s + (int)1),(int)2)).StaticCast<  ::Node >();
HXDLIN(  86)		this->refine(_hx_tmp,_hx_tmp1);
HXLINE(  88)		::String _hx_tmp2 = ((HX_("",00,00,00,00) + this->user) + HX_(".dest <- ",ff,97,e7,81));
HXDLIN(  88)		::String _hx_tmp3 = this->getDest();
HXDLIN(  88)		::haxe::Log_obj::trace((_hx_tmp2 + _hx_tmp3),hx::SourceInfo(HX_("Player.hx",dd,c9,7f,a2),88,HX_("Player",81,5f,4d,6c),HX_("reset",cf,49,c8,e6)));
HXLINE(  89)		this->broadcastDest();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,reset,(void))

Bool Player_obj::on(Int hwy){
            	HX_STACK_FRAME("Player","on",0xa27fcfec,"Player.on","Player.hx",92,0xa27fc9dd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(hwy,"hwy")
HXLINE(  93)		::haxe::Log_obj::trace(HX_("on",1f,61,00,00),hx::SourceInfo(HX_("Player.hx",dd,c9,7f,a2),93,HX_("Player",81,5f,4d,6c),HX_("on",1f,61,00,00)));
HXLINE(  94)		Int _hx_tmp = this->path->__get(this->cur).StaticCast<  ::Node >()->hwys->indexOf(hwy,null());
HXDLIN(  94)		return (_hx_tmp != (int)-1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,on,return )

void Player_obj::go(Int n){
            	HX_STACK_FRAME("Player","go",0xa27fc8f5,"Player.go","Player.hx",97,0xa27fc9dd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(n,"n")
HXLINE(  98)		::haxe::Log_obj::trace(HX_("go",28,5a,00,00),hx::SourceInfo(HX_("Player.hx",dd,c9,7f,a2),98,HX_("Player",81,5f,4d,6c),HX_("go",28,5a,00,00)));
HXLINE(  99)		Int _hx_tmp;
HXDLIN(  99)		if (((this->cur + n) >= this->path->length)) {
HXLINE(  99)			_hx_tmp = (this->path->length - (int)1);
            		}
            		else {
HXLINE(  99)			_hx_tmp = (this->cur + n);
            		}
HXDLIN(  99)		this->setCur(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,go,(void))

::String Player_obj::getUser(){
            	HX_STACK_FRAME("Player","getUser",0x4a2b0c14,"Player.getUser","Player.hx",103,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE( 103)		return this->user;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getUser,return )

::String Player_obj::getColor(){
            	HX_STACK_FRAME("Player","getColor",0x3ba9877a,"Player.getColor","Player.hx",107,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE( 107)		return this->color;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getColor,return )

void Player_obj::setColor(::String c){
            	HX_STACK_FRAME("Player","setColor",0xea06e0ee,"Player.setColor","Player.hx",110,0xa27fc9dd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(c,"c")
HXLINE( 111)		::haxe::Log_obj::trace((((HX_("",00,00,00,00) + this->user) + HX_(".color <- ",64,6b,4a,93)) + c),hx::SourceInfo(HX_("Player.hx",dd,c9,7f,a2),111,HX_("Player",81,5f,4d,6c),HX_("setColor",61,da,90,58)));
HXLINE( 112)		this->color = c;
HXLINE( 113)		this->broadcastColor();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,setColor,(void))

void Player_obj::informColors(){
            	HX_STACK_FRAME("Player","informColors",0xaf14c346,"Player.informColors","Player.hx",117,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE( 117)		HX_VARI(  ::Dynamic,tmp) = this->g->players->iterator();
HXDLIN( 117)		while(true){
HXLINE( 117)			Bool _hx_tmp = !(( (Bool)( ::Dynamic(tmp->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN( 117)			if (_hx_tmp) {
HXLINE( 117)				goto _hx_goto_1;
            			}
HXDLIN( 117)			HX_VARI(  ::Player,p) = ( ( ::Player)( ::Dynamic(tmp->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE( 119)			::String _hx_tmp1 = p->getUser();
HXLINE( 120)			::String _hx_tmp2 = p->getColor();
HXLINE( 118)			HX_VARI( ::cpp::VirtualArray,t) = ::cpp::VirtualArray_obj::__new(3)->init(0,HX_("color",63,71,5c,4a))->init(1,_hx_tmp1)->init(2,_hx_tmp2);
HXDLIN( 118)			HX_VARI(  ::haxe::Serializer,serial) =  ::haxe::Serializer_obj::__new();
HXDLIN( 118)			{
HXLINE( 118)				HX_VARI( Int,_g) = (int)0;
HXDLIN( 118)				while((_g < t->get_length())){
HXLINE( 118)					HX_VARI(  ::Dynamic,token) = t->__get(_g);
HXDLIN( 118)					++_g;
HXDLIN( 118)					serial->serialize(token);
            				}
            			}
HXDLIN( 118)			::String _hx_tmp3 = serial->toString();
HXDLIN( 118)			this->g->out->push( ::Dynamic(hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("body",a2,7a,1b,41),_hx_tmp3)
            				->setFixed(1,HX_("sender",b5,c7,84,6b),this->socket)));
            		}
            		_hx_goto_1:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,informColors,(void))

void Player_obj::informLocs(){
            	HX_STACK_FRAME("Player","informLocs",0x3e09e809,"Player.informLocs","Player.hx",125,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE( 125)		HX_VARI(  ::Dynamic,tmp) = this->g->players->iterator();
HXDLIN( 125)		while(true){
HXLINE( 125)			Bool _hx_tmp = !(( (Bool)( ::Dynamic(tmp->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN( 125)			if (_hx_tmp) {
HXLINE( 125)				goto _hx_goto_3;
            			}
HXDLIN( 125)			HX_VARI(  ::Player,p) = ( ( ::Player)( ::Dynamic(tmp->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE( 127)			::String _hx_tmp1 = p->getUser();
HXLINE( 128)			::String _hx_tmp2 = p->getLoc();
HXLINE( 126)			HX_VARI( ::cpp::VirtualArray,t) = ::cpp::VirtualArray_obj::__new(3)->init(0,HX_("loc",80,54,52,00))->init(1,_hx_tmp1)->init(2,_hx_tmp2);
HXDLIN( 126)			HX_VARI(  ::haxe::Serializer,serial) =  ::haxe::Serializer_obj::__new();
HXDLIN( 126)			{
HXLINE( 126)				HX_VARI( Int,_g) = (int)0;
HXDLIN( 126)				while((_g < t->get_length())){
HXLINE( 126)					HX_VARI(  ::Dynamic,token) = t->__get(_g);
HXDLIN( 126)					++_g;
HXDLIN( 126)					serial->serialize(token);
            				}
            			}
HXDLIN( 126)			::String _hx_tmp3 = serial->toString();
HXDLIN( 126)			this->g->out->push( ::Dynamic(hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("body",a2,7a,1b,41),_hx_tmp3)
            				->setFixed(1,HX_("sender",b5,c7,84,6b),this->socket)));
            		}
            		_hx_goto_3:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,informLocs,(void))

void Player_obj::informDests(){
            	HX_STACK_FRAME("Player","informDests",0x68dc7efb,"Player.informDests","Player.hx",133,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE( 133)		HX_VARI(  ::Dynamic,tmp) = this->g->players->iterator();
HXDLIN( 133)		while(true){
HXLINE( 133)			Bool _hx_tmp = !(( (Bool)( ::Dynamic(tmp->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN( 133)			if (_hx_tmp) {
HXLINE( 133)				goto _hx_goto_5;
            			}
HXDLIN( 133)			HX_VARI(  ::Player,p) = ( ( ::Player)( ::Dynamic(tmp->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE( 135)			::String _hx_tmp1 = p->getUser();
HXLINE( 136)			::String _hx_tmp2 = p->getDest();
HXLINE( 134)			HX_VARI( ::cpp::VirtualArray,t) = ::cpp::VirtualArray_obj::__new(3)->init(0,HX_("dest",62,5e,66,42))->init(1,_hx_tmp1)->init(2,_hx_tmp2);
HXDLIN( 134)			HX_VARI(  ::haxe::Serializer,serial) =  ::haxe::Serializer_obj::__new();
HXDLIN( 134)			{
HXLINE( 134)				HX_VARI( Int,_g) = (int)0;
HXDLIN( 134)				while((_g < t->get_length())){
HXLINE( 134)					HX_VARI(  ::Dynamic,token) = t->__get(_g);
HXDLIN( 134)					++_g;
HXDLIN( 134)					serial->serialize(token);
            				}
            			}
HXDLIN( 134)			::String _hx_tmp3 = serial->toString();
HXDLIN( 134)			this->g->out->push( ::Dynamic(hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("body",a2,7a,1b,41),_hx_tmp3)
            				->setFixed(1,HX_("sender",b5,c7,84,6b),this->socket)));
            		}
            		_hx_goto_5:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,informDests,(void))

void Player_obj::broadcastColor(){
            	HX_STACK_FRAME("Player","broadcastColor",0xac0da8ef,"Player.broadcastColor","Player.hx",141,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE( 141)		HX_VARI( Int,_g) = (int)0;
HXDLIN( 141)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->g->sockets;
HXDLIN( 141)		while((_g < _g1->length)){
HXLINE( 141)			HX_VARI(  ::sys::net::Socket,s) = _g1->__get(_g).StaticCast<  ::sys::net::Socket >();
HXDLIN( 141)			++_g;
HXLINE( 142)			{
HXLINE( 144)				::String _hx_tmp = this->getColor();
HXLINE( 142)				HX_VARI( ::cpp::VirtualArray,t) = ::cpp::VirtualArray_obj::__new(3)->init(0,HX_("color",63,71,5c,4a))->init(1,this->user)->init(2,_hx_tmp);
HXDLIN( 142)				HX_VARI(  ::haxe::Serializer,serial) =  ::haxe::Serializer_obj::__new();
HXDLIN( 142)				{
HXLINE( 142)					HX_VARI_NAME( Int,_g2,"_g") = (int)0;
HXDLIN( 142)					while((_g2 < t->get_length())){
HXLINE( 142)						HX_VARI(  ::Dynamic,token) = t->__get(_g2);
HXDLIN( 142)						++_g2;
HXDLIN( 142)						serial->serialize(token);
            					}
            				}
HXDLIN( 142)				::String _hx_tmp1 = serial->toString();
HXDLIN( 142)				this->g->out->push( ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("body",a2,7a,1b,41),_hx_tmp1)
            					->setFixed(1,HX_("sender",b5,c7,84,6b),s)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,broadcastColor,(void))

void Player_obj::broadcastLoc(){
            	HX_STACK_FRAME("Player","broadcastLoc",0xb0a2510c,"Player.broadcastLoc","Player.hx",149,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE( 149)		HX_VARI( Int,_g) = (int)0;
HXDLIN( 149)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->g->sockets;
HXDLIN( 149)		while((_g < _g1->length)){
HXLINE( 149)			HX_VARI(  ::sys::net::Socket,s) = _g1->__get(_g).StaticCast<  ::sys::net::Socket >();
HXDLIN( 149)			++_g;
HXLINE( 150)			{
HXLINE( 152)				::String _hx_tmp = this->getLoc();
HXLINE( 150)				HX_VARI( ::cpp::VirtualArray,t) = ::cpp::VirtualArray_obj::__new(3)->init(0,HX_("loc",80,54,52,00))->init(1,this->user)->init(2,_hx_tmp);
HXDLIN( 150)				HX_VARI(  ::haxe::Serializer,serial) =  ::haxe::Serializer_obj::__new();
HXDLIN( 150)				{
HXLINE( 150)					HX_VARI_NAME( Int,_g2,"_g") = (int)0;
HXDLIN( 150)					while((_g2 < t->get_length())){
HXLINE( 150)						HX_VARI(  ::Dynamic,token) = t->__get(_g2);
HXDLIN( 150)						++_g2;
HXDLIN( 150)						serial->serialize(token);
            					}
            				}
HXDLIN( 150)				::String _hx_tmp1 = serial->toString();
HXDLIN( 150)				this->g->out->push( ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("body",a2,7a,1b,41),_hx_tmp1)
            					->setFixed(1,HX_("sender",b5,c7,84,6b),s)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,broadcastLoc,(void))

void Player_obj::broadcastDest(){
            	HX_STACK_FRAME("Player","broadcastDest",0xd8135c56,"Player.broadcastDest","Player.hx",157,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE( 157)		HX_VARI( Int,_g) = (int)0;
HXDLIN( 157)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->g->sockets;
HXDLIN( 157)		while((_g < _g1->length)){
HXLINE( 157)			HX_VARI(  ::sys::net::Socket,s) = _g1->__get(_g).StaticCast<  ::sys::net::Socket >();
HXDLIN( 157)			++_g;
HXLINE( 158)			{
HXLINE( 160)				::String _hx_tmp = this->getDest();
HXLINE( 158)				HX_VARI( ::cpp::VirtualArray,t) = ::cpp::VirtualArray_obj::__new(3)->init(0,HX_("dest",62,5e,66,42))->init(1,this->user)->init(2,_hx_tmp);
HXDLIN( 158)				HX_VARI(  ::haxe::Serializer,serial) =  ::haxe::Serializer_obj::__new();
HXDLIN( 158)				{
HXLINE( 158)					HX_VARI_NAME( Int,_g2,"_g") = (int)0;
HXDLIN( 158)					while((_g2 < t->get_length())){
HXLINE( 158)						HX_VARI(  ::Dynamic,token) = t->__get(_g2);
HXDLIN( 158)						++_g2;
HXDLIN( 158)						serial->serialize(token);
            					}
            				}
HXDLIN( 158)				::String _hx_tmp1 = serial->toString();
HXDLIN( 158)				this->g->out->push( ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("body",a2,7a,1b,41),_hx_tmp1)
            					->setFixed(1,HX_("sender",b5,c7,84,6b),s)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,broadcastDest,(void))

::String Player_obj::getLoc(){
            	HX_STACK_FRAME("Player","getLoc",0x0e14e6d7,"Player.getLoc","Player.hx",165,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE( 165)		return this->path->__get(this->cur).StaticCast<  ::Node >()->id;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getLoc,return )

::String Player_obj::getDest(){
            	HX_STACK_FRAME("Player","getDest",0x3ee3d82b,"Player.getDest","Player.hx",169,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE( 169)		return this->path->__get((this->path->length - (int)1)).StaticCast<  ::Node >()->id;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getDest,return )

void Player_obj::to(::String city){
            	HX_STACK_FRAME("Player","to",0xa27fd448,"Player.to","Player.hx",172,0xa27fc9dd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(city,"city")
HXLINE( 173)		::haxe::Log_obj::trace(HX_("to",7b,65,00,00),hx::SourceInfo(HX_("Player.hx",dd,c9,7f,a2),173,HX_("Player",81,5f,4d,6c),HX_("to",7b,65,00,00)));
HXLINE( 174)		 ::Node _hx_tmp = this->g->t->map->get(city).StaticCast<  ::Node >();
HXDLIN( 174)		::String key = this->getDest();
HXDLIN( 174)		 ::Node _hx_tmp1 = this->g->t->map->get(key).StaticCast<  ::Node >();
HXDLIN( 174)		this->refine(_hx_tmp,_hx_tmp1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,to,(void))

void Player_obj::refine( ::Node start, ::Node end){
            	HX_STACK_FRAME("Player","refine",0x6ad6e2ba,"Player.refine","Player.hx",177,0xa27fc9dd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(start,"start")
            	HX_STACK_ARG(end,"end")
HXLINE( 178)		::haxe::Log_obj::trace(HX_("refine",6d,89,e3,ff),hx::SourceInfo(HX_("Player.hx",dd,c9,7f,a2),178,HX_("Player",81,5f,4d,6c),HX_("refine",6d,89,e3,ff)));
HXLINE( 180)		this->path = this->g->t->aStar->find(start,end);
HXLINE( 181)		this->setCur((int)0);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Player_obj,refine,(void))

void Player_obj::setCur(Int n){
            	HX_STACK_FRAME("Player","setCur",0xda566c4b,"Player.setCur","Player.hx",184,0xa27fc9dd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(n,"n")
HXLINE( 185)		this->cur = n;
HXLINE( 186)		::String _hx_tmp = ((HX_("",00,00,00,00) + this->user) + HX_(".loc <- ",81,98,bb,49));
HXDLIN( 186)		::String _hx_tmp1 = this->getLoc();
HXDLIN( 186)		::haxe::Log_obj::trace((_hx_tmp + _hx_tmp1),hx::SourceInfo(HX_("Player.hx",dd,c9,7f,a2),186,HX_("Player",81,5f,4d,6c),HX_("setCur",fe,12,63,6f)));
HXLINE( 187)		this->broadcastLoc();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,setCur,(void))

void Player_obj::increaseExp(){
            	HX_STACK_FRAME("Player","increaseExp",0xc2729d8e,"Player.increaseExp","Player.hx",190,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE( 191)		::haxe::Log_obj::trace(HX_("increaseExp",fb,cd,ad,31),hx::SourceInfo(HX_("Player.hx",dd,c9,7f,a2),191,HX_("Player",81,5f,4d,6c),HX_("increaseExp",fb,cd,ad,31)));
HXLINE( 192)		Float _hx_tmp = ::Math_obj::pow(((Float)1.1),this->level);
HXDLIN( 192)		Int _hx_tmp1 = ::Std_obj::_hx_int((_hx_tmp + ((Float)1.95)));
HXDLIN( 192)		this->req = (_hx_tmp1 * this->level);
HXLINE( 193)		Int _hx_tmp2 = (this->exp + (int)1);
HXDLIN( 193)		this->exp = hx::Mod(_hx_tmp2,this->req);
HXLINE( 196)		Bool _hx_tmp3 = (this->exp == (int)0);
HXDLIN( 196)		if (_hx_tmp3) {
HXLINE( 196)			this->level++;
            		}
HXLINE( 198)		{
HXLINE( 198)			HX_VARI( ::cpp::VirtualArray,t) = ::cpp::VirtualArray_obj::__new(4)->init(0,HX_("exp",9d,0c,4d,00))->init(1,this->req)->init(2,this->exp)->init(3,this->level);
HXDLIN( 198)			HX_VARI(  ::haxe::Serializer,serial) =  ::haxe::Serializer_obj::__new();
HXDLIN( 198)			{
HXLINE( 198)				HX_VARI( Int,_g) = (int)0;
HXDLIN( 198)				while((_g < t->get_length())){
HXLINE( 198)					HX_VARI(  ::Dynamic,token) = t->__get(_g);
HXDLIN( 198)					++_g;
HXDLIN( 198)					serial->serialize(token);
            				}
            			}
HXDLIN( 198)			::String _hx_tmp4 = serial->toString();
HXDLIN( 198)			this->g->out->push( ::Dynamic(hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("body",a2,7a,1b,41),_hx_tmp4)
            				->setFixed(1,HX_("sender",b5,c7,84,6b),this->socket)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,increaseExp,(void))

void Player_obj::rollDie(){
            	HX_STACK_FRAME("Player","rollDie",0x87045fd6,"Player.rollDie","Player.hx",201,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE( 202)		this->side = ::Std_obj::random((int)6);
HXLINE( 203)		::String _hx_tmp = (((HX_("",00,00,00,00) + this->user) + HX_(".side <- ",b4,05,d5,df)) + this->side);
HXDLIN( 203)		::haxe::Log_obj::trace(_hx_tmp,hx::SourceInfo(HX_("Player.hx",dd,c9,7f,a2),203,HX_("Player",81,5f,4d,6c),HX_("rollDie",c3,95,09,5d)));
HXLINE( 204)		{
HXLINE( 204)			HX_VARI( ::cpp::VirtualArray,t) = ::cpp::VirtualArray_obj::__new(2)->init(0,HX_("roll",7d,eb,ae,4b))->init(1,this->side);
HXDLIN( 204)			HX_VARI(  ::haxe::Serializer,serial) =  ::haxe::Serializer_obj::__new();
HXDLIN( 204)			{
HXLINE( 204)				HX_VARI( Int,_g) = (int)0;
HXDLIN( 204)				while((_g < t->get_length())){
HXLINE( 204)					HX_VARI(  ::Dynamic,token) = t->__get(_g);
HXDLIN( 204)					++_g;
HXDLIN( 204)					serial->serialize(token);
            				}
            			}
HXDLIN( 204)			::String _hx_tmp1 = serial->toString();
HXDLIN( 204)			this->g->out->push( ::Dynamic(hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("body",a2,7a,1b,41),_hx_tmp1)
            				->setFixed(1,HX_("sender",b5,c7,84,6b),this->socket)));
            		}
HXLINE( 205)		this->rollerAnim = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,rollDie,(void))

void Player_obj::loop(Float time){
            	HX_STACK_FRAME("Player","loop",0x1c0a2271,"Player.loop","Player.hx",209,0xa27fc9dd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(time,"time")
HXLINE( 209)		Bool _hx_tmp;
HXDLIN( 209)		if (this->rollerAnim) {
HXLINE( 209)			_hx_tmp = (this->rollerFuture < time);
            		}
            		else {
HXLINE( 209)			_hx_tmp = false;
            		}
HXDLIN( 209)		if (_hx_tmp) {
HXLINE( 211)			Bool _hx_tmp1 = (this->roller == this->side);
HXDLIN( 211)			if (_hx_tmp1) {
HXLINE( 213)				this->rollerAnim = false;
HXLINE( 215)				Bool _hx_tmp2 = !(this->onGoal());
HXDLIN( 215)				if (_hx_tmp2) {
HXLINE( 216)					 ::Dynamic _hx_tmp3 = this->card->i->__get(this->side);
HXDLIN( 216)					_hx_tmp3(hx::ObjectPtr<OBJ_>(this));
HXLINE( 218)					Bool _hx_tmp4 = this->onGoal();
HXDLIN( 218)					if (_hx_tmp4) {
HXLINE( 219)						{
HXLINE( 219)							HX_VARI( ::cpp::VirtualArray,t) = ::cpp::VirtualArray_obj::__new(1)->init(0,HX_("arrived",6d,8c,c0,3f));
HXDLIN( 219)							HX_VARI(  ::haxe::Serializer,serial) =  ::haxe::Serializer_obj::__new();
HXDLIN( 219)							{
HXLINE( 219)								HX_VARI( Int,_g) = (int)0;
HXDLIN( 219)								while((_g < t->get_length())){
HXLINE( 219)									HX_VARI(  ::Dynamic,token) = t->__get(_g);
HXDLIN( 219)									++_g;
HXDLIN( 219)									serial->serialize(token);
            								}
            							}
HXDLIN( 219)							::String _hx_tmp5 = serial->toString();
HXDLIN( 219)							this->g->out->push( ::Dynamic(hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("body",a2,7a,1b,41),_hx_tmp5)
            								->setFixed(1,HX_("sender",b5,c7,84,6b),this->socket)));
            						}
HXLINE( 220)						this->increaseExp();
            					}
            				}
            				else {
HXLINE( 222)					this->reset();
            				}
            			}
            			else {
HXLINE( 224)				Int _hx_tmp6 = (this->roller + (int)1);
HXDLIN( 224)				this->roller = hx::Mod(_hx_tmp6,(int)6);
            			}
HXLINE( 226)			this->rollerFuture = (time + ((Float)0.125));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,loop,(void))


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(g,"g");
	HX_MARK_MEMBER_NAME(user,"user");
	HX_MARK_MEMBER_NAME(pass,"pass");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(cur,"cur");
	HX_MARK_MEMBER_NAME(card,"card");
	HX_MARK_MEMBER_NAME(cards,"cards");
	HX_MARK_MEMBER_NAME(level,"level");
	HX_MARK_MEMBER_NAME(req,"req");
	HX_MARK_MEMBER_NAME(exp,"exp");
	HX_MARK_MEMBER_NAME(socket,"socket");
	HX_MARK_MEMBER_NAME(side,"side");
	HX_MARK_MEMBER_NAME(roller,"roller");
	HX_MARK_MEMBER_NAME(rollerFuture,"rollerFuture");
	HX_MARK_MEMBER_NAME(rollerAnim,"rollerAnim");
	HX_MARK_MEMBER_NAME(roygbiv,"roygbiv");
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(g,"g");
	HX_VISIT_MEMBER_NAME(user,"user");
	HX_VISIT_MEMBER_NAME(pass,"pass");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(cur,"cur");
	HX_VISIT_MEMBER_NAME(card,"card");
	HX_VISIT_MEMBER_NAME(cards,"cards");
	HX_VISIT_MEMBER_NAME(level,"level");
	HX_VISIT_MEMBER_NAME(req,"req");
	HX_VISIT_MEMBER_NAME(exp,"exp");
	HX_VISIT_MEMBER_NAME(socket,"socket");
	HX_VISIT_MEMBER_NAME(side,"side");
	HX_VISIT_MEMBER_NAME(roller,"roller");
	HX_VISIT_MEMBER_NAME(rollerFuture,"rollerFuture");
	HX_VISIT_MEMBER_NAME(rollerAnim,"rollerAnim");
	HX_VISIT_MEMBER_NAME(roygbiv,"roygbiv");
}

hx::Val Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { return hx::Val( g); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return hx::Val( on_dyn()); }
		if (HX_FIELD_EQ(inName,"go") ) { return hx::Val( go_dyn()); }
		if (HX_FIELD_EQ(inName,"to") ) { return hx::Val( to_dyn()); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cur") ) { return hx::Val( cur); }
		if (HX_FIELD_EQ(inName,"req") ) { return hx::Val( req); }
		if (HX_FIELD_EQ(inName,"exp") ) { return hx::Val( exp); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"user") ) { return hx::Val( user); }
		if (HX_FIELD_EQ(inName,"pass") ) { return hx::Val( pass); }
		if (HX_FIELD_EQ(inName,"path") ) { return hx::Val( path); }
		if (HX_FIELD_EQ(inName,"card") ) { return hx::Val( card); }
		if (HX_FIELD_EQ(inName,"side") ) { return hx::Val( side); }
		if (HX_FIELD_EQ(inName,"save") ) { return hx::Val( save_dyn()); }
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn()); }
		if (HX_FIELD_EQ(inName,"loop") ) { return hx::Val( loop_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return hx::Val( color); }
		if (HX_FIELD_EQ(inName,"cards") ) { return hx::Val( cards); }
		if (HX_FIELD_EQ(inName,"level") ) { return hx::Val( level); }
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"socket") ) { return hx::Val( socket); }
		if (HX_FIELD_EQ(inName,"roller") ) { return hx::Val( roller); }
		if (HX_FIELD_EQ(inName,"onGoal") ) { return hx::Val( onGoal_dyn()); }
		if (HX_FIELD_EQ(inName,"getLoc") ) { return hx::Val( getLoc_dyn()); }
		if (HX_FIELD_EQ(inName,"refine") ) { return hx::Val( refine_dyn()); }
		if (HX_FIELD_EQ(inName,"setCur") ) { return hx::Val( setCur_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"roygbiv") ) { return hx::Val( roygbiv); }
		if (HX_FIELD_EQ(inName,"addCard") ) { return hx::Val( addCard_dyn()); }
		if (HX_FIELD_EQ(inName,"getUser") ) { return hx::Val( getUser_dyn()); }
		if (HX_FIELD_EQ(inName,"getDest") ) { return hx::Val( getDest_dyn()); }
		if (HX_FIELD_EQ(inName,"rollDie") ) { return hx::Val( rollDie_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getColor") ) { return hx::Val( getColor_dyn()); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return hx::Val( setColor_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"equipCard") ) { return hx::Val( equipCard_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rollerAnim") ) { return hx::Val( rollerAnim); }
		if (HX_FIELD_EQ(inName,"informLocs") ) { return hx::Val( informLocs_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"informDests") ) { return hx::Val( informDests_dyn()); }
		if (HX_FIELD_EQ(inName,"increaseExp") ) { return hx::Val( increaseExp_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rollerFuture") ) { return hx::Val( rollerFuture); }
		if (HX_FIELD_EQ(inName,"informColors") ) { return hx::Val( informColors_dyn()); }
		if (HX_FIELD_EQ(inName,"broadcastLoc") ) { return hx::Val( broadcastLoc_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"broadcastDest") ) { return hx::Val( broadcastDest_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"broadcastColor") ) { return hx::Val( broadcastColor_dyn()); }
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
		if (HX_FIELD_EQ(inName,"cur") ) { cur=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"req") ) { req=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exp") ) { exp=inValue.Cast< Int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"user") ) { user=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pass") ) { pass=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"card") ) { card=inValue.Cast<  ::Card >(); return inValue; }
		if (HX_FIELD_EQ(inName,"side") ) { side=inValue.Cast< Int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cards") ) { cards=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< Int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"socket") ) { socket=inValue.Cast<  ::sys::net::Socket >(); return inValue; }
		if (HX_FIELD_EQ(inName,"roller") ) { roller=inValue.Cast< Int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"roygbiv") ) { roygbiv=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rollerAnim") ) { rollerAnim=inValue.Cast< Bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"rollerFuture") ) { rollerFuture=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("g","\x67","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("user","\x4b","\x92","\xad","\x4d"));
	outFields->push(HX_HCSTRING("pass","\xd1","\xe4","\x51","\x4a"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
	outFields->push(HX_HCSTRING("cur","\x80","\x85","\x4b","\x00"));
	outFields->push(HX_HCSTRING("card","\xd0","\x1d","\xba","\x41"));
	outFields->push(HX_HCSTRING("cards","\xa3","\xf8","\x1f","\x41"));
	outFields->push(HX_HCSTRING("level","\x84","\x15","\x63","\x72"));
	outFields->push(HX_HCSTRING("req","\x5e","\xd9","\x56","\x00"));
	outFields->push(HX_HCSTRING("exp","\x9d","\x0c","\x4d","\x00"));
	outFields->push(HX_HCSTRING("socket","\xb3","\x8b","\x46","\x26"));
	outFields->push(HX_HCSTRING("side","\x97","\x8d","\x53","\x4c"));
	outFields->push(HX_HCSTRING("roller","\x2a","\xdd","\xde","\xc5"));
	outFields->push(HX_HCSTRING("rollerFuture","\x0d","\x25","\x4b","\x02"));
	outFields->push(HX_HCSTRING("rollerAnim","\x5b","\x6c","\x30","\xf5"));
	outFields->push(HX_HCSTRING("roygbiv","\xe4","\xd2","\x07","\xd6"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Player_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::Globals*/ ,(int)offsetof(Player_obj,g),HX_HCSTRING("g","\x67","\x00","\x00","\x00")},
	{hx::fsString,(int)offsetof(Player_obj,user),HX_HCSTRING("user","\x4b","\x92","\xad","\x4d")},
	{hx::fsString,(int)offsetof(Player_obj,pass),HX_HCSTRING("pass","\xd1","\xe4","\x51","\x4a")},
	{hx::fsString,(int)offsetof(Player_obj,color),HX_HCSTRING("color","\x63","\x71","\x5c","\x4a")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Player_obj,path),HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")},
	{hx::fsInt,(int)offsetof(Player_obj,cur),HX_HCSTRING("cur","\x80","\x85","\x4b","\x00")},
	{hx::fsObject /*::Card*/ ,(int)offsetof(Player_obj,card),HX_HCSTRING("card","\xd0","\x1d","\xba","\x41")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Player_obj,cards),HX_HCSTRING("cards","\xa3","\xf8","\x1f","\x41")},
	{hx::fsInt,(int)offsetof(Player_obj,level),HX_HCSTRING("level","\x84","\x15","\x63","\x72")},
	{hx::fsInt,(int)offsetof(Player_obj,req),HX_HCSTRING("req","\x5e","\xd9","\x56","\x00")},
	{hx::fsInt,(int)offsetof(Player_obj,exp),HX_HCSTRING("exp","\x9d","\x0c","\x4d","\x00")},
	{hx::fsObject /*::sys::net::Socket*/ ,(int)offsetof(Player_obj,socket),HX_HCSTRING("socket","\xb3","\x8b","\x46","\x26")},
	{hx::fsInt,(int)offsetof(Player_obj,side),HX_HCSTRING("side","\x97","\x8d","\x53","\x4c")},
	{hx::fsInt,(int)offsetof(Player_obj,roller),HX_HCSTRING("roller","\x2a","\xdd","\xde","\xc5")},
	{hx::fsFloat,(int)offsetof(Player_obj,rollerFuture),HX_HCSTRING("rollerFuture","\x0d","\x25","\x4b","\x02")},
	{hx::fsBool,(int)offsetof(Player_obj,rollerAnim),HX_HCSTRING("rollerAnim","\x5b","\x6c","\x30","\xf5")},
	{hx::fsString,(int)offsetof(Player_obj,roygbiv),HX_HCSTRING("roygbiv","\xe4","\xd2","\x07","\xd6")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Player_obj_sStaticStorageInfo = 0;
#endif

static ::String Player_obj_sMemberFields[] = {
	HX_HCSTRING("g","\x67","\x00","\x00","\x00"),
	HX_HCSTRING("user","\x4b","\x92","\xad","\x4d"),
	HX_HCSTRING("pass","\xd1","\xe4","\x51","\x4a"),
	HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"),
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	HX_HCSTRING("cur","\x80","\x85","\x4b","\x00"),
	HX_HCSTRING("card","\xd0","\x1d","\xba","\x41"),
	HX_HCSTRING("cards","\xa3","\xf8","\x1f","\x41"),
	HX_HCSTRING("level","\x84","\x15","\x63","\x72"),
	HX_HCSTRING("req","\x5e","\xd9","\x56","\x00"),
	HX_HCSTRING("exp","\x9d","\x0c","\x4d","\x00"),
	HX_HCSTRING("socket","\xb3","\x8b","\x46","\x26"),
	HX_HCSTRING("side","\x97","\x8d","\x53","\x4c"),
	HX_HCSTRING("roller","\x2a","\xdd","\xde","\xc5"),
	HX_HCSTRING("rollerFuture","\x0d","\x25","\x4b","\x02"),
	HX_HCSTRING("rollerAnim","\x5b","\x6c","\x30","\xf5"),
	HX_HCSTRING("roygbiv","\xe4","\xd2","\x07","\xd6"),
	HX_HCSTRING("onGoal","\xd2","\x91","\xf3","\xe6"),
	HX_HCSTRING("addCard","\x91","\x60","\xf7","\x7d"),
	HX_HCSTRING("equipCard","\xa0","\x38","\xbf","\x1e"),
	HX_HCSTRING("save","\x3d","\x8b","\x4d","\x4c"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("on","\x1f","\x61","\x00","\x00"),
	HX_HCSTRING("go","\x28","\x5a","\x00","\x00"),
	HX_HCSTRING("getUser","\x01","\x42","\x30","\x20"),
	HX_HCSTRING("getColor","\xed","\x80","\x33","\xaa"),
	HX_HCSTRING("setColor","\x61","\xda","\x90","\x58"),
	HX_HCSTRING("informColors","\x39","\xf2","\xa3","\x93"),
	HX_HCSTRING("informLocs","\x3c","\x64","\x1b","\xde"),
	HX_HCSTRING("informDests","\x68","\xaf","\x17","\xd8"),
	HX_HCSTRING("broadcastColor","\xa2","\xba","\xfc","\x35"),
	HX_HCSTRING("broadcastLoc","\xff","\x7f","\x31","\x95"),
	HX_HCSTRING("broadcastDest","\x03","\x42","\xcd","\xf0"),
	HX_HCSTRING("getLoc","\x8a","\x8d","\x21","\xa3"),
	HX_HCSTRING("getDest","\x18","\x0e","\xe9","\x14"),
	HX_HCSTRING("to","\x7b","\x65","\x00","\x00"),
	HX_HCSTRING("refine","\x6d","\x89","\xe3","\xff"),
	HX_HCSTRING("setCur","\xfe","\x12","\x63","\x6f"),
	HX_HCSTRING("increaseExp","\xfb","\xcd","\xad","\x31"),
	HX_HCSTRING("rollDie","\xc3","\x95","\x09","\x5d"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
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

