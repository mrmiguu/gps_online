// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif

namespace openfl{
namespace geom{

void ColorTransform_obj::__construct(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset){
Float redMultiplier = __o_redMultiplier.Default(1);
Float greenMultiplier = __o_greenMultiplier.Default(1);
Float blueMultiplier = __o_blueMultiplier.Default(1);
Float alphaMultiplier = __o_alphaMultiplier.Default(1);
Float redOffset = __o_redOffset.Default(0);
Float greenOffset = __o_greenOffset.Default(0);
Float blueOffset = __o_blueOffset.Default(0);
Float alphaOffset = __o_alphaOffset.Default(0);
            	HX_STACK_FRAME("openfl.geom.ColorTransform","new",0x35d8b8af,"openfl.geom.ColorTransform.new","openfl/geom/ColorTransform.hx",29,0x850de941)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(redMultiplier,"redMultiplier")
            	HX_STACK_ARG(greenMultiplier,"greenMultiplier")
            	HX_STACK_ARG(blueMultiplier,"blueMultiplier")
            	HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
            	HX_STACK_ARG(redOffset,"redOffset")
            	HX_STACK_ARG(greenOffset,"greenOffset")
            	HX_STACK_ARG(blueOffset,"blueOffset")
            	HX_STACK_ARG(alphaOffset,"alphaOffset")
HXLINE(  31)		this->redMultiplier = redMultiplier;
HXLINE(  32)		this->greenMultiplier = greenMultiplier;
HXLINE(  33)		this->blueMultiplier = blueMultiplier;
HXLINE(  34)		this->alphaMultiplier = alphaMultiplier;
HXLINE(  35)		this->redOffset = redOffset;
HXLINE(  36)		this->greenOffset = greenOffset;
HXLINE(  37)		this->blueOffset = blueOffset;
HXLINE(  38)		this->alphaOffset = alphaOffset;
            	}

Dynamic ColorTransform_obj::__CreateEmpty() { return new ColorTransform_obj; }

hx::ObjectPtr< ColorTransform_obj > ColorTransform_obj::__new(hx::Null< Float >  __o_redMultiplier,hx::Null< Float >  __o_greenMultiplier,hx::Null< Float >  __o_blueMultiplier,hx::Null< Float >  __o_alphaMultiplier,hx::Null< Float >  __o_redOffset,hx::Null< Float >  __o_greenOffset,hx::Null< Float >  __o_blueOffset,hx::Null< Float >  __o_alphaOffset)
{
	hx::ObjectPtr< ColorTransform_obj > _hx_result = new ColorTransform_obj();
	_hx_result->__construct(__o_redMultiplier,__o_greenMultiplier,__o_blueMultiplier,__o_alphaMultiplier,__o_redOffset,__o_greenOffset,__o_blueOffset,__o_alphaOffset);
	return _hx_result;
}

Dynamic ColorTransform_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ColorTransform_obj > _hx_result = new ColorTransform_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

void ColorTransform_obj::concat( ::openfl::geom::ColorTransform second){
            	HX_STACK_FRAME("openfl.geom.ColorTransform","concat",0x6a83fc25,"openfl.geom.ColorTransform.concat","openfl/geom/ColorTransform.hx",43,0x850de941)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(second,"second")
HXLINE(  45)		hx::MultEq(this->redMultiplier,second->redMultiplier);
HXLINE(  46)		hx::MultEq(this->greenMultiplier,second->greenMultiplier);
HXLINE(  47)		hx::MultEq(this->blueMultiplier,second->blueMultiplier);
HXLINE(  48)		hx::MultEq(this->alphaMultiplier,second->alphaMultiplier);
HXLINE(  50)		Float _hx_tmp = (second->redMultiplier * this->redOffset);
HXDLIN(  50)		this->redOffset = (_hx_tmp + second->redOffset);
HXLINE(  51)		Float _hx_tmp1 = (second->greenMultiplier * this->greenOffset);
HXDLIN(  51)		this->greenOffset = (_hx_tmp1 + second->greenOffset);
HXLINE(  52)		Float _hx_tmp2 = (second->blueMultiplier * this->blueOffset);
HXDLIN(  52)		this->blueOffset = (_hx_tmp2 + second->blueOffset);
HXLINE(  53)		Float _hx_tmp3 = (second->alphaMultiplier * this->alphaOffset);
HXDLIN(  53)		this->alphaOffset = (_hx_tmp3 + second->alphaOffset);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,concat,(void))

::String ColorTransform_obj::toString(){
            	HX_STACK_FRAME("openfl.geom.ColorTransform","toString",0xe65269fd,"openfl.geom.ColorTransform.toString","openfl/geom/ColorTransform.hx",60,0x850de941)
            	HX_STACK_THIS(this)
HXLINE(  60)		return ((((((((((((((((HX_("(redMultiplier=",f3,ad,1c,05) + this->redMultiplier) + HX_(", greenMultiplier=",0d,c2,8d,70)) + this->greenMultiplier) + HX_(", blueMultiplier=",2e,6d,c3,3b)) + this->blueMultiplier) + HX_(", alphaMultiplier=",52,89,82,1f)) + this->alphaMultiplier) + HX_(", redOffset=",6d,d3,86,3f)) + this->redOffset) + HX_(", greenOffset=",3b,d5,ed,53)) + this->greenOffset) + HX_(", blueOffset=",dc,1b,85,47)) + this->blueOffset) + HX_(", alphaOffset=",00,56,b2,98)) + this->alphaOffset) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,toString,return )

 ::openfl::geom::ColorTransform ColorTransform_obj::_hx___clone(){
            	HX_STACK_FRAME("openfl.geom.ColorTransform","__clone",0x6d82280c,"openfl.geom.ColorTransform.__clone","openfl/geom/ColorTransform.hx",67,0x850de941)
            	HX_STACK_THIS(this)
HXLINE(  67)		return  ::openfl::geom::ColorTransform_obj::__new(this->redMultiplier,this->greenMultiplier,this->blueMultiplier,this->alphaMultiplier,this->redOffset,this->greenOffset,this->blueOffset,this->alphaOffset);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,_hx___clone,return )

void ColorTransform_obj::_hx___combine( ::openfl::geom::ColorTransform ct){
            	HX_STACK_FRAME("openfl.geom.ColorTransform","__combine",0x74bf08ee,"openfl.geom.ColorTransform.__combine","openfl/geom/ColorTransform.hx",72,0x850de941)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ct,"ct")
HXLINE(  74)		hx::MultEq(this->redMultiplier,ct->redMultiplier);
HXLINE(  75)		hx::MultEq(this->greenMultiplier,ct->greenMultiplier);
HXLINE(  76)		hx::MultEq(this->blueMultiplier,ct->blueMultiplier);
HXLINE(  77)		hx::MultEq(this->alphaMultiplier,ct->alphaMultiplier);
HXLINE(  79)		hx::AddEq(this->redOffset,ct->redOffset);
HXLINE(  80)		hx::AddEq(this->greenOffset,ct->greenOffset);
HXLINE(  81)		hx::AddEq(this->blueOffset,ct->blueOffset);
HXLINE(  82)		hx::AddEq(this->alphaOffset,ct->alphaOffset);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,_hx___combine,(void))

Bool ColorTransform_obj::_hx___equals( ::openfl::geom::ColorTransform ct, ::Dynamic __o_skipAlphaMultiplier){
 ::Dynamic skipAlphaMultiplier = __o_skipAlphaMultiplier.Default(false);
            	HX_STACK_FRAME("openfl.geom.ColorTransform","__equals",0x1605f2b0,"openfl.geom.ColorTransform.__equals","openfl/geom/ColorTransform.hx",89,0x850de941)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ct,"ct")
            	HX_STACK_ARG(skipAlphaMultiplier,"skipAlphaMultiplier")
HXLINE(  89)		Bool _hx_tmp;
HXDLIN(  89)		Bool _hx_tmp1;
HXDLIN(  89)		Bool _hx_tmp2;
HXDLIN(  89)		Bool _hx_tmp3;
HXDLIN(  89)		Bool _hx_tmp4;
HXDLIN(  89)		Bool _hx_tmp5;
HXDLIN(  89)		Bool _hx_tmp6;
HXDLIN(  89)		Bool _hx_tmp7 = hx::IsNotNull( ct );
HXDLIN(  89)		if (_hx_tmp7) {
HXLINE(  89)			_hx_tmp6 = (this->redMultiplier == ct->redMultiplier);
            		}
            		else {
HXLINE(  89)			_hx_tmp6 = false;
            		}
HXDLIN(  89)		if (_hx_tmp6) {
HXLINE(  89)			_hx_tmp5 = (this->greenMultiplier == ct->greenMultiplier);
            		}
            		else {
HXLINE(  89)			_hx_tmp5 = false;
            		}
HXDLIN(  89)		if (_hx_tmp5) {
HXLINE(  89)			_hx_tmp4 = (this->blueMultiplier == ct->blueMultiplier);
            		}
            		else {
HXLINE(  89)			_hx_tmp4 = false;
            		}
HXDLIN(  89)		if (_hx_tmp4) {
HXLINE(  89)			if (!(skipAlphaMultiplier)) {
HXLINE(  89)				_hx_tmp3 = (this->alphaMultiplier == ct->alphaMultiplier);
            			}
            			else {
HXLINE(  89)				_hx_tmp3 = true;
            			}
            		}
            		else {
HXLINE(  89)			_hx_tmp3 = false;
            		}
HXDLIN(  89)		if (_hx_tmp3) {
HXLINE(  89)			_hx_tmp2 = (this->redOffset == ct->redOffset);
            		}
            		else {
HXLINE(  89)			_hx_tmp2 = false;
            		}
HXDLIN(  89)		if (_hx_tmp2) {
HXLINE(  89)			_hx_tmp1 = (this->greenOffset == ct->greenOffset);
            		}
            		else {
HXLINE(  89)			_hx_tmp1 = false;
            		}
HXDLIN(  89)		if (_hx_tmp1) {
HXLINE(  89)			_hx_tmp = (this->blueOffset == ct->blueOffset);
            		}
            		else {
HXLINE(  89)			_hx_tmp = false;
            		}
HXDLIN(  89)		if (_hx_tmp) {
HXLINE(  89)			return (this->alphaOffset == ct->alphaOffset);
            		}
            		else {
HXLINE(  89)			return false;
            		}
HXDLIN(  89)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ColorTransform_obj,_hx___equals,return )

Bool ColorTransform_obj::_hx___isDefault(){
            	HX_STACK_FRAME("openfl.geom.ColorTransform","__isDefault",0x071aee26,"openfl.geom.ColorTransform.__isDefault","openfl/geom/ColorTransform.hx",96,0x850de941)
            	HX_STACK_THIS(this)
HXLINE(  96)		Bool _hx_tmp;
HXDLIN(  96)		Bool _hx_tmp1;
HXDLIN(  96)		Bool _hx_tmp2;
HXDLIN(  96)		Bool _hx_tmp3;
HXDLIN(  96)		Bool _hx_tmp4;
HXDLIN(  96)		Bool _hx_tmp5;
HXDLIN(  96)		if ((this->redMultiplier == (int)1)) {
HXLINE(  96)			_hx_tmp5 = (this->greenMultiplier == (int)1);
            		}
            		else {
HXLINE(  96)			_hx_tmp5 = false;
            		}
HXDLIN(  96)		if (_hx_tmp5) {
HXLINE(  96)			_hx_tmp4 = (this->blueMultiplier == (int)1);
            		}
            		else {
HXLINE(  96)			_hx_tmp4 = false;
            		}
HXDLIN(  96)		if (_hx_tmp4) {
HXLINE(  96)			_hx_tmp3 = (this->alphaMultiplier == (int)1);
            		}
            		else {
HXLINE(  96)			_hx_tmp3 = false;
            		}
HXDLIN(  96)		if (_hx_tmp3) {
HXLINE(  96)			_hx_tmp2 = (this->redOffset == (int)0);
            		}
            		else {
HXLINE(  96)			_hx_tmp2 = false;
            		}
HXDLIN(  96)		if (_hx_tmp2) {
HXLINE(  96)			_hx_tmp1 = (this->greenOffset == (int)0);
            		}
            		else {
HXLINE(  96)			_hx_tmp1 = false;
            		}
HXDLIN(  96)		if (_hx_tmp1) {
HXLINE(  96)			_hx_tmp = (this->blueOffset == (int)0);
            		}
            		else {
HXLINE(  96)			_hx_tmp = false;
            		}
HXDLIN(  96)		if (_hx_tmp) {
HXLINE(  96)			return (this->alphaOffset == (int)0);
            		}
            		else {
HXLINE(  96)			return false;
            		}
HXDLIN(  96)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,_hx___isDefault,return )

Int ColorTransform_obj::get_color(){
            	HX_STACK_FRAME("openfl.geom.ColorTransform","get_color",0x07485b49,"openfl.geom.ColorTransform.get_color","openfl/geom/ColorTransform.hx",110,0x850de941)
            	HX_STACK_THIS(this)
HXLINE( 110)		Int _hx_tmp = ::Std_obj::_hx_int(this->redOffset);
HXDLIN( 110)		Int _hx_tmp1 = ((int)_hx_tmp << (int)(int)16);
HXDLIN( 110)		Int _hx_tmp2 = ::Std_obj::_hx_int(this->greenOffset);
HXDLIN( 110)		Int _hx_tmp3 = ((int)_hx_tmp1 | (int)((int)_hx_tmp2 << (int)(int)8));
HXDLIN( 110)		Int _hx_tmp4 = ::Std_obj::_hx_int(this->blueOffset);
HXDLIN( 110)		return ((int)_hx_tmp3 | (int)_hx_tmp4);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,get_color,return )

Int ColorTransform_obj::set_color(Int value){
            	HX_STACK_FRAME("openfl.geom.ColorTransform","set_color",0xea994755,"openfl.geom.ColorTransform.set_color","openfl/geom/ColorTransform.hx",115,0x850de941)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 117)		this->redOffset = ((int)((int)value >> (int)(int)16) & (int)(int)255);
HXLINE( 118)		this->greenOffset = ((int)((int)value >> (int)(int)8) & (int)(int)255);
HXLINE( 119)		this->blueOffset = ((int)value & (int)(int)255);
HXLINE( 121)		this->redMultiplier = (int)0;
HXLINE( 122)		this->greenMultiplier = (int)0;
HXLINE( 123)		this->blueMultiplier = (int)0;
HXLINE( 125)		return this->get_color();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,set_color,return )

 ::lime::utils::ArrayBufferView ColorTransform_obj::_hx___toLimeColorMatrix(){
            	HX_STACK_FRAME("openfl.geom.ColorTransform","__toLimeColorMatrix",0x55c98ae3,"openfl.geom.ColorTransform.__toLimeColorMatrix","openfl/geom/ColorTransform.hx",130,0x850de941)
            	HX_STACK_THIS(this)
HXLINE( 132)		Bool _hx_tmp = hx::IsNull( ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix );
HXDLIN( 132)		if (_hx_tmp) {
HXLINE( 134)			HX_VARI_NAME(  ::lime::utils::ArrayBufferView,this1,"this") =  ::lime::utils::ArrayBufferView_obj::__new((int)20,(int)8);
HXDLIN( 134)			::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix = this1;
            		}
HXLINE( 138)		{
HXLINE( 138)			HX_VARI_NAME(  ::lime::utils::ArrayBufferView,this2,"this") = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 138)			HX_VARI( Float,val) = this->redMultiplier;
HXDLIN( 138)			{
HXLINE( 138)				Int byteOffset = this2->byteOffset;
HXDLIN( 138)				::__hxcpp_memory_set_float(this2->buffer->b,byteOffset,val);
            			}
            		}
