// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxGridOverlay
#include <flixel/addons/display/FlxGridOverlay.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ebf13bfe79845218_36_create,"flixel.addons.display.FlxGridOverlay","create",0xa91ffddd,"flixel.addons.display.FlxGridOverlay.create","flixel/addons/display/FlxGridOverlay.hx",36,0x20fda630)
HX_LOCAL_STACK_FRAME(_hx_pos_ebf13bfe79845218_81_overlay,"flixel.addons.display.FlxGridOverlay","overlay",0xea83b18f,"flixel.addons.display.FlxGridOverlay.overlay","flixel/addons/display/FlxGridOverlay.hx",81,0x20fda630)
HX_LOCAL_STACK_FRAME(_hx_pos_ebf13bfe79845218_103_createGrid,"flixel.addons.display.FlxGridOverlay","createGrid",0xf435b343,"flixel.addons.display.FlxGridOverlay.createGrid","flixel/addons/display/FlxGridOverlay.hx",103,0x20fda630)
namespace flixel{
namespace addons{
namespace display{

void FlxGridOverlay_obj::__construct() { }

Dynamic FlxGridOverlay_obj::__CreateEmpty() { return new FlxGridOverlay_obj; }

void *FlxGridOverlay_obj::_hx_vtable = 0;

Dynamic FlxGridOverlay_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxGridOverlay_obj > _hx_result = new FlxGridOverlay_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxGridOverlay_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x61e7b1cb;
}

 ::flixel::FlxSprite FlxGridOverlay_obj::create(int CellWidth,int CellHeight,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< bool >  __o_Alternate,::hx::Null< int >  __o_Color1,::hx::Null< int >  __o_Color2){
            		int Width = __o_Width.Default(-1);
            		int Height = __o_Height.Default(-1);
            		bool Alternate = __o_Alternate.Default(true);
            		int Color1 = __o_Color1.Default(-1579290);
            		int Color2 = __o_Color2.Default(-2501163);
            	HX_GC_STACKFRAME(&_hx_pos_ebf13bfe79845218_36_create)
HXLINE(  37)		if ((Width == -1)) {
HXLINE(  39)			Width = ::flixel::FlxG_obj::width;
            		}
HXLINE(  42)		if ((Height == -1)) {
HXLINE(  44)			Height = ::flixel::FlxG_obj::height;
            		}
HXLINE(  47)		bool _hx_tmp;
HXDLIN(  47)		if ((Width >= CellWidth)) {
HXLINE(  47)			_hx_tmp = (Height < CellHeight);
            		}
            		else {
HXLINE(  47)			_hx_tmp = true;
            		}
HXDLIN(  47)		if (_hx_tmp) {
HXLINE(  49)			return null();
            		}
HXLINE(  52)		 ::openfl::display::BitmapData grid = ::flixel::addons::display::FlxGridOverlay_obj::createGrid(CellWidth,CellHeight,Width,Height,Alternate,Color1,Color2);
HXLINE(  54)		 ::flixel::FlxSprite output =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  56)		output->set_pixels(grid);
HXLINE(  57)		output->dirty = true;
HXLINE(  59)		return output;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxGridOverlay_obj,create,return )

