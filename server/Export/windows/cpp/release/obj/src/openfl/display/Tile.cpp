// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_openfl_display_Tile
#include <openfl/display/Tile.h>
#endif
#ifndef INCLUDED_openfl_display_Tileset
#include <openfl/display/Tileset.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

namespace openfl{
namespace display{

void Tile_obj::__construct(hx::Null< Int >  __o_id,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_scaleX,hx::Null< Float >  __o_scaleY,hx::Null< Float >  __o_rotation){
Int id = __o_id.Default(0);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float scaleX = __o_scaleX.Default(1);
Float scaleY = __o_scaleY.Default(1);
Float rotation = __o_rotation.Default(0);
            	HX_STACK_FRAME("openfl.display.Tile","new",0xe2a1098a,"openfl.display.Tile.new","openfl/display/Tile.hx",33,0xb47c9064)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
            	HX_STACK_ARG(scaleX,"scaleX")
            	HX_STACK_ARG(scaleY,"scaleY")
            	HX_STACK_ARG(rotation,"rotation")
HXLINE(  35)		this->set_id(id);
HXLINE(  37)		this->set_matrix( ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null()));
HXLINE(  38)		if ((x != (int)0)) {
HXLINE(  38)			this->set_x(x);
            		}
HXLINE(  39)		if ((y != (int)0)) {
HXLINE(  39)			this->set_y(y);
            		}
HXLINE(  40)		if ((scaleX != (int)1)) {
HXLINE(  40)			this->set_scaleX(scaleX);
            		}
HXLINE(  41)		if ((scaleY != (int)1)) {
HXLINE(  41)			this->set_scaleY(scaleY);
            		}
HXLINE(  42)		if ((rotation != (int)0)) {
HXLINE(  42)			this->set_rotation(rotation);
            		}
HXLINE(  44)		this->set_alpha((int)1);
HXLINE(  45)		this->visible = true;
HXLINE(  47)		this->_hx___alphaDirty = true;
HXLINE(  48)		this->_hx___sourceDirty = true;
HXLINE(  49)		this->_hx___transformDirty = true;
HXLINE(  50)		this->_hx___transform = ::Array_obj< Float >::__new(0);
            	}

Dynamic Tile_obj::__CreateEmpty() { return new Tile_obj; }

hx::ObjectPtr< Tile_obj > Tile_obj::__new(hx::Null< Int >  __o_id,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_scaleX,hx::Null< Float >  __o_scaleY,hx::Null< Float >  __o_rotation)
{
	hx::ObjectPtr< Tile_obj > _hx_result = new Tile_obj();
	_hx_result->__construct(__o_id,__o_x,__o_y,__o_scaleX,__o_scaleY,__o_rotation);
	return _hx_result;
}

Dynamic Tile_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Tile_obj > _hx_result = new Tile_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

