// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_app__Event_Dynamic_Void
#include <lime/app/_Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_app__Future_FutureWork
#include <lime/app/_Future/FutureWork.h>
#endif
#ifndef INCLUDED_lime_system_ThreadPool
#include <lime/system/ThreadPool.h>
#endif

namespace lime{
namespace app{
namespace _Future{

void FutureWork_obj::__construct() { }

Dynamic FutureWork_obj::__CreateEmpty() { return new FutureWork_obj; }

hx::ObjectPtr< FutureWork_obj > FutureWork_obj::__new()
{
	hx::ObjectPtr< FutureWork_obj > _hx_result = new FutureWork_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic FutureWork_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FutureWork_obj > _hx_result = new FutureWork_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::lime::_hx_system::ThreadPool FutureWork_obj::threadPool;

void FutureWork_obj::queue( ::Dynamic state){
            	HX_STACK_FRAME("lime.app._Future.FutureWork","queue",0x91987fc9,"lime.app._Future.FutureWork.queue","lime/app/Future.hx",278,0x058e0853)
            	HX_STACK_ARG(state,"state")
HXLINE( 280)		Bool _hx_tmp = hx::IsNull( ::lime::app::_Future::FutureWork_obj::threadPool );
HXDLIN( 280)		if (_hx_tmp) {
HXLINE( 282)			::lime::app::_Future::FutureWork_obj::threadPool =  ::lime::_hx_system::ThreadPool_obj::__new(null(),null());
HXLINE( 283)			::lime::app::_Future::FutureWork_obj::threadPool->doWork->add(::lime::app::_Future::FutureWork_obj::threadPool_doWork_dyn(),null(),null());
HXLINE( 284)			::lime::app::_Future::FutureWork_obj::threadPool->onComplete->add(::lime::app::_Future::FutureWork_obj::threadPool_onComplete_dyn(),null(),null());
HXLINE( 285)			::lime::app::_Future::FutureWork_obj::threadPool->onError->add(::lime::app::_Future::FutureWork_obj::threadPool_onError_dyn(),null(),null());
            		}
HXLINE( 289)		::lime::app::_Future::FutureWork_obj::threadPool->queue(state);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FutureWork_obj,queue,(void))

void FutureWork_obj::threadPool_doWork( ::Dynamic state){
            	HX_STACK_FRAME("lime.app._Future.FutureWork","threadPool_doWork",0x0c558ecd,"lime.app._Future.FutureWork.threadPool_doWork","lime/app/Future.hx",303,0x058e0853)
            	HX_STACK_ARG(state,"state")
HXLINE( 303)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 305)			HX_VARI(  ::Dynamic,result) =  ::Dynamic(state->__Field(HX_("work",d1,01,fd,4e),hx::paccDynamic))();
HXLINE( 306)			::lime::app::_Future::FutureWork_obj::threadPool->sendComplete( ::Dynamic(hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("promise",9b,cd,e9,f7), ::Dynamic(state->__Field(HX_("promise",9b,cd,e9,f7),hx::paccDynamic)))
            				->setFixed(1,HX_("result",dd,68,84,08),result)));
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE( 310)				::lime::app::_Future::FutureWork_obj::threadPool->sendError( ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("promise",9b,cd,e9,f7), ::Dynamic(state->__Field(HX_("promise",9b,cd,e9,f7),hx::paccDynamic)))
            					->setFixed(1,HX_("error",c8,cb,29,73),e)));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FutureWork_obj,threadPool_doWork,(void))

void FutureWork_obj::threadPool_onComplete( ::Dynamic state){
            	HX_STACK_FRAME("lime.app._Future.FutureWork","threadPool_onComplete",0x6b927949,"lime.app._Future.FutureWork.threadPool_onComplete","lime/app/Future.hx",319,0x058e0853)
            	HX_STACK_ARG(state,"state")
HXLINE( 319)		 ::Dynamic( ::Dynamic(state->__Field(HX_("promise",9b,cd,e9,f7),hx::paccDynamic))->__Field(HX_("complete",b9,00,c8,7f),hx::paccDynamic))( ::Dynamic(state->__Field(HX_("result",dd,68,84,08),hx::paccDynamic)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FutureWork_obj,threadPool_onComplete,(void))

void FutureWork_obj::threadPool_onError( ::Dynamic state){
            	HX_STACK_FRAME("lime.app._Future.FutureWork","threadPool_onError",0xc65d5938,"lime.app._Future.FutureWork.threadPool_onError","lime/app/Future.hx",326,0x058e0853)
            	HX_STACK_ARG(state,"state")
HXLINE( 326)		 ::Dynamic( ::Dynamic(state->__Field(HX_("promise",9b,cd,e9,f7),hx::paccDynamic))->__Field(HX_("error",c8,cb,29,73),hx::paccDynamic))( ::Dynamic(state->__Field(HX_("error",c8,cb,29,73),hx::paccDynamic)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FutureWork_obj,threadPool_onError,(void))


FutureWork_obj::FutureWork_obj()
{
}

bool FutureWork_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"queue") ) { outValue = queue_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"threadPool") ) { outValue = threadPool; return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"threadPool_doWork") ) { outValue = threadPool_doWork_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"threadPool_onError") ) { outValue = threadPool_onError_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"threadPool_onComplete") ) { outValue = threadPool_onComplete_dyn(); return true; }
	}
	return false;
}

bool FutureWork_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"threadPool") ) { threadPool=ioValue.Cast<  ::lime::_hx_system::ThreadPool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FutureWork_obj_sMemberStorageInfo = 0;
static hx::StaticInfo FutureWork_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::lime::_hx_system::ThreadPool*/ ,(void *) &FutureWork_obj::threadPool,HX_HCSTRING("threadPool","\xc6","\x54","\x25","\x46")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void FutureWork_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FutureWork_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FutureWork_obj::threadPool,"threadPool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FutureWork_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FutureWork_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FutureWork_obj::threadPool,"threadPool");
};

#endif

hx::Class FutureWork_obj::__mClass;

static ::String FutureWork_obj_sStaticFields[] = {
	HX_HCSTRING("threadPool","\xc6","\x54","\x25","\x46"),
	HX_HCSTRING("queue","\x91","\x8d","\xea","\x5d"),
	HX_HCSTRING("threadPool_doWork","\x95","\x28","\x69","\x50"),
	HX_HCSTRING("threadPool_onComplete","\x11","\x97","\x0a","\x2c"),
	HX_HCSTRING("threadPool_onError","\x70","\x4e","\x70","\x13"),
	::String(null())
};

void FutureWork_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app._Future.FutureWork","\xa6","\x58","\x06","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FutureWork_obj::__GetStatic;
	__mClass->mSetStaticField = &FutureWork_obj::__SetStatic;
	__mClass->mMarkFunc = FutureWork_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FutureWork_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FutureWork_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FutureWork_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FutureWork_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FutureWork_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace app
} // end namespace _Future
