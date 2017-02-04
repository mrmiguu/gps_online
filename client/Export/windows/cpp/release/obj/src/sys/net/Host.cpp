// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif

namespace sys{
namespace net{

void Host_obj::__construct(::String name){
            	HX_STACK_FRAME("sys.net.Host","new",0x056496ac,"sys.net.Host.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Host.hx",33,0xf180fedc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(name,"name")
HXLINE(  34)		this->host = name;
HXLINE(  35)		this->ip = _hx_std_host_resolve(name);
            	}

Dynamic Host_obj::__CreateEmpty() { return new Host_obj; }

hx::ObjectPtr< Host_obj > Host_obj::__new(::String name)
{
	hx::ObjectPtr< Host_obj > _hx_result = new Host_obj();
	_hx_result->__construct(name);
	return _hx_result;
}

Dynamic Host_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Host_obj > _hx_result = new Host_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void Host_obj::__init__(){
            	HX_STACK_FRAME("::sys::net::Host_obj","__init__",0x01315e0e,"::sys::net::Host_obj.__init__","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Host.hx",51,0xf180fedc)
HXLINE(  51)		_hx_std_socket_init();
            	}


::String Host_obj::toString(){
            	HX_STACK_FRAME("sys.net.Host","toString",0xe5efb6e0,"sys.net.Host.toString","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Host.hx",39,0xf180fedc)
            	HX_STACK_THIS(this)
HXLINE(  39)		return _hx_std_host_to_string(this->ip);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Host_obj,toString,return )


Host_obj::Host_obj()
{
}

void Host_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Host);
	HX_MARK_MEMBER_NAME(host,"host");
	HX_MARK_MEMBER_NAME(ip,"ip");
	HX_MARK_END_CLASS();
}

void Host_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(host,"host");
	HX_VISIT_MEMBER_NAME(ip,"ip");
}

hx::Val Host_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ip") ) { return hx::Val( ip); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"host") ) { return hx::Val( host); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Host_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ip") ) { ip=inValue.Cast< Int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"host") ) { host=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Host_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("host","\x68","\xcf","\x12","\x45"));
	outFields->push(HX_HCSTRING("ip","\xe7","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Host_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Host_obj,host),HX_HCSTRING("host","\x68","\xcf","\x12","\x45")},
	{hx::fsInt,(int)offsetof(Host_obj,ip),HX_HCSTRING("ip","\xe7","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Host_obj_sStaticStorageInfo = 0;
#endif

static ::String Host_obj_sMemberFields[] = {
	HX_HCSTRING("host","\x68","\xcf","\x12","\x45"),
	HX_HCSTRING("ip","\xe7","\x5b","\x00","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void Host_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Host_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Host_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Host_obj::__mClass,"__mClass");
};

#endif

hx::Class Host_obj::__mClass;

void Host_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.net.Host","\xba","\x10","\x59","\xc4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Host_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Host_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Host_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Host_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Host_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Host_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Host_obj::__boot()
{
}

} // end namespace sys
} // end namespace net
