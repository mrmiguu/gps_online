// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_NetStatusEvent
#include <openfl/events/NetStatusEvent.h>
#endif
#ifndef INCLUDED_openfl_net_NetConnection
#include <openfl/net/NetConnection.h>
#endif

namespace openfl{
namespace net{

void NetConnection_obj::__construct(){
            	HX_STACK_FRAME("openfl.net.NetConnection","new",0x5c5dd97e,"openfl.net.NetConnection.new","openfl/net/NetConnection.hx",16,0x3b599834)
            	HX_STACK_THIS(this)
HXLINE(  16)		super::__construct(null());
            	}

Dynamic NetConnection_obj::__CreateEmpty() { return new NetConnection_obj; }

hx::ObjectPtr< NetConnection_obj > NetConnection_obj::__new()
{
	hx::ObjectPtr< NetConnection_obj > _hx_result = new NetConnection_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic NetConnection_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NetConnection_obj > _hx_result = new NetConnection_obj();
	_hx_result->__construct();
	return _hx_result;
}

void NetConnection_obj::connect(::String command, ::Dynamic _, ::Dynamic _1, ::Dynamic _2, ::Dynamic _3, ::Dynamic _4){
            	HX_STACK_FRAME("openfl.net.NetConnection","connect",0x1fc82c08,"openfl.net.NetConnection.connect","openfl/net/NetConnection.hx",21,0x3b599834)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(command,"command")
            	HX_STACK_ARG(_,"_")
            	HX_STACK_ARG(_1,"_1")
            	HX_STACK_ARG(_2,"_2")
            	HX_STACK_ARG(_3,"_3")
            	HX_STACK_ARG(_4,"_4")
HXLINE(  23)		Bool _hx_tmp = hx::IsNotNull( command );
HXDLIN(  23)		if (_hx_tmp) {
HXLINE(  25)			HX_STACK_DO_THROW(HX_("Error: Can only connect in \"HTTP streaming\" mode",fe,f3,67,57));
            		}
HXLINE(  29)		this->dispatchEvent( ::openfl::events::NetStatusEvent_obj::__new(HX_("netStatus",6f,4f,ec,46),false,true, ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("code",2d,b1,c4,41),HX_("connectSuccess",f9,c2,88,08)))));
            	}


HX_DEFINE_DYNAMIC_FUNC6(NetConnection_obj,connect,(void))

::String NetConnection_obj::CONNECT_SUCCESS;


NetConnection_obj::NetConnection_obj()
{
}

hx::Val NetConnection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"connect") ) { return hx::Val( connect_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *NetConnection_obj_sMemberStorageInfo = 0;
static hx::StaticInfo NetConnection_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &NetConnection_obj::CONNECT_SUCCESS,HX_HCSTRING("CONNECT_SUCCESS","\xee","\x3c","\xd2","\x12")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String NetConnection_obj_sMemberFields[] = {
	HX_HCSTRING("connect","\xea","\x3b","\x80","\x15"),
	::String(null()) };

static void NetConnection_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NetConnection_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NetConnection_obj::CONNECT_SUCCESS,"CONNECT_SUCCESS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NetConnection_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NetConnection_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NetConnection_obj::CONNECT_SUCCESS,"CONNECT_SUCCESS");
};

#endif

hx::Class NetConnection_obj::__mClass;

static ::String NetConnection_obj_sStaticFields[] = {
	HX_HCSTRING("CONNECT_SUCCESS","\xee","\x3c","\xd2","\x12"),
	::String(null())
};

void NetConnection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net.NetConnection","\x8c","\x02","\x60","\x24");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NetConnection_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(NetConnection_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(NetConnection_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NetConnection_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NetConnection_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NetConnection_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NetConnection_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NetConnection_obj::__boot()
{
{
            	HX_STACK_FRAME("openfl.net.NetConnection","boot",0x6dd97554,"openfl.net.NetConnection.boot","openfl/net/NetConnection.hx",11,0x3b599834)
HXLINE(  11)		CONNECT_SUCCESS = HX_("connectSuccess",f9,c2,88,08);
            	}
}

} // end namespace openfl
} // end namespace net