HXLINE( 139)		{
HXLINE( 139)			HX_VARI_NAME(  ::lime::utils::ArrayBufferView,this3,"this") = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 139)			HX_VARI_NAME( Float,val1,"val") = ((Float)this->redOffset / (Float)(int)255);
HXDLIN( 139)			{
HXLINE( 139)				Int byteOffset1 = (this3->byteOffset + (int)16);
HXDLIN( 139)				::__hxcpp_memory_set_float(this3->buffer->b,byteOffset1,val1);
            			}
            		}
HXLINE( 140)		{
HXLINE( 140)			HX_VARI_NAME(  ::lime::utils::ArrayBufferView,this4,"this") = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 140)			HX_VARI_NAME( Float,val2,"val") = this->greenMultiplier;
HXDLIN( 140)			{
HXLINE( 140)				Int byteOffset2 = (this4->byteOffset + (int)24);
HXDLIN( 140)				::__hxcpp_memory_set_float(this4->buffer->b,byteOffset2,val2);
            			}
            		}
HXLINE( 141)		{
HXLINE( 141)			HX_VARI_NAME(  ::lime::utils::ArrayBufferView,this5,"this") = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 141)			HX_VARI_NAME( Float,val3,"val") = ((Float)this->greenOffset / (Float)(int)255);
HXDLIN( 141)			{
HXLINE( 141)				Int byteOffset3 = (this5->byteOffset + (int)36);
HXDLIN( 141)				::__hxcpp_memory_set_float(this5->buffer->b,byteOffset3,val3);
            			}
            		}
