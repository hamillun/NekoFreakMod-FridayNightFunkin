// Generated by Haxe 4.2.1+bf9ff69
#ifndef INCLUDED_HelperFunctions
#define INCLUDED_HelperFunctions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(HelperFunctions)



class HXCPP_CLASS_ATTRIBUTES HelperFunctions_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HelperFunctions_obj OBJ_;
		HelperFunctions_obj();

	public:
		enum { _hx_ClassId = 0x0e1e2981 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="HelperFunctions")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"HelperFunctions"); }

		inline static ::hx::ObjectPtr< HelperFunctions_obj > __new() {
			::hx::ObjectPtr< HelperFunctions_obj > __this = new HelperFunctions_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< HelperFunctions_obj > __alloc(::hx::Ctx *_hx_ctx) {
			HelperFunctions_obj *__this = (HelperFunctions_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HelperFunctions_obj), false, "HelperFunctions"));
			*(void **)__this = HelperFunctions_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HelperFunctions_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HelperFunctions",ed,56,db,b4); }

		static Float truncateFloat(Float number,int precision);
		static ::Dynamic truncateFloat_dyn();

};


#endif /* INCLUDED_HelperFunctions */ 