 ::openfl::display::Tile Tile_obj::clone(){
            	HX_STACK_FRAME("openfl.display.Tile","clone",0x43506b07,"openfl.display.Tile.clone","openfl/display/Tile.hx",55,0xb47c9064)
            	HX_STACK_THIS(this)
HXLINE(  57)		HX_VARI(  ::openfl::display::Tile,tile) =  ::openfl::display::Tile_obj::__new(this->id,null(),null(),null(),null(),null());
HXLINE(  58)		 ::openfl::geom::Matrix _hx_tmp = this->matrix->clone();
HXDLIN(  58)		tile->set_matrix(_hx_tmp);
HXLINE(  59)		tile->set_tileset(this->tileset);
HXLINE(  60)		return tile;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,clone,return )

Float Tile_obj::set_alpha(Float value){
            	HX_STACK_FRAME("openfl.display.Tile","set_alpha",0x7c94646b,"openfl.display.Tile.set_alpha","openfl/display/Tile.hx",72,0xb47c9064)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(  74)		this->_hx___alphaDirty = true;
HXLINE(  75)		return (this->alpha = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_alpha,return )

Int Tile_obj::set_id(Int value){
            	HX_STACK_FRAME("openfl.display.Tile","set_id",0x0437a4ae,"openfl.display.Tile.set_id","openfl/display/Tile.hx",80,0xb47c9064)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(  82)		this->_hx___sourceDirty = true;
HXLINE(  83)		return (this->id = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_id,return )

 ::openfl::geom::Matrix Tile_obj::set_matrix( ::openfl::geom::Matrix value){
            	HX_STACK_FRAME("openfl.display.Tile","set_matrix",0xfecfe494,"openfl.display.Tile.set_matrix","openfl/display/Tile.hx",88,0xb47c9064)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(  90)		this->_hx___rotation = null();
HXLINE(  91)		this->_hx___scaleX = null();
HXLINE(  92)		this->_hx___scaleY = null();
HXLINE(  93)		this->_hx___transformDirty = true;
HXLINE(  94)		return (this->matrix = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_matrix,return )

Float Tile_obj::get_rotation(){
            	HX_STACK_FRAME("openfl.display.Tile","get_rotation",0xca9b42dd,"openfl.display.Tile.get_rotation","openfl/display/Tile.hx",99,0xb47c9064)
            	HX_STACK_THIS(this)
HXLINE( 101)		Bool _hx_tmp = hx::IsNull( this->_hx___rotation );
HXDLIN( 101)		if (_hx_tmp) {
HXLINE( 103)			Bool _hx_tmp1;
HXDLIN( 103)			if ((this->matrix->b == (int)0)) {
HXLINE( 103)				_hx_tmp1 = (this->matrix->c == (int)0);
            			}
            			else {
HXLINE( 103)				_hx_tmp1 = false;
            			}
HXDLIN( 103)			if (_hx_tmp1) {
HXLINE( 105)				this->_hx___rotation = (int)0;
HXLINE( 106)				this->_hx___rotationSine = (int)0;
HXLINE( 107)				this->_hx___rotationCosine = (int)1;
            			}
            			else {
HXLINE( 111)				Float _hx_tmp2 = ::Math_obj::atan2(this->matrix->d,this->matrix->c);
HXDLIN( 111)				HX_VARI( Float,radians) = (_hx_tmp2 - ((Float)::Math_obj::PI / (Float)(int)2));
HXLINE( 113)				Float _hx_tmp3 = ((Float)(int)180 / (Float)::Math_obj::PI);
HXDLIN( 113)				this->_hx___rotation = (radians * _hx_tmp3);
HXLINE( 114)				this->_hx___rotationSine = ::Math_obj::sin(radians);
HXLINE( 115)				this->_hx___rotationCosine = ::Math_obj::cos(radians);
            			}
            		}
HXLINE( 121)		return this->_hx___rotation;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_rotation,return )

Float Tile_obj::set_rotation(Float value){
            	HX_STACK_FRAME("openfl.display.Tile","set_rotation",0xdf946651,"openfl.display.Tile.set_rotation","openfl/display/Tile.hx",126,0xb47c9064)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 128)		Bool _hx_tmp = hx::IsNotEq( value,this->_hx___rotation );
HXDLIN( 128)		if (_hx_tmp) {
HXLINE( 130)			this->_hx___rotation = value;
HXLINE( 131)			HX_VARI( Float,radians) = (value * ((Float)::Math_obj::PI / (Float)(int)180));
HXLINE( 132)			this->_hx___rotationSine = ::Math_obj::sin(radians);
HXLINE( 133)			this->_hx___rotationCosine = ::Math_obj::cos(radians);
HXLINE( 135)			HX_VARI_NAME( Float,_hx___scaleX,"__scaleX") = this->get_scaleX();
HXLINE( 136)			HX_VARI_NAME( Float,_hx___scaleY,"__scaleY") = this->get_scaleY();
HXLINE( 138)			this->matrix->a = (this->_hx___rotationCosine * _hx___scaleX);
HXLINE( 139)			this->matrix->b = (this->_hx___rotationSine * _hx___scaleX);
HXLINE( 140)			this->matrix->c = (-(this->_hx___rotationSine) * _hx___scaleY);
HXLINE( 141)			this->matrix->d = (this->_hx___rotationCosine * _hx___scaleY);
HXLINE( 143)			this->_hx___transformDirty = true;
            		}
HXLINE( 147)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_rotation,return )

Float Tile_obj::get_scaleX(){
            	HX_STACK_FRAME("openfl.display.Tile","get_scaleX",0x7baffa6d,"openfl.display.Tile.get_scaleX","openfl/display/Tile.hx",152,0xb47c9064)
            	HX_STACK_THIS(this)
HXLINE( 154)		Bool _hx_tmp = hx::IsNull( this->_hx___scaleX );
HXDLIN( 154)		if (_hx_tmp) {
HXLINE( 156)			Bool _hx_tmp1 = (this->matrix->b == (int)0);
HXDLIN( 156)			if (_hx_tmp1) {
HXLINE( 158)				this->_hx___scaleX = this->matrix->a;
            			}
            			else {
HXLINE( 162)				Float _hx_tmp2 = ((this->matrix->a * this->matrix->a) + (this->matrix->b * this->matrix->b));
HXDLIN( 162)				this->_hx___scaleX = ::Math_obj::sqrt(_hx_tmp2);
            			}
            		}
HXLINE( 168)		return this->_hx___scaleX;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_scaleX,return )

Float Tile_obj::set_scaleX(Float value){
            	HX_STACK_FRAME("openfl.display.Tile","set_scaleX",0x7f2d98e1,"openfl.display.Tile.set_scaleX","openfl/display/Tile.hx",173,0xb47c9064)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 175)		Bool _hx_tmp = hx::IsNotEq( this->_hx___scaleX,value );
HXDLIN( 175)		if (_hx_tmp) {
HXLINE( 177)			this->_hx___scaleX = value;
HXLINE( 179)			Bool _hx_tmp1 = (this->matrix->b == (int)0);
HXDLIN( 179)			if (_hx_tmp1) {
HXLINE( 181)				this->matrix->a = value;
            			}
            			else {
HXLINE( 185)				this->get_rotation();
HXLINE( 187)				HX_VARI( Float,a) = (this->_hx___rotationCosine * value);
HXLINE( 188)				HX_VARI( Float,b) = (this->_hx___rotationSine * value);
HXLINE( 190)				this->matrix->a = a;
HXLINE( 191)				this->matrix->b = b;
            			}
HXLINE( 195)			this->_hx___transformDirty = true;
            		}
HXLINE( 199)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_scaleX,return )

Float Tile_obj::get_scaleY(){
            	HX_STACK_FRAME("openfl.display.Tile","get_scaleY",0x7baffa6e,"openfl.display.Tile.get_scaleY","openfl/display/Tile.hx",204,0xb47c9064)
            	HX_STACK_THIS(this)
HXLINE( 206)		Bool _hx_tmp = hx::IsNull( this->_hx___scaleY );
HXDLIN( 206)		if (_hx_tmp) {
HXLINE( 208)			Bool _hx_tmp1 = (this->matrix->c == (int)0);
HXDLIN( 208)			if (_hx_tmp1) {
HXLINE( 210)				this->_hx___scaleY = this->matrix->d;
            			}
            			else {
HXLINE( 214)				Float _hx_tmp2 = ((this->matrix->c * this->matrix->c) + (this->matrix->d * this->matrix->d));
HXDLIN( 214)				this->_hx___scaleY = ::Math_obj::sqrt(_hx_tmp2);
            			}
            		}
HXLINE( 220)		return this->_hx___scaleY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_scaleY,return )

Float Tile_obj::set_scaleY(Float value){
            	HX_STACK_FRAME("openfl.display.Tile","set_scaleY",0x7f2d98e2,"openfl.display.Tile.set_scaleY","openfl/display/Tile.hx",225,0xb47c9064)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 227)		Bool _hx_tmp = hx::IsNotEq( this->_hx___scaleY,value );
HXDLIN( 227)		if (_hx_tmp) {
HXLINE( 229)			this->_hx___scaleY = value;
HXLINE( 231)			Bool _hx_tmp1 = (this->matrix->c == (int)0);
HXDLIN( 231)			if (_hx_tmp1) {
HXLINE( 233)				this->matrix->d = value;
            			}
            			else {
HXLINE( 237)				this->get_rotation();
HXLINE( 239)				HX_VARI( Float,c) = (-(this->_hx___rotationSine) * value);
HXLINE( 240)				HX_VARI( Float,d) = (this->_hx___rotationCosine * value);
HXLINE( 242)				this->matrix->c = c;
HXLINE( 243)				this->matrix->d = d;
            			}
HXLINE( 247)			this->_hx___transformDirty = true;
            		}
HXLINE( 251)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_scaleY,return )