HXLINE( 142)		{
HXLINE( 142)			HX_VARI_NAME(  ::lime::utils::ArrayBufferView,this6,"this") = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 142)			HX_VARI_NAME( Float,val4,"val") = this->blueMultiplier;
HXDLIN( 142)			{
HXLINE( 142)				Int byteOffset4 = (this6->byteOffset + (int)48);
HXDLIN( 142)				::__hxcpp_memory_set_float(this6->buffer->b,byteOffset4,val4);
            			}
            		}
HXLINE( 143)		{
HXLINE( 143)			HX_VARI_NAME(  ::lime::utils::ArrayBufferView,this7,"this") = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 143)			HX_VARI_NAME( Float,val5,"val") = ((Float)this->blueOffset / (Float)(int)255);
HXDLIN( 143)			{
HXLINE( 143)				Int byteOffset5 = (this7->byteOffset + (int)56);
HXDLIN( 143)				::__hxcpp_memory_set_float(this7->buffer->b,byteOffset5,val5);
            			}
            		}
HXLINE( 144)		{
HXLINE( 144)			HX_VARI_NAME(  ::lime::utils::ArrayBufferView,this8,"this") = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 144)			HX_VARI_NAME( Float,val6,"val") = this->alphaMultiplier;
HXDLIN( 144)			{
HXLINE( 144)				Int byteOffset6 = (this8->byteOffset + (int)72);
HXDLIN( 144)				::__hxcpp_memory_set_float(this8->buffer->b,byteOffset6,val6);
            			}
            		}