 ::flixel::FlxSprite FlxGridOverlay_obj::overlay( ::flixel::FlxSprite Sprite,int CellWidth,int CellHeight,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< bool >  __o_Alternate,::hx::Null< int >  __o_Color1,::hx::Null< int >  __o_Color2){
            		int Width = __o_Width.Default(-1);
            		int Height = __o_Height.Default(-1);
            		bool Alternate = __o_Alternate.Default(true);
            		int Color1 = __o_Color1.Default(-1998067994);
            		int Color2 = __o_Color2.Default(-1998989867);
            	HX_GC_STACKFRAME(&_hx_pos_ebf13bfe79845218_81_overlay)
HXLINE(  82)		if ((Width == -1)) {
HXLINE(  84)			Width = ::flixel::FlxG_obj::width;
            		}
HXLINE(  87)		if ((Height == -1)) {
HXLINE(  89)			Height = ::flixel::FlxG_obj::height;
            		}
HXLINE(  92)		bool _hx_tmp;
HXDLIN(  92)		if ((Width >= CellWidth)) {
HXLINE(  92)			_hx_tmp = (Height < CellHeight);
            		}
            		else {
HXLINE(  92)			_hx_tmp = true;
            		}
HXDLIN(  92)		if (_hx_tmp) {
HXLINE(  94)			return null();
            		}
HXLINE(  97)		 ::openfl::display::BitmapData grid = ::flixel::addons::display::FlxGridOverlay_obj::createGrid(CellWidth,CellHeight,Width,Height,Alternate,Color1,Color2);
HXLINE(  98)		 ::openfl::display::BitmapData _hx_tmp1 = Sprite->get_pixels();
HXDLIN(  98)		 ::openfl::geom::Rectangle _hx_tmp2 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,Width,Height);
HXDLIN(  98)		_hx_tmp1->copyPixels(grid,_hx_tmp2, ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,0),null(),null(),true);
HXLINE(  99)		return Sprite;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxGridOverlay_obj,overlay,return )

 ::openfl::display::BitmapData FlxGridOverlay_obj::createGrid(int CellWidth,int CellHeight,int Width,int Height,bool Alternate,int Color1,int Color2){
            	HX_GC_STACKFRAME(&_hx_pos_ebf13bfe79845218_103_createGrid)
HXLINE( 105)		int rowColor = Color1;
HXLINE( 106)		int lastColor = Color1;
HXLINE( 107)		 ::openfl::display::BitmapData grid =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,Width,Height,true,null());
HXLINE( 110)		int y = 0;
HXLINE( 112)		while((y <= Height)){
HXLINE( 114)			bool _hx_tmp;
HXDLIN( 114)			bool _hx_tmp1;
HXDLIN( 114)			if ((y > 0)) {
HXLINE( 114)				_hx_tmp1 = (lastColor == rowColor);
            			}
            			else {
HXLINE( 114)				_hx_tmp1 = false;
            			}
HXDLIN( 114)			if (_hx_tmp1) {
HXLINE( 114)				_hx_tmp = Alternate;
            			}
            			else {
HXLINE( 114)				_hx_tmp = false;
            			}
HXDLIN( 114)			if (_hx_tmp) {
HXLINE( 116)				if ((lastColor == Color1)) {
HXLINE( 116)					lastColor = Color2;
            				}
            				else {
HXLINE( 116)					lastColor = Color1;
            				}
            			}
            			else {
HXLINE( 118)				bool _hx_tmp;
HXDLIN( 118)				bool _hx_tmp1;
HXDLIN( 118)				if ((y > 0)) {
HXLINE( 118)					_hx_tmp1 = (lastColor != rowColor);
            				}
            				else {
HXLINE( 118)					_hx_tmp1 = false;
            				}
HXDLIN( 118)				if (_hx_tmp1) {
HXLINE( 118)					_hx_tmp = (Alternate == false);
            				}
            				else {
HXLINE( 118)					_hx_tmp = false;
            				}
HXDLIN( 118)				if (_hx_tmp) {
HXLINE( 120)					if ((lastColor == Color2)) {
HXLINE( 120)						lastColor = Color1;
            					}
            					else {
HXLINE( 120)						lastColor = Color2;
            					}
            				}
            			}
HXLINE( 123)			int x = 0;
HXLINE( 125)			while((x <= Width)){
HXLINE( 127)				if ((x == 0)) {
HXLINE( 129)					rowColor = lastColor;
            				}
HXLINE( 132)				grid->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,x,y,CellWidth,CellHeight),lastColor);
HXLINE( 134)				if ((lastColor == Color1)) {
HXLINE( 136)					lastColor = Color2;
            				}
            				else {
HXLINE( 140)					lastColor = Color1;
            				}
HXLINE( 143)				x = (x + CellWidth);
            			}
HXLINE( 146)			y = (y + CellHeight);
            		}
HXLINE( 149)		return grid;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxGridOverlay_obj,createGrid,return )


FlxGridOverlay_obj::FlxGridOverlay_obj()
{
}

bool FlxGridOverlay_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"overlay") ) { outValue = overlay_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createGrid") ) { outValue = createGrid_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxGridOverlay_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxGridOverlay_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxGridOverlay_obj::__mClass;

static ::String FlxGridOverlay_obj_sStaticFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("overlay",90,43,10,a9),
	HX_("createGrid",e2,97,f9,56),
	::String(null())
};

void FlxGridOverlay_obj::__register()
{
	FlxGridOverlay_obj _hx_dummy;
	FlxGridOverlay_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.display.FlxGridOverlay",6d,37,0a,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxGridOverlay_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxGridOverlay_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxGridOverlay_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGridOverlay_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGridOverlay_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