 ::openfl::display::Tileset Tile_obj::set_tileset( ::openfl::display::Tileset value){
            	HX_STACK_FRAME("openfl.display.Tile","set_tileset",0xa9445b81,"openfl.display.Tile.set_tileset","openfl/display/Tile.hx",256,0xb47c9064)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 258)		this->_hx___sourceDirty = true;
HXLINE( 259)		return (this->tileset = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_tileset,return )

Float Tile_obj::get_x(){
            	HX_STACK_FRAME("openfl.display.Tile","get_x",0x8c4dfcf9,"openfl.display.Tile.get_x","openfl/display/Tile.hx",266,0xb47c9064)
            	HX_STACK_THIS(this)
HXLINE( 266)		return this->matrix->tx;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_x,return )

Float Tile_obj::get_y(){
            	HX_STACK_FRAME("openfl.display.Tile","get_y",0x8c4dfcfa,"openfl.display.Tile.get_y","openfl/display/Tile.hx",273,0xb47c9064)
            	HX_STACK_THIS(this)
HXLINE( 273)		return this->matrix->ty;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_y,return )

Float Tile_obj::set_x(Float value){
            	HX_STACK_FRAME("openfl.display.Tile","set_x",0x751cf305,"openfl.display.Tile.set_x","openfl/display/Tile.hx",278,0xb47c9064)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 280)		this->_hx___transformDirty = true;
HXLINE( 281)		return (this->matrix->tx = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_x,return )

Float Tile_obj::set_y(Float value){
            	HX_STACK_FRAME("openfl.display.Tile","set_y",0x751cf306,"openfl.display.Tile.set_y","openfl/display/Tile.hx",286,0xb47c9064)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 288)		this->_hx___transformDirty = true;
HXLINE( 289)		return (this->matrix->ty = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,set_y,return )


Tile_obj::Tile_obj()
{
}

void Tile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tile);
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(tileset,"tileset");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(_hx___alphaDirty,"__alphaDirty");
	HX_MARK_MEMBER_NAME(_hx___rotation,"__rotation");
	HX_MARK_MEMBER_NAME(_hx___rotationCosine,"__rotationCosine");
	HX_MARK_MEMBER_NAME(_hx___rotationSine,"__rotationSine");
	HX_MARK_MEMBER_NAME(_hx___scaleX,"__scaleX");
	HX_MARK_MEMBER_NAME(_hx___scaleY,"__scaleY");
	HX_MARK_MEMBER_NAME(_hx___sourceDirty,"__sourceDirty");
	HX_MARK_MEMBER_NAME(_hx___transform,"__transform");
	HX_MARK_MEMBER_NAME(_hx___transformDirty,"__transformDirty");
	HX_MARK_END_CLASS();
}