HXLINE( 145)		{
HXLINE( 145)			HX_VARI_NAME(  ::lime::utils::ArrayBufferView,this9,"this") = ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
HXDLIN( 145)			HX_VARI_NAME( Float,val7,"val") = ((Float)this->alphaOffset / (Float)(int)255);
HXDLIN( 145)			{
HXLINE( 145)				Int byteOffset7 = (this9->byteOffset + (int)76);
HXDLIN( 145)				::__hxcpp_memory_set_float(this9->buffer->b,byteOffset7,val7);
            			}
            		}
HXLINE( 147)		return ::openfl::geom::ColorTransform_obj::_hx___limeColorMatrix;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,_hx___toLimeColorMatrix,return )

 ::lime::utils::ArrayBufferView ColorTransform_obj::_hx___limeColorMatrix;


ColorTransform_obj::ColorTransform_obj()
{
}

hx::Val ColorTransform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_color()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return hx::Val( concat_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__clone") ) { return hx::Val( _hx___clone_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		if (HX_FIELD_EQ(inName,"__equals") ) { return hx::Val( _hx___equals_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { return hx::Val( redOffset); }
		if (HX_FIELD_EQ(inName,"__combine") ) { return hx::Val( _hx___combine_dyn()); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return hx::Val( get_color_dyn()); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return hx::Val( set_color_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { return hx::Val( blueOffset); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { return hx::Val( alphaOffset); }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { return hx::Val( greenOffset); }
		if (HX_FIELD_EQ(inName,"__isDefault") ) { return hx::Val( _hx___isDefault_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { return hx::Val( redMultiplier); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { return hx::Val( blueMultiplier); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { return hx::Val( alphaMultiplier); }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { return hx::Val( greenMultiplier); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__toLimeColorMatrix") ) { return hx::Val( _hx___toLimeColorMatrix_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool ColorTransform_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__limeColorMatrix") ) { outValue = _hx___limeColorMatrix; return true; }
	}
	return false;
}

hx::Val ColorTransform_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_color(inValue) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { redOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { blueOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { alphaOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { greenOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { redMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { blueMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { alphaMultiplier=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { greenMultiplier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ColorTransform_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"__limeColorMatrix") ) { _hx___limeColorMatrix=ioValue.Cast<  ::lime::utils::ArrayBufferView >(); return true; }
	}
	return false;
}

void ColorTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a"));
	outFields->push(HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0"));
	outFields->push(HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf"));
	outFields->push(HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f"));
	outFields->push(HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7"));
	outFields->push(HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e"));
	outFields->push(HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ColorTransform_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaMultiplier),HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaOffset),HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,blueMultiplier),HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,blueOffset),HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,greenMultiplier),HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,greenOffset),HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,redMultiplier),HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,redOffset),HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ColorTransform_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(void *) &ColorTransform_obj::_hx___limeColorMatrix,HX_HCSTRING("__limeColorMatrix","\xcf","\xd7","\x37","\x34")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ColorTransform_obj_sMemberFields[] = {
	HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a"),
	HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0"),
	HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf"),
	HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb"),
	HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f"),
	HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7"),
	HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e"),
	HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("__clone","\x3d","\x6c","\xc1","\xb2"),
	HX_HCSTRING("__combine","\x5f","\x7b","\x7c","\xfb"),
	HX_HCSTRING("__equals","\x5f","\x59","\x22","\x68"),
	HX_HCSTRING("__isDefault","\xd7","\x9e","\xee","\xcd"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("__toLimeColorMatrix","\x94","\xd4","\xb6","\x78"),
	::String(null()) };

static void ColorTransform_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ColorTransform_obj::_hx___limeColorMatrix,"__limeColorMatrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ColorTransform_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ColorTransform_obj::_hx___limeColorMatrix,"__limeColorMatrix");
};

#endif

hx::Class ColorTransform_obj::__mClass;

static ::String ColorTransform_obj_sStaticFields[] = {
	HX_HCSTRING("__limeColorMatrix","\xcf","\xd7","\x37","\x34"),
	::String(null())
};

void ColorTransform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.geom.ColorTransform","\x3d","\x35","\x6d","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ColorTransform_obj::__GetStatic;
	__mClass->mSetStaticField = &ColorTransform_obj::__SetStatic;
	__mClass->mMarkFunc = ColorTransform_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ColorTransform_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ColorTransform_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColorTransform_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ColorTransform_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ColorTransform_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ColorTransform_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace geom
