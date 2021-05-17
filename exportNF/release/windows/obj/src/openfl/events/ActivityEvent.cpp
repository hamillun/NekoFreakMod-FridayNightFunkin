// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_ActivityEvent
#include <openfl/events/ActivityEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_07ba67a8dcdbfa28_63_new,"openfl.events.ActivityEvent","new",0x259c5826,"openfl.events.ActivityEvent.new","openfl/events/ActivityEvent.hx",63,0x98f9202a)
HX_LOCAL_STACK_FRAME(_hx_pos_07ba67a8dcdbfa28_70_clone,"openfl.events.ActivityEvent","clone",0xb6b198a3,"openfl.events.ActivityEvent.clone","openfl/events/ActivityEvent.hx",70,0x98f9202a)
HX_LOCAL_STACK_FRAME(_hx_pos_07ba67a8dcdbfa28_80_toString,"openfl.events.ActivityEvent","toString",0x46865b26,"openfl.events.ActivityEvent.toString","openfl/events/ActivityEvent.hx",80,0x98f9202a)
static const ::String _hx_array_data_a0800d34_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("activating",b0,17,b4,bd),
};
HX_LOCAL_STACK_FRAME(_hx_pos_07ba67a8dcdbfa28_84___init,"openfl.events.ActivityEvent","__init",0x0b19b62a,"openfl.events.ActivityEvent.__init","openfl/events/ActivityEvent.hx",84,0x98f9202a)
HX_LOCAL_STACK_FRAME(_hx_pos_07ba67a8dcdbfa28_31_boot,"openfl.events.ActivityEvent","boot",0xbb49c9ac,"openfl.events.ActivityEvent.boot","openfl/events/ActivityEvent.hx",31,0x98f9202a)
namespace openfl{
namespace events{

void ActivityEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< bool >  __o_activating){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            		bool activating = __o_activating.Default(false);
            	HX_STACKFRAME(&_hx_pos_07ba67a8dcdbfa28_63_new)
HXLINE(  64)		super::__construct(type,bubbles,cancelable);
HXLINE(  66)		this->activating = activating;
            	}

Dynamic ActivityEvent_obj::__CreateEmpty() { return new ActivityEvent_obj; }

void *ActivityEvent_obj::_hx_vtable = 0;

Dynamic ActivityEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ActivityEvent_obj > _hx_result = new ActivityEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ActivityEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x11188ee2;
	}
}

 ::openfl::events::Event ActivityEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_07ba67a8dcdbfa28_70_clone)
HXLINE(  71)		 ::openfl::events::ActivityEvent event =  ::openfl::events::ActivityEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->activating);
HXLINE(  72)		event->target = this->target;
HXLINE(  73)		event->currentTarget = this->currentTarget;
HXLINE(  74)		event->eventPhase = this->eventPhase;
HXLINE(  75)		return event;
            	}


::String ActivityEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_07ba67a8dcdbfa28_80_toString)
HXDLIN(  80)		return this->_hx___formatToString(HX_("ActivityEvent",ab,eb,0c,59),::Array_obj< ::String >::fromData( _hx_array_data_a0800d34_3,4));
            	}


void ActivityEvent_obj::_hx___init(){
            	HX_STACKFRAME(&_hx_pos_07ba67a8dcdbfa28_84___init)
HXLINE(  85)		this->super::_hx___init();
HXLINE(  86)		this->activating = false;
            	}


::String ActivityEvent_obj::ACTIVITY;


::hx::ObjectPtr< ActivityEvent_obj > ActivityEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< bool >  __o_activating) {
	::hx::ObjectPtr< ActivityEvent_obj > __this = new ActivityEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_activating);
	return __this;
}

::hx::ObjectPtr< ActivityEvent_obj > ActivityEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< bool >  __o_activating) {
	ActivityEvent_obj *__this = (ActivityEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ActivityEvent_obj), true, "openfl.events.ActivityEvent"));
	*(void **)__this = ActivityEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_activating);
	return __this;
}

ActivityEvent_obj::ActivityEvent_obj()
{
}

::hx::Val ActivityEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"activating") ) { return ::hx::Val( activating ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ActivityEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"activating") ) { activating=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ActivityEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("activating",b0,17,b4,bd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ActivityEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ActivityEvent_obj,activating),HX_("activating",b0,17,b4,bd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ActivityEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &ActivityEvent_obj::ACTIVITY,HX_("ACTIVITY",cf,bd,37,3f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ActivityEvent_obj_sMemberFields[] = {
	HX_("activating",b0,17,b4,bd),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	HX_("__init",30,9e,b3,f4),
	::String(null()) };

static void ActivityEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ActivityEvent_obj::ACTIVITY,"ACTIVITY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ActivityEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ActivityEvent_obj::ACTIVITY,"ACTIVITY");
};

#endif

::hx::Class ActivityEvent_obj::__mClass;

static ::String ActivityEvent_obj_sStaticFields[] = {
	HX_("ACTIVITY",cf,bd,37,3f),
	::String(null())
};

void ActivityEvent_obj::__register()
{
	ActivityEvent_obj _hx_dummy;
	ActivityEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.ActivityEvent",34,0d,80,a0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ActivityEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ActivityEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ActivityEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ActivityEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ActivityEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ActivityEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ActivityEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ActivityEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_07ba67a8dcdbfa28_31_boot)
HXDLIN(  31)		ACTIVITY = HX_("activity",cf,2d,b2,e5);
            	}
}

} // end namespace openfl
} // end namespace events