void Tile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(tileset,"tileset");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(_hx___alphaDirty,"__alphaDirty");
	HX_VISIT_MEMBER_NAME(_hx___rotation,"__rotation");
	HX_VISIT_MEMBER_NAME(_hx___rotationCosine,"__rotationCosine");
	HX_VISIT_MEMBER_NAME(_hx___rotationSine,"__rotationSine");
	HX_VISIT_MEMBER_NAME(_hx___scaleX,"__scaleX");
	HX_VISIT_MEMBER_NAME(_hx___scaleY,"__scaleY");
	HX_VISIT_MEMBER_NAME(_hx___sourceDirty,"__sourceDirty");
	HX_VISIT_MEMBER_NAME(_hx___transform,"__transform");
	HX_VISIT_MEMBER_NAME(_hx___transformDirty,"__transformDirty");
}

hx::Val Tile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_x()); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_y()); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return hx::Val( alpha); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return hx::Val( get_x_dyn()); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return hx::Val( get_y_dyn()); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return hx::Val( set_x_dyn()); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return hx::Val( set_y_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return hx::Val( matrix); }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_scaleX()); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_scaleY()); }
		if (HX_FIELD_EQ(inName,"set_id") ) { return hx::Val( set_id_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tileset") ) { return hx::Val( tileset); }
		if (HX_FIELD_EQ(inName,"visible") ) { return hx::Val( visible); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_rotation()); }
		if (HX_FIELD_EQ(inName,"__scaleX") ) { return hx::Val( _hx___scaleX); }
		if (HX_FIELD_EQ(inName,"__scaleY") ) { return hx::Val( _hx___scaleY); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return hx::Val( set_alpha_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__rotation") ) { return hx::Val( _hx___rotation); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return hx::Val( set_matrix_dyn()); }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return hx::Val( get_scaleX_dyn()); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return hx::Val( set_scaleX_dyn()); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return hx::Val( get_scaleY_dyn()); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return hx::Val( set_scaleY_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__transform") ) { return hx::Val( _hx___transform); }
		if (HX_FIELD_EQ(inName,"set_tileset") ) { return hx::Val( set_tileset_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__alphaDirty") ) { return hx::Val( _hx___alphaDirty); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return hx::Val( get_rotation_dyn()); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return hx::Val( set_rotation_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__sourceDirty") ) { return hx::Val( _hx___sourceDirty); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { return hx::Val( _hx___rotationSine); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { return hx::Val( _hx___rotationCosine); }
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { return hx::Val( _hx___transformDirty); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Tile_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_x(inValue) ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_y(inValue) ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_id(inValue) );id=inValue.Cast< Int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_alpha(inValue) );alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_matrix(inValue) );matrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_scaleX(inValue) ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_scaleY(inValue) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tileset") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_tileset(inValue) );tileset=inValue.Cast<  ::openfl::display::Tileset >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< Bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_rotation(inValue) ); }
		if (HX_FIELD_EQ(inName,"__scaleX") ) { _hx___scaleX=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__scaleY") ) { _hx___scaleY=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__rotation") ) { _hx___rotation=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__transform") ) { _hx___transform=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__alphaDirty") ) { _hx___alphaDirty=inValue.Cast< Bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__sourceDirty") ) { _hx___sourceDirty=inValue.Cast< Bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__rotationSine") ) { _hx___rotationSine=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__rotationCosine") ) { _hx___rotationCosine=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__transformDirty") ) { _hx___transformDirty=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("tileset","\x34","\x81","\x93","\x45"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("__alphaDirty","\xf4","\x1e","\x09","\x33"));
	outFields->push(HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab"));
	outFields->push(HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14"));
	outFields->push(HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f"));
	outFields->push(HX_HCSTRING("__scaleX","\xae","\x55","\x55","\xe4"));
	outFields->push(HX_HCSTRING("__scaleY","\xaf","\x55","\x55","\xe4"));
	outFields->push(HX_HCSTRING("__sourceDirty","\x17","\x56","\x4e","\x51"));
	outFields->push(HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"));
	outFields->push(HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Tile_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Tile_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Tile_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(Tile_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(Tile_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*::openfl::display::Tileset*/ ,(int)offsetof(Tile_obj,tileset),HX_HCSTRING("tileset","\x34","\x81","\x93","\x45")},
	{hx::fsBool,(int)offsetof(Tile_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsBool,(int)offsetof(Tile_obj,_hx___alphaDirty),HX_HCSTRING("__alphaDirty","\xf4","\x1e","\x09","\x33")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Tile_obj,_hx___rotation),HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab")},
	{hx::fsFloat,(int)offsetof(Tile_obj,_hx___rotationCosine),HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14")},
	{hx::fsFloat,(int)offsetof(Tile_obj,_hx___rotationSine),HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Tile_obj,_hx___scaleX),HX_HCSTRING("__scaleX","\xae","\x55","\x55","\xe4")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Tile_obj,_hx___scaleY),HX_HCSTRING("__scaleY","\xaf","\x55","\x55","\xe4")},
	{hx::fsBool,(int)offsetof(Tile_obj,_hx___sourceDirty),HX_HCSTRING("__sourceDirty","\x17","\x56","\x4e","\x51")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Tile_obj,_hx___transform),HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73")},
	{hx::fsBool,(int)offsetof(Tile_obj,_hx___transformDirty),HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Tile_obj_sStaticStorageInfo = 0;
#endif

static ::String Tile_obj_sMemberFields[] = {
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("tileset","\x34","\x81","\x93","\x45"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("__alphaDirty","\xf4","\x1e","\x09","\x33"),
	HX_HCSTRING("__rotation","\x5e","\xb0","\xbe","\xab"),
	HX_HCSTRING("__rotationCosine","\xf7","\x71","\x7b","\x14"),
	HX_HCSTRING("__rotationSine","\xcb","\xf9","\xad","\x3f"),
	HX_HCSTRING("__scaleX","\xae","\x55","\x55","\xe4"),
	HX_HCSTRING("__scaleY","\xaf","\x55","\x55","\xe4"),
	HX_HCSTRING("__sourceDirty","\x17","\x56","\x4e","\x51"),
	HX_HCSTRING("__transform","\x4c","\x76","\xbf","\x73"),
	HX_HCSTRING("__transformDirty","\x26","\xf6","\x91","\x84"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("set_id","\x98","\x47","\x78","\x6f"),
	HX_HCSTRING("set_matrix","\x7e","\x44","\xcd","\xaf"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("get_scaleX","\x57","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleX","\xcb","\xf8","\x2a","\x30"),
	HX_HCSTRING("get_scaleY","\x58","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleY","\xcc","\xf8","\x2a","\x30"),
	HX_HCSTRING("set_tileset","\x57","\xe8","\xfa","\xd5"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	::String(null()) };

static void Tile_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Tile_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
};

#endif

hx::Class Tile_obj::__mClass;

void Tile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Tile","\x98","\x3c","\xaf","\xb0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Tile_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Tile_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tile_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Tile_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Tile_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Tile_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
